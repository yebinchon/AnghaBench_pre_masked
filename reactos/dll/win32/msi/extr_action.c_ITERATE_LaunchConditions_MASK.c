
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int ui_level; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int LPWSTR ;
typedef TYPE_1__* LPVOID ;
typedef int * LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,char const*,int ) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static UINT FUNC_5(MSIRECORD *VAR_6, LPVOID VAR_7)
{
    MSIPACKAGE* VAR_8 = VAR_7;
    LPCWSTR VAR_9 = ((void*)0);
    LPCWSTR VAR_10 = ((void*)0);
    UINT VAR_11;

    static const WCHAR VAR_12[]=
        {'I','n','s','t','a','l','l',' ','F','a', 'i','l','e','d',0};

    VAR_9 = FUNC_1(VAR_6,1);

    VAR_11 = FUNC_0(VAR_8,VAR_9);
    if (VAR_11 == VAR_5)
    {
        if ((VAR_8->ui_level & VAR_2) != VAR_3)
        {
            LPWSTR VAR_13;
            VAR_10 = FUNC_1(VAR_6,2);
            FUNC_3(VAR_8,VAR_10,&VAR_13);
            FUNC_2(((void*)0),VAR_13,VAR_12,VAR_4);
            FUNC_4(VAR_13);
        }

        return VAR_0;
    }

    return VAR_1;
}
