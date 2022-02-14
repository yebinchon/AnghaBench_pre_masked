
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
typedef char* BSTR ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static BSTR FUNC_4(BSTR VAR_2, const WIN32_FIND_DATAW *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2);
    WCHAR VAR_5[VAR_0];

    FUNC_3(VAR_5, VAR_2);
    if (VAR_2[VAR_4-1] != '\\')
        FUNC_2(VAR_5, VAR_1);
    FUNC_2(VAR_5, VAR_3->cFileName);

    return FUNC_0(VAR_5);
}
