
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_5__ {int start; int member_0; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,char*,char*) ;
 int * FUNC_3 (void*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static wchar_t *FUNC_6(void *VAR_0, char **VAR_1)
{


    bstr VAR_2 = {0};
    FUNC_2(((void*)0), &VAR_2, "\"%s\"", VAR_1[0]);

    for (int VAR_3 = 1; VAR_1[VAR_3]; VAR_3++) {
        FUNC_1(((void*)0), &VAR_2, FUNC_0(" "));
        FUNC_5(&VAR_2, VAR_1[VAR_3]);
    }

    wchar_t *VAR_4 = FUNC_3(VAR_0, VAR_2.start);
    FUNC_4(VAR_2.start);
    return VAR_4;
}
