
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {TYPE_1__* Pagefile; int hListBox; void* bModified; int hSelf; } ;
struct TYPE_7__ {int OldMinSize; int OldMaxSize; int NewMinSize; int NewMaxSize; void* bUsed; } ;
typedef TYPE_2__* PVIRTMEM ;
typedef int INT ;
typedef int HWND ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_2, PVIRTMEM VAR_3)
{
    INT VAR_4;

    VAR_3->hSelf = VAR_2;
    VAR_3->hListBox = FUNC_0(VAR_2, VAR_1);
    VAR_3->bModified = VAR_0;

    FUNC_4(VAR_3->hListBox);

    for (VAR_4 = 0; VAR_4 < 26; VAR_4++)
    {
        VAR_3->Pagefile[VAR_4].bUsed = VAR_0;
        VAR_3->Pagefile[VAR_4].OldMinSize = -1;
        VAR_3->Pagefile[VAR_4].OldMaxSize = -1;
        VAR_3->Pagefile[VAR_4].NewMinSize = -1;
        VAR_3->Pagefile[VAR_4].NewMaxSize = -1;
    }


    FUNC_3(VAR_3);


    FUNC_2(VAR_3);

    FUNC_1(VAR_3);
}
