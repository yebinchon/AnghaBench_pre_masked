
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIDATABASE ;
typedef int * LPWSTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *,int) ;
 TYPE_1__* FUNC_1 (int *,char const*,int) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

LPWSTR FUNC_5(MSIDATABASE *VAR_2, int VAR_3)
{
    static const WCHAR VAR_4[] =
        {'S','E','L','E','C','T',' ','`','M','e','s','s','a','g','e','`',' ',
         'F','R','O','M',' ','`','E','r','r','o','r','`',' ','W','H','E','R','E',' ',
         '`','E','r','r','o','r','`',' ','=',' ','%','i',0};
    MSIRECORD *VAR_5;
    LPWSTR VAR_6 = ((void*)0);

    if ((VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3)))
    {
        VAR_6 = FUNC_3(VAR_5, 1);
        FUNC_4(&VAR_5->hdr);
    }
    else if (VAR_3 < 2000)
    {
        int VAR_7 = FUNC_0(VAR_1, VAR_0 + VAR_3, (LPWSTR) &VAR_6, 0);
        if (VAR_7)
        {
            VAR_6 = FUNC_2((VAR_7 + 1) * sizeof(WCHAR));
            FUNC_0(VAR_1, VAR_0 + VAR_3, VAR_6, VAR_7 + 1);
        }
        else
            VAR_6 = ((void*)0);
    }

    return VAR_6;
}
