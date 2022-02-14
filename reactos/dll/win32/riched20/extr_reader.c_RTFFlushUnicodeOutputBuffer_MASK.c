
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwOutputCount; int style; int OutputBuffer; int editor; } ;
typedef TYPE_1__ RTF_Info ;


 int FUNC_0 (int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_1(RTF_Info *VAR_0)
{
        if (VAR_0->dwOutputCount)
        {
                FUNC_0(VAR_0->editor, 0, VAR_0->OutputBuffer,
                                        VAR_0->dwOutputCount, VAR_0->style);
                VAR_0->dwOutputCount = 0;
        }
}
