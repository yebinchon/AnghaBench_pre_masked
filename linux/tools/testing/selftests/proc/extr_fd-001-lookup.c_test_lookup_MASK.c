
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,unsigned int,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_3)
{
 char VAR_4[64];
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0(VAR_4, sizeof(VAR_4), "/proc/self/fd/%u", VAR_3);
 FUNC_2(VAR_4);


 for (VAR_5 = 1; VAR_5 <= 255; VAR_5++) {
  if (VAR_5 == '/')
   continue;
  FUNC_0(VAR_4, sizeof(VAR_4), "/proc/self/fd/%c%u", VAR_5, VAR_3);
  FUNC_1(VAR_4);
 }


 for (VAR_5 = 1; VAR_5 <= 255; VAR_5++) {
  if (VAR_5 == '/')
   continue;
  FUNC_0(VAR_4, sizeof(VAR_4), "/proc/self/fd/%u%c", VAR_3, VAR_5);
  FUNC_1(VAR_4);
 }

 for (VAR_7 = VAR_1; VAR_7 < VAR_1 + 1024; VAR_7++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "/proc/self/fd/%d", VAR_7);
  FUNC_1(VAR_4);
 }
 for (VAR_7 = -1024; VAR_7 < 0; VAR_7++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "/proc/self/fd/%d", VAR_7);
  FUNC_1(VAR_4);
 }
 for (VAR_6 = VAR_0 - 1024; VAR_6 <= (unsigned int)VAR_0 + 1024; VAR_6++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "/proc/self/fd/%u", VAR_6);
  FUNC_1(VAR_4);
 }
 for (VAR_6 = VAR_2 - 1024; VAR_6 != 0; VAR_6++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "/proc/self/fd/%u", VAR_6);
  FUNC_1(VAR_4);
 }


}
