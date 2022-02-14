
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(char **VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3;
    char VAR_4[100];

    do
    {
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
 {
     if (VAR_3)
  FUNC_0("%2d  ", VAR_3);
     FUNC_0(VAR_0[VAR_3]);
     FUNC_0("\n");
 }
 FUNC_0("Choice: ");
 if (FUNC_1("%d", &VAR_2) != 1)
 {
     FUNC_1("%99s", VAR_4);
     VAR_2 = 0;
 }
    }
    while (VAR_2 < 1 || VAR_2 >= VAR_1);

    return VAR_2;
}
