
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_13__ {int Flags; int lStructSize; scalar_t__ lpfnHook; } ;
struct TYPE_12__ {int Flags; int lStructSize; scalar_t__ lpfnHook; } ;
struct TYPE_11__ {int open; void* fileokstring; void* lbselchstring; TYPE_2__* ofnW; TYPE_3__* ofnA; void* hook; scalar_t__ lParam; } ;
typedef TYPE_1__* PFD31_DATA ;
typedef TYPE_2__* LPOPENFILENAMEW ;
typedef TYPE_3__* LPOPENFILENAMEA ;
typedef scalar_t__ LPARAM ;
typedef TYPE_1__ FD31_DATA ;
typedef scalar_t__ BOOL ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 void* VAR_5 ;
 void* FUNC_5 (int) ;

__attribute__((used)) static PFD31_DATA FUNC_6(LPARAM VAR_6, UINT VAR_7, BOOL VAR_8)
{
    FD31_DATA *VAR_9 = FUNC_5(sizeof(*VAR_9));

    FUNC_4("alloc private buf %p\n", VAR_9);
    if (!VAR_9) return ((void*)0);
    VAR_9->hook = VAR_0;
    VAR_9->lParam = VAR_6;
    VAR_9->open = (VAR_7 == VAR_4);

    if (VAR_8)
    {
        VAR_9->ofnA = ((void*)0);
        VAR_9->ofnW = (LPOPENFILENAMEW) VAR_6;
        if (VAR_9->ofnW->Flags & VAR_3)
            if (VAR_9->ofnW->lpfnHook)
                VAR_9->hook = VAR_5;
    }
    else
    {
        VAR_9->ofnA = (LPOPENFILENAMEA) VAR_6;
        if (VAR_9->ofnA->Flags & VAR_3)
            if (VAR_9->ofnA->lpfnHook)
                VAR_9->hook = VAR_5;
        VAR_9->ofnW = FUNC_5(VAR_9->ofnA->lStructSize);
        VAR_9->ofnW->lStructSize = VAR_9->ofnA->lStructSize;
        FUNC_2(VAR_9->ofnA, VAR_9->ofnW, VAR_9->open);
    }

    if (! FUNC_1(VAR_9))
    {
        FUNC_0(VAR_9);
        return ((void*)0);
    }
    VAR_9->lbselchstring = FUNC_3(VAR_2);
    VAR_9->fileokstring = FUNC_3(VAR_1);

    return VAR_9;
}
