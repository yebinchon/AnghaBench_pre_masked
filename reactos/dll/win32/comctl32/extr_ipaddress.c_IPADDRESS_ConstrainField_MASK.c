
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {TYPE_1__* Part; } ;
struct TYPE_5__ {int LowerLimit; int UpperLimit; int EditHwnd; } ;
typedef TYPE_1__ IPPART_INFO ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__ const*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static BOOL FUNC_7 (const IPADDRESS_INFO *VAR_1, int VAR_2)
{
    static const WCHAR VAR_3[] = { '%', 'd', 0 };
    const IPPART_INFO *VAR_4;
    int VAR_5, VAR_6;
    WCHAR VAR_7[10];

    FUNC_3("(currentfield=%d)\n", VAR_2);

    if (VAR_2 < 0 || VAR_2 > 3) return VAR_0;

    VAR_4 = &VAR_1->Part[VAR_2];
    if (!FUNC_0 (VAR_4->EditHwnd, VAR_7, 4)) return VAR_0;

    VAR_5 = FUNC_4(VAR_7);
    FUNC_3("  curValue=%d\n", VAR_5);

    VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5);
    FUNC_3("  newValue=%d\n", VAR_6);

    if (VAR_6 < VAR_4->LowerLimit) VAR_6 = VAR_4->LowerLimit;
    if (VAR_6 > VAR_4->UpperLimit) VAR_6 = VAR_4->UpperLimit;

    if (VAR_6 == VAR_5) return VAR_0;

    FUNC_6 (VAR_7, VAR_3, VAR_6);
    FUNC_3("  field=%s\n", FUNC_5(VAR_7));
    return FUNC_2 (VAR_4->EditHwnd, VAR_7);
}
