
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3;


    if ((VAR_2==1) && (VAR_1[0] == '\0')) return;

    for (VAR_3=0; VAR_3< VAR_2; VAR_3++) {
 FUNC_0(VAR_1[VAR_3]);
 if (VAR_1[VAR_3] == '\n') FUNC_0('\r');
    }
}
