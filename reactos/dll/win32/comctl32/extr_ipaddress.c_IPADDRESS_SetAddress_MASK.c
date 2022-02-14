
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {TYPE_1__* Part; } ;
struct TYPE_5__ {int LowerLimit; int UpperLimit; int EditHwnd; } ;
typedef int LRESULT ;
typedef TYPE_1__ IPPART_INFO ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static LRESULT FUNC_4 (const IPADDRESS_INFO *VAR_2, DWORD VAR_3)
{
    WCHAR VAR_4[20];
    static const WCHAR VAR_5[] = { '%', 'd', 0 };
    int VAR_6;

    FUNC_2("\n");

    for (VAR_6 = 3; VAR_6 >= 0; VAR_6--) {
 const IPPART_INFO* VAR_7 = &VAR_2->Part[VAR_6];
        int VAR_8 = VAR_3 & 0xff;
 if ( (VAR_8 >= VAR_7->LowerLimit) && (VAR_8 <= VAR_7->UpperLimit) ) {
     FUNC_3 (VAR_4, VAR_5, VAR_8);
     FUNC_1 (VAR_7->EditHwnd, VAR_4);
     FUNC_0 (VAR_2, VAR_0);
        }
        VAR_3 >>= 8;
    }

    return VAR_1;
}
