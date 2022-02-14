
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int,int *,int*,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static UINT FUNC_1( struct tagMSIVIEW *VAR_11, UINT VAR_12, LPCWSTR *VAR_13,
                                      UINT *VAR_14, BOOL *VAR_15, LPCWSTR *VAR_16 )
{
    FUNC_0("(%p, %d, %p, %p, %p, %p)\n", VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
          VAR_16);

    if (VAR_12 == 0 || VAR_12 > VAR_7)
        return VAR_0;

    switch (VAR_12)
    {
    case 1:
        if (VAR_13) *VAR_13 = VAR_9;
        if (VAR_14) *VAR_14 = VAR_5 | VAR_6 | VAR_3;
        break;

    case 2:
        if (VAR_13) *VAR_13 = VAR_8;
        if (VAR_14) *VAR_14 = VAR_5 | VAR_6 | VAR_4;
        break;
    }
    if (VAR_16) *VAR_16 = VAR_10;
    if (VAR_15) *VAR_15 = VAR_2;
    return VAR_1;
}
