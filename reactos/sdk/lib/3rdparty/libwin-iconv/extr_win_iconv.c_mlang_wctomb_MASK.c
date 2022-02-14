
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ushort ;
typedef int uchar ;
struct TYPE_4__ {int (* mblen ) (TYPE_1__*,int *,int) ;int codepage; int mode; } ;
typedef TYPE_1__ csconv_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int const*,int*,char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int
FUNC_4(csconv_t *VAR_4, ushort *VAR_5, int VAR_6, uchar *VAR_7, int VAR_8)
{
    char VAR_9[VAR_2];
    int VAR_10 = VAR_2;
    int VAR_11 = VAR_6;
    HRESULT VAR_12;

    VAR_12 = FUNC_0(&VAR_4->mode, VAR_4->codepage,
            (const wchar_t *)VAR_5, &VAR_6, VAR_9, &VAR_10);
    if (VAR_12 != VAR_3 || VAR_11 != VAR_6)
        return FUNC_2(VAR_1);
    else if (VAR_8 < VAR_10)
        return FUNC_2(VAR_0);
    else if (VAR_4->mblen(VAR_4, (uchar *)VAR_9, VAR_10) != VAR_10)
        return FUNC_2(VAR_1);
    FUNC_1(VAR_7, VAR_9, VAR_10);
    return VAR_10;
}
