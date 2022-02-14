
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_2__ {int JobTime; int Flags; int Command; int DaysOfWeek; scalar_t__ DaysOfMonth; } ;
typedef int PWSTR ;
typedef int PBYTE ;
typedef scalar_t__ NET_API_STATUS ;
typedef int INT ;
typedef int DWORD_PTR ;
typedef scalar_t__ BOOL ;
typedef TYPE_1__ AT_INFO ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static
INT
FUNC_3(
    PWSTR VAR_5,
    ULONG VAR_6,
    ULONG VAR_7,
    ULONG VAR_8,
    UCHAR VAR_9,
    BOOL VAR_10,
    BOOL VAR_11,
    PWSTR VAR_12)
{
    AT_INFO VAR_13;
    ULONG VAR_14 = 0;
    NET_API_STATUS VAR_15;

    VAR_13.JobTime = (DWORD_PTR)VAR_6 * 3600000 +
                         (DWORD_PTR)VAR_7 * 60000;
    VAR_13.DaysOfMonth = VAR_8;
    VAR_13.DaysOfWeek = VAR_9;
    VAR_13.Flags = (VAR_10 ? 0 : VAR_1) |
                       (VAR_11 ? VAR_2 : 0);
    VAR_13.Command = VAR_12;

    VAR_15 = FUNC_1(VAR_5,
                               (PBYTE)&VAR_13,
                               &VAR_14);
    if (VAR_15 != VAR_3)
    {
        FUNC_2(VAR_15);
        return 1;
    }

    FUNC_0(VAR_4, VAR_0, VAR_14);

    return 0;
}
