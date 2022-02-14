
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ a; scalar_t__ b; scalar_t__ result; int shift; } ;
typedef scalar_t__ LONGLONG ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,char*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_2;
    LONGLONG VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
 VAR_3 = FUNC_1(VAR_1[VAR_2].a, VAR_1[VAR_2].b, VAR_1[VAR_2].shift);
 FUNC_0(VAR_3 == VAR_1[VAR_2].result,
           "call failed: RtlExtendedMagicDivide(0x%s, 0x%s, %d) has result 0x%s, expected 0x%s\n",
    FUNC_2(VAR_1[VAR_2].a), FUNC_2(VAR_1[VAR_2].b), VAR_1[VAR_2].shift,
       FUNC_2(VAR_3), FUNC_2(VAR_1[VAR_2].result));
    }
}
