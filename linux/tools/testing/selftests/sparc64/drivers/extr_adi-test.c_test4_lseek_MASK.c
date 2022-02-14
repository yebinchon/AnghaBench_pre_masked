
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,int,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_6)
{



 off_t VAR_7, VAR_8;
 int VAR_9;


 VAR_8 = 0x123456789abcdef0;
 VAR_7 = FUNC_3(VAR_6, VAR_8, VAR_4);
 if (VAR_7 != VAR_8) {
  VAR_9 = -1;
  FUNC_2(VAR_9);
 }


 VAR_7 = FUNC_3(VAR_6, VAR_8, VAR_4);
 if (VAR_7 < 0 && VAR_5 == VAR_0)
  FUNC_0(
   "\tSEEK_SET failed as designed. Not an error\n");
 else {
  VAR_9 = -2;
  FUNC_2(VAR_9);
 }

 VAR_7 = FUNC_3(VAR_6, 0, VAR_3);
 if (VAR_7 != VAR_8) {
  VAR_9 = -3;
  FUNC_2(VAR_9);
 }

 VAR_7 = FUNC_3(VAR_6, (0x100), VAR_3);
 if (VAR_7 != (VAR_8 + (0x100))) {
  VAR_9 = -4;
  FUNC_2(VAR_9);
 }

 VAR_7 = FUNC_3(VAR_6, (0xFFFFFFF000000000), VAR_3);
 if (VAR_7 != (VAR_8 + (0x100) + (0xFFFFFFF000000000))) {
  VAR_9 = -5;
  FUNC_2(VAR_9);
 }

 VAR_9 = 0;
out:
 FUNC_1(VAR_9);
}
