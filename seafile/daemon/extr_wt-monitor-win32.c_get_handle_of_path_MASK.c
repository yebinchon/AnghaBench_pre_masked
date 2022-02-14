
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int const*,int ,int,int *,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int const*,int,int *,int *,int *) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static HANDLE
FUNC_5(const wchar_t *VAR_8)
{
    HANDLE VAR_9 = ((void*)0);

    VAR_9 = FUNC_0
        (VAR_8,
         VAR_2,
         VAR_3 | VAR_4
         | VAR_5,
         ((void*)0),
         VAR_7,
         VAR_0 |
         VAR_1,
         ((void*)0));

    if (VAR_9 == VAR_6) {
        char *VAR_10 = FUNC_3 (VAR_8, -1, ((void*)0), ((void*)0), ((void*)0));
        FUNC_4("failed to create dir handle for path %s, "
                     "error code %lu", VAR_10, FUNC_1());
        FUNC_2 (VAR_10);
        return ((void*)0);
    }

    return VAR_9;
}
