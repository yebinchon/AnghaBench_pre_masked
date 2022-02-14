
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int num; } ;
typedef int ch ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,struct mp_chmap*) ;
 char* FUNC_2 (struct mp_chmap*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*,size_t,char*,int,char*,int,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static char *FUNC_6(char *VAR_0, size_t VAR_1, int VAR_2,
                                     int VAR_3, struct mp_chmap VAR_4)
{
    char VAR_5[128];
    FUNC_1(VAR_5, sizeof(VAR_5), &VAR_4);
    char *VAR_6 = FUNC_2(&VAR_4);
    if (FUNC_5(VAR_6, VAR_5) != 0)
        FUNC_3(VAR_5, sizeof(VAR_5), " (%s)", VAR_6);
    FUNC_4(VAR_0, VAR_1, "%dHz %s %dch %s", VAR_2,
             VAR_5, VAR_4.num, FUNC_0(VAR_3));
    return VAR_0;
}
