
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int ushort ;
typedef int uchar ;
struct TYPE_4__ {int flags; int (* mblen ) (TYPE_1__*,int *,int) ;int codepage; } ;
typedef TYPE_1__ csconv_t ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int const*,int,char*,int,int *,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int
FUNC_5(csconv_t *VAR_5, ushort *VAR_6, int VAR_7, uchar *VAR_8, int VAR_9)
{
    BOOL VAR_10 = 0;
    BOOL *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    int VAR_13;

    if (VAR_9 == 0)
        return FUNC_3(VAR_0);
    if (!FUNC_2(VAR_5->codepage))
    {
        VAR_11 = &VAR_10;




    }
    VAR_13 = FUNC_1(VAR_5->codepage, VAR_12,
            (const wchar_t *)VAR_6, VAR_7, (char *)VAR_8, VAR_9, ((void*)0), VAR_11);
    if (VAR_13 == 0)
    {
        if (FUNC_0() == VAR_2)
            return FUNC_3(VAR_0);
        return FUNC_3(VAR_1);
    }
    else if (VAR_10 && !(VAR_5->flags & VAR_3))
        return FUNC_3(VAR_1);
    else if (VAR_5->mblen(VAR_5, VAR_8, VAR_13) != VAR_13)
        return FUNC_3(VAR_1);
    return VAR_13;
}
