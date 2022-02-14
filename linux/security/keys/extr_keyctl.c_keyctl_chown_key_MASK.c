
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct key_user {int qnkeys; unsigned int qnbytes; int lock; int nikeys; int nkeys; } ;
struct key {unsigned int quotalen; scalar_t__ state; int sem; int gid; int uid; struct key_user* user; int flags; } ;
typedef int kuid_t ;
typedef int kgid_t ;
typedef int key_serial_t ;
typedef int key_ref_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct key*) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 struct key* FUNC_11 (int ) ;
 struct key_user* FUNC_12 (int ) ;
 int FUNC_13 (struct key_user*) ;
 int FUNC_14 (int ,int,int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;

long FUNC_23(key_serial_t VAR_15, uid_t VAR_16, gid_t VAR_17)
{
 struct key_user *VAR_18, *VAR_19 = ((void*)0);
 struct key *VAR_20;
 key_ref_t VAR_21;
 long VAR_22;
 kuid_t VAR_23;
 kgid_t VAR_24;

 VAR_23 = FUNC_16(FUNC_5(), VAR_16);
 VAR_24 = FUNC_15(FUNC_5(), VAR_17);
 VAR_22 = -VAR_3;
 if ((VAR_16 != (uid_t) -1) && !FUNC_21(VAR_23))
  goto error;
 if ((VAR_17 != (gid_t) -1) && !FUNC_8(VAR_24))
  goto error;

 VAR_22 = 0;
 if (VAR_16 == (uid_t) -1 && VAR_17 == (gid_t) -1)
  goto error;

 VAR_21 = FUNC_14(VAR_15, VAR_8 | VAR_9,
      VAR_10);
 if (FUNC_0(VAR_21)) {
  VAR_22 = FUNC_1(VAR_21);
  goto error;
 }

 VAR_20 = FUNC_11(VAR_21);


 VAR_22 = -VAR_1;
 FUNC_6(&VAR_20->sem);

 if (!FUNC_4(VAR_0)) {

  if (VAR_16 != (uid_t) -1 && !FUNC_20(VAR_20->uid, VAR_23))
   goto error_put;



  if (VAR_17 != (gid_t) -1 && !FUNC_7(VAR_24, VAR_20->gid) && !FUNC_9(VAR_24))
   goto error_put;
 }


 if (VAR_16 != (uid_t) -1 && !FUNC_20(VAR_23, VAR_20->uid)) {
  VAR_22 = -VAR_4;
  VAR_18 = FUNC_12(VAR_23);
  if (!VAR_18)
   goto error_put;


  if (FUNC_19(VAR_6, &VAR_20->flags)) {
   unsigned VAR_25 = FUNC_20(VAR_23, VAR_5) ?
    VAR_14 : VAR_12;
   unsigned VAR_26 = FUNC_20(VAR_23, VAR_5) ?
    VAR_13 : VAR_11;

   FUNC_17(&VAR_18->lock);
   if (VAR_18->qnkeys + 1 >= VAR_25 ||
       VAR_18->qnbytes + VAR_20->quotalen >= VAR_26 ||
       VAR_18->qnbytes + VAR_20->quotalen <
       VAR_18->qnbytes)
    goto quota_overrun;

   VAR_18->qnkeys++;
   VAR_18->qnbytes += VAR_20->quotalen;
   FUNC_18(&VAR_18->lock);

   FUNC_17(&VAR_20->user->lock);
   VAR_20->user->qnkeys--;
   VAR_20->user->qnbytes -= VAR_20->quotalen;
   FUNC_18(&VAR_20->user->lock);
  }

  FUNC_2(&VAR_20->user->nkeys);
  FUNC_3(&VAR_18->nkeys);

  if (VAR_20->state != VAR_7) {
   FUNC_2(&VAR_20->user->nikeys);
   FUNC_3(&VAR_18->nikeys);
  }

  VAR_19 = VAR_20->user;
  VAR_20->user = VAR_18;
  VAR_20->uid = VAR_23;
 }


 if (VAR_17 != (gid_t) -1)
  VAR_20->gid = VAR_24;

 VAR_22 = 0;

error_put:
 FUNC_22(&VAR_20->sem);
 FUNC_10(VAR_20);
 if (VAR_19)
  FUNC_13(VAR_19);
error:
 return VAR_22;

quota_overrun:
 FUNC_18(&VAR_18->lock);
 VAR_19 = VAR_18;
 VAR_22 = -VAR_2;
 goto error_put;
}
