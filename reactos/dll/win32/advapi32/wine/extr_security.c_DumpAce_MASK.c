
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
typedef int ULONG ;
struct TYPE_6__ {int AceType; int AceFlags; } ;
struct TYPE_8__ {int SidStart; int Mask; TYPE_1__ Header; } ;
struct TYPE_7__ {scalar_t__ AceType; int AceSize; } ;
typedef int PSID ;
typedef TYPE_2__* PACE_HEADER ;
typedef TYPE_3__* LPVOID ;
typedef int BOOL ;
typedef TYPE_3__ ACCESS_ALLOWED_ACE ;




 int VAR_0 ;
 int FUNC_0 (int ,char**,int *) ;
 int FUNC_1 (int ,char**,int *) ;
 int FUNC_2 (char const*,int,char**,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 char const* VAR_13 ;
 char const* VAR_14 ;
 char const* VAR_15 ;
 char const* VAR_16 ;
 char const* VAR_17 ;
 char const* VAR_18 ;
 int VAR_19 ;


 int FUNC_3 (int ) ;
 int VAR_20 ;

__attribute__((used)) static BOOL FUNC_4(LPVOID VAR_21, WCHAR **VAR_22, ULONG *VAR_23)
{
    ACCESS_ALLOWED_ACE *VAR_24;
    static const WCHAR VAR_25 = '(';
    static const WCHAR VAR_26 = ')';
    static const WCHAR VAR_27 = ';';

    if (((PACE_HEADER)VAR_21)->AceType > 129 || ((PACE_HEADER)VAR_21)->AceSize < sizeof(ACCESS_ALLOWED_ACE))
    {
        FUNC_3(VAR_1);
        return VAR_3;
    }

    VAR_24 = VAR_21;
    FUNC_2(&VAR_25, 1, VAR_22, VAR_23);
    switch (VAR_24->Header.AceType)
    {
        case 131:
            FUNC_2(VAR_8, -1, VAR_22, VAR_23);
            break;
        case 130:
            FUNC_2(VAR_9, -1, VAR_22, VAR_23);
            break;
        case 128:
            FUNC_2(VAR_11, -1, VAR_22, VAR_23);
            break;
        case 129:
            FUNC_2(VAR_10, -1, VAR_22, VAR_23);
            break;
    }
    FUNC_2(&VAR_27, 1, VAR_22, VAR_23);

    if (VAR_24->Header.AceFlags & VAR_7)
        FUNC_2(VAR_18, -1, VAR_22, VAR_23);
    if (VAR_24->Header.AceFlags & VAR_0)
        FUNC_2(VAR_14, -1, VAR_22, VAR_23);
    if (VAR_24->Header.AceFlags & VAR_6)
        FUNC_2(VAR_17, -1, VAR_22, VAR_23);
    if (VAR_24->Header.AceFlags & VAR_5)
        FUNC_2(VAR_16, -1, VAR_22, VAR_23);
    if (VAR_24->Header.AceFlags & VAR_4)
        FUNC_2(VAR_15, -1, VAR_22, VAR_23);
    if (VAR_24->Header.AceFlags & VAR_19)
        FUNC_2(VAR_13, -1, VAR_22, VAR_23);
    if (VAR_24->Header.AceFlags & VAR_2)
        FUNC_2(VAR_12, -1, VAR_22, VAR_23);
    FUNC_2(&VAR_27, 1, VAR_22, VAR_23);
    FUNC_0(VAR_24->Mask, VAR_22, VAR_23);
    FUNC_2(&VAR_27, 1, VAR_22, VAR_23);

    FUNC_2(&VAR_27, 1, VAR_22, VAR_23);

    FUNC_2(&VAR_27, 1, VAR_22, VAR_23);
    if (!FUNC_1((PSID)&VAR_24->SidStart, VAR_22, VAR_23))
        return VAR_3;
    FUNC_2(&VAR_26, 1, VAR_22, VAR_23);
    return VAR_20;
}
