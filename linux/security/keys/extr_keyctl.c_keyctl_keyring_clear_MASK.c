
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int flags; } ;
typedef int key_serial_t ;
typedef int key_ref_t ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct key* FUNC_4 (int ) ;
 long FUNC_5 (struct key*) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

long FUNC_8(key_serial_t VAR_6)
{
 key_ref_t VAR_7;
 struct key *VAR_8;
 long VAR_9;

 VAR_7 = FUNC_6(VAR_6, VAR_4, VAR_5);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);


  if (FUNC_2(VAR_0)) {
   VAR_7 = FUNC_6(VAR_6, 0, 0);
   if (FUNC_0(VAR_7))
    goto error;
   if (FUNC_7(VAR_3,
         &FUNC_4(VAR_7)->flags))
    goto clear;
   goto error_put;
  }

  goto error;
 }

clear:
 VAR_8 = FUNC_4(VAR_7);
 if (FUNC_7(VAR_2, &VAR_8->flags))
  VAR_9 = -VAR_1;
 else
  VAR_9 = FUNC_5(VAR_8);
error_put:
 FUNC_3(VAR_7);
error:
 return VAR_9;
}
