
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_value {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct inf_value*) ;
 char* FUNC_3 (char**,int ) ;

__attribute__((used)) static BOOL FUNC_4(struct inf_value *VAR_2, int VAR_3, char **VAR_4, const char *VAR_5)
{
    char *VAR_6, *VAR_7, *VAR_8;
    int VAR_9 = 0;

    VAR_6 = FUNC_2(VAR_2);
    if (!VAR_6) return VAR_0;

    VAR_7 = VAR_6;
    do
    {
        VAR_9++;
        VAR_8 = FUNC_3(&VAR_7, VAR_1);

        if (VAR_3 == VAR_9)
        {
            BOOL VAR_10 = FUNC_0(VAR_4, VAR_7);
            FUNC_1(VAR_6);
            return VAR_10;
        }

        VAR_7 = VAR_8;
    } while (VAR_7);

    return FUNC_0(VAR_4, VAR_5);
}
