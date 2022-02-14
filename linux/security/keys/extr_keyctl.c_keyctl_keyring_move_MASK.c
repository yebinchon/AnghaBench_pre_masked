
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key_serial_t ;
typedef int key_ref_t ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_1 (int ) ;
 long FUNC_2 (int ,int ,int ,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

long FUNC_6(key_serial_t VAR_5, key_serial_t VAR_6,
    key_serial_t VAR_7, unsigned int VAR_8)
{
 key_ref_t VAR_9, VAR_10, VAR_11;
 long VAR_12;

 if (VAR_8 & ~VAR_1)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_5, VAR_2, VAR_3);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_5(VAR_6, 0, VAR_4);
 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_1(VAR_10);
  goto error2;
 }

 VAR_11 = FUNC_5(VAR_7, VAR_2, VAR_4);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto error3;
 }

 VAR_12 = FUNC_2(FUNC_4(VAR_9), FUNC_4(VAR_10),
         FUNC_4(VAR_11), VAR_8);

 FUNC_3(VAR_11);
error3:
 FUNC_3(VAR_10);
error2:
 FUNC_3(VAR_9);
 return VAR_12;
}
