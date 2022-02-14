
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CTLOG ;
typedef int CONF ;


 int FUNC_0 (int **,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int const*,char const*,char*) ;

__attribute__((used)) static int FUNC_3(CTLOG **VAR_3, const CONF *VAR_4, const char *VAR_5)
{
    const char *VAR_6 = FUNC_2(VAR_4, VAR_5, "description");
    char *VAR_7;

    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    VAR_7 = FUNC_2(VAR_4, VAR_5, "key");
    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    return FUNC_0(VAR_3, VAR_7, VAR_6);
}
