
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_serial_t ;
typedef int key_ref_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_1 (int ) ;
 long FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

long FUNC_6(key_serial_t VAR_3, key_serial_t VAR_4)
{
 key_ref_t VAR_5, VAR_6;
 long VAR_7;

 VAR_5 = FUNC_5(VAR_4, VAR_0, VAR_2);
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  goto error;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_0, VAR_1);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto error2;
 }

 VAR_7 = FUNC_2(FUNC_4(VAR_5), FUNC_4(VAR_6));

 FUNC_3(VAR_6);
error2:
 FUNC_3(VAR_5);
error:
 return VAR_7;
}
