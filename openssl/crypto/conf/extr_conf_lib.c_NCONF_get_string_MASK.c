
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,char const*,char*,char const*) ;
 char* FUNC_2 (int const*,char const*,char const*) ;

char *FUNC_3(const CONF *VAR_3, const char *VAR_4, const char *VAR_5)
{
    char *VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);





    if (VAR_6)
        return VAR_6;

    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0,
                VAR_1);
        return ((void*)0);
    }
    FUNC_0(VAR_0, VAR_2);
    FUNC_1(4, "group=", VAR_4, " name=", VAR_5);
    return ((void*)0);
}
