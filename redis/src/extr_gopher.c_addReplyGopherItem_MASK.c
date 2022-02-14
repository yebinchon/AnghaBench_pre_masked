
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int client ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,char*,char const*,char const*,char const*,char const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(client *VAR_0, const char *VAR_1, const char *VAR_2,
                        const char *VAR_3, const char *VAR_4, int VAR_5)
{
    sds VAR_6 = FUNC_1(FUNC_2(),"%s%s\t%s\t%s\t%i\r\n",
                         VAR_1, VAR_2,
                         VAR_3 ? VAR_3 : "(NULL)",
                         VAR_4 ? VAR_4 : "(NULL)",
                         VAR_5);
    FUNC_0(VAR_0,VAR_6,FUNC_4(VAR_6));
    FUNC_3(VAR_6);
}
