
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ spiffs_file ;
typedef int s32_t ;
typedef int buff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,scalar_t__,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (char*,int,int) ;
 scalar_t__ FUNC_6 (int,char*,int ) ;

__attribute__((used)) static void FUNC_7 (char *VAR_5, char *VAR_6)
{
  spiffs_file VAR_7 = FUNC_1 (&VAR_4, VAR_5, VAR_3, 0);
  if (VAR_7 < 0)
    FUNC_4 ("spiffs_open");

  int VAR_8 = FUNC_5 (VAR_6, VAR_0 | VAR_1 | VAR_2, 0664);
  if (VAR_8 < 0)
    FUNC_4 (VAR_6);

  char VAR_9[512];
  s32_t VAR_10;
  while ((VAR_10 = FUNC_2 (&VAR_4, VAR_7, VAR_9, sizeof (VAR_9))) > 0)
    if (FUNC_6 (VAR_8, VAR_9, VAR_10) < 0)
      FUNC_4 ("write");

  FUNC_0 (&VAR_4, VAR_7);
  FUNC_3 (VAR_8);
}
