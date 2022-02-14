
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int ,char const*,char*,char const*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2)
{
 const char *VAR_3 = VAR_0;
 int VAR_4 = FUNC_2(VAR_2);

 if (VAR_4 && (VAR_2[VAR_4-1] == '\n'))
  FUNC_0(VAR_1, VAR_3, "	%s", VAR_2);
 else
  FUNC_0(VAR_1, VAR_3, "	%s\n", VAR_2);

 FUNC_1(VAR_1);
}
