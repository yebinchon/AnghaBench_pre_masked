
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ushort ;
typedef int uchar ;
struct TYPE_4__ {int (* mblen ) (TYPE_1__*,int const*,int) ;int codepage; int mode; } ;
typedef TYPE_1__ csconv_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,char const*,int*,int *,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static int
FUNC_3(csconv_t *VAR_2, const uchar *VAR_3, int VAR_4, ushort *VAR_5, int *VAR_6)
{
    int VAR_7;
    int VAR_8;
    HRESULT VAR_9;

    VAR_7 = VAR_2->mblen(VAR_2, VAR_3, VAR_4);
    if (VAR_7 == -1)
        return -1;
    VAR_8 = VAR_7;
    VAR_9 = FUNC_0(&VAR_2->mode, VAR_2->codepage,
            (const char *)VAR_3, &VAR_8, (wchar_t *)VAR_5, VAR_6);
    if (VAR_9 != VAR_1 || VAR_8 != VAR_7)
        return FUNC_1(VAR_0);
    return VAR_7;
}
