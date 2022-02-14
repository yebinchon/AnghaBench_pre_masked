
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ Scope; scalar_t__ TryLevel; scalar_t__ FramePtr; } ;
struct TYPE_19__ {scalar_t__ CiePointer; scalar_t__ Length; } ;
struct TYPE_18__ {char* Instructions; char* Next; } ;
struct TYPE_16__ {TYPE_2__* psh; TYPE_6__* p; } ;
struct TYPE_17__ {scalar_t__ cScopes; scalar_t__ cUWOP; scalar_t__ cFuncs; TYPE_3__ eh_frame; } ;
struct TYPE_14__ {int VirtualSize; } ;
struct TYPE_15__ {TYPE_1__ Misc; } ;
typedef TYPE_4__* PFILE_INFO ;
typedef TYPE_5__ DW2FDE ;
typedef TYPE_6__ DW2CIEFDE ;
typedef TYPE_7__ DW2CFSTATE ;


 int FUNC_0 (TYPE_5__*,char*) ;
 int FUNC_1 (TYPE_7__*,char*) ;
 TYPE_6__* FUNC_2 (TYPE_6__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_7__*,int ) ;

void
FUNC_4(PFILE_INFO VAR_0)
{
    DW2CIEFDE *VAR_1;
    DW2FDE VAR_2;
    char *VAR_3, *VAR_4;
    DW2CFSTATE VAR_5;

    VAR_0->cFuncs = 0;
    VAR_0->cScopes = 0;
    VAR_0->cUWOP = 0;
    VAR_5.FramePtr = 0;
    VAR_5.TryLevel = 0;

    VAR_1 = VAR_0->eh_frame.p;
    VAR_4 = (char*)VAR_1 + VAR_0->eh_frame.psh->Misc.VirtualSize;
    for (; VAR_1->Length && (char*)VAR_1 < VAR_4; VAR_1 = FUNC_2(VAR_1))
    {

        if (VAR_1->CiePointer != 0)
        {
            VAR_0->cFuncs++;
            FUNC_0(&VAR_2, (char*)VAR_1);

            VAR_3 = VAR_2.Instructions;
            while (VAR_3 < VAR_2.Next)
            {
                VAR_3 += FUNC_1(&VAR_5, VAR_3);
                VAR_0->cUWOP += FUNC_3(((void*)0), &VAR_5, 0);
                VAR_0->cScopes += VAR_5.Scope ? 1 : 0;
            }
        }
    }

    return;
}
