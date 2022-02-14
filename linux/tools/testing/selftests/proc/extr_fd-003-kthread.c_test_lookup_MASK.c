
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(int VAR_3)
{
 char VAR_4[64];
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_6 = VAR_1; VAR_6 < VAR_1 + 1024; VAR_6++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "%d", VAR_6);
  FUNC_1(VAR_3, VAR_4);
 }
 for (VAR_6 = -1024; VAR_6 < 1024; VAR_6++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "%d", VAR_6);
  FUNC_1(VAR_3, VAR_4);
 }
 for (VAR_5 = VAR_0 - 1024; VAR_5 < (unsigned int)VAR_0 + 1024; VAR_5++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "%u", VAR_5);
  FUNC_1(VAR_3, VAR_4);
 }
 for (VAR_5 = VAR_2 - 1024; VAR_5 != 0; VAR_5++) {
  FUNC_0(VAR_4, sizeof(VAR_4), "%u", VAR_5);
  FUNC_1(VAR_3, VAR_4);
 }
}
