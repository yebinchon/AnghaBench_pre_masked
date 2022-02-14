
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int * VAR_3 ;
 int FUNC_2 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_3(char *VAR_4, char *VAR_5)
{
 if (FUNC_0(VAR_3[VAR_1]))
  FUNC_2(VAR_4, "atool -a", VAR_0);
 else if (FUNC_0(VAR_3[VAR_2]))
  FUNC_2(VAR_4, "bsdtar -acvf", VAR_0);
 else if (FUNC_1(VAR_5, ".zip"))
  FUNC_2(VAR_4, "zip -r", VAR_0);
 else
  FUNC_2(VAR_4, "tar -acvf", VAR_0);
}
