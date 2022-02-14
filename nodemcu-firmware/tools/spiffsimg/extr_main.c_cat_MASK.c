
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spiffs_file ;
typedef int s32_t ;
typedef int buff ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4 (char *VAR_3)
{
  spiffs_file VAR_4 = FUNC_1 (&VAR_2, VAR_3, VAR_0, 0);
  char VAR_5[512];
  s32_t VAR_6;
  while ((VAR_6 = FUNC_2 (&VAR_2, VAR_4, VAR_5, sizeof (VAR_5))) > 0)
    FUNC_3 (VAR_1, VAR_5, VAR_6);
  FUNC_0 (&VAR_2, VAR_4);
}
