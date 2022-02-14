
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int perm; int sem; int uid; } ;
typedef int key_serial_t ;
typedef int key_ref_t ;
typedef int key_perm_t ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct key*) ;
 struct key* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

long FUNC_10(key_serial_t VAR_10, key_perm_t VAR_11)
{
 struct key *VAR_12;
 key_ref_t VAR_13;
 long VAR_14;

 VAR_14 = -VAR_2;
 if (VAR_11 & ~(VAR_8 | VAR_9 | VAR_3 | VAR_7))
  goto error;

 VAR_13 = FUNC_7(VAR_10, VAR_4 | VAR_5,
      VAR_6);
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  goto error;
 }

 VAR_12 = FUNC_6(VAR_13);


 VAR_14 = -VAR_1;
 FUNC_4(&VAR_12->sem);


 if (FUNC_2(VAR_0) || FUNC_8(VAR_12->uid, FUNC_3())) {
  VAR_12->perm = VAR_11;
  VAR_14 = 0;
 }

 FUNC_9(&VAR_12->sem);
 FUNC_5(VAR_12);
error:
 return VAR_14;
}
