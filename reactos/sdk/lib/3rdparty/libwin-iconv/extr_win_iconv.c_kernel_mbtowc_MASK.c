
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ushort ;
typedef int uchar ;
struct TYPE_4__ {int (* mblen ) (TYPE_1__*,int const*,int) ;int codepage; } ;
typedef TYPE_1__ csconv_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;

__attribute__((used)) static int
FUNC_4(csconv_t *VAR_1, const uchar *VAR_2, int VAR_3, ushort *VAR_4, int *VAR_5)
{
    int VAR_6;

    VAR_6 = VAR_1->mblen(VAR_1, VAR_2, VAR_3);
    if (VAR_6 == -1)
        return -1;
    *VAR_5 = FUNC_0(VAR_1->codepage, FUNC_1 (VAR_1->codepage),
            (const char *)VAR_2, VAR_6, (wchar_t *)VAR_4, *VAR_5);
    if (*VAR_5 == 0)
        return FUNC_2(VAR_0);
    return VAR_6;
}
