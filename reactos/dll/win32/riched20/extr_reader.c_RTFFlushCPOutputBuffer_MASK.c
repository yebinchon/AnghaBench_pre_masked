
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int dwCPOutputCount; int cpOutputBuffer; int codePage; } ;
typedef TYPE_1__ RTF_Info ;


 int FUNC_0 (int ,int ,int ,int,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(RTF_Info *VAR_0)
{
        int VAR_1 = VAR_0->dwCPOutputCount * 2 * sizeof(WCHAR);
        WCHAR *VAR_2 = FUNC_2(VAR_1);
        int VAR_3;

        VAR_3 = FUNC_0(VAR_0->codePage, 0, VAR_0->cpOutputBuffer,
                                     VAR_0->dwCPOutputCount, VAR_2, VAR_1/sizeof(WCHAR));
        VAR_0->dwCPOutputCount = 0;

        FUNC_1(VAR_0, VAR_2, VAR_3);
        FUNC_3(VAR_2);
}
