
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;
typedef int time_t ;
struct tm {int dummy; } ;
struct Output {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (struct Output*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (struct tm*,int *) ;
 int FUNC_3 (char*,int,char*,struct tm*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct Output *VAR_0, FILE *VAR_1)
{
    time_t VAR_2 = FUNC_4(0);
    char VAR_3[64];
    struct tm VAR_4;

    FUNC_0(VAR_0);

    FUNC_2(&VAR_4, &VAR_2);



    FUNC_3(VAR_3, sizeof(VAR_3), "%c", &VAR_4);

    FUNC_1(VAR_1, "# Masscan done at %s\n",
                VAR_3);
}
