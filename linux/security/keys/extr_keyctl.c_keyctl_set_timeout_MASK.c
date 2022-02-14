
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int flags; } ;
typedef int key_serial_t ;
typedef struct key* key_ref_t ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (struct key*) ;
 struct key* FUNC_2 (int ) ;
 int FUNC_3 (struct key*) ;
 struct key* FUNC_4 (struct key*) ;
 int FUNC_5 (struct key*,unsigned int) ;
 struct key* FUNC_6 (int ,int,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

long FUNC_8(key_serial_t VAR_6, unsigned VAR_7)
{
 struct key *VAR_8, *VAR_9;
 key_ref_t VAR_10;
 long VAR_11;

 VAR_10 = FUNC_6(VAR_6, VAR_3 | VAR_4,
      VAR_5);
 if (FUNC_0(VAR_10)) {


  if (FUNC_1(VAR_10) == -VAR_0) {
   VAR_9 = FUNC_2(VAR_6);
   if (!FUNC_0(VAR_9)) {
    FUNC_3(VAR_9);
    VAR_10 = FUNC_6(VAR_6,
         VAR_4,
         0);
    if (!FUNC_0(VAR_10))
     goto okay;
   }
  }

  VAR_11 = FUNC_1(VAR_10);
  goto error;
 }

okay:
 VAR_8 = FUNC_4(VAR_10);
 VAR_11 = 0;
 if (FUNC_7(VAR_2, &VAR_8->flags))
  VAR_11 = -VAR_1;
 else
  FUNC_5(VAR_8, VAR_7);
 FUNC_3(VAR_8);

error:
 return VAR_11;
}
