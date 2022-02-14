
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* DebugInfo; } ;
struct TYPE_9__ {struct TYPE_9__* drv_id; TYPE_7__ crst; } ;
struct TYPE_8__ {scalar_t__* Spare; } ;
typedef TYPE_2__ MMDevice ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 size_t VAR_0 ;
 TYPE_2__** VAR_1 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(MMDevice *VAR_2)
{
    DWORD VAR_3;
    FUNC_3("Freeing %s\n", FUNC_4(VAR_2->drv_id));

    for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
    {
        if (VAR_1[VAR_3] == VAR_2)
        {
            VAR_1[VAR_3] = VAR_1[--VAR_0];
            break;
        }
    }
    VAR_2->crst.DebugInfo->Spare[0] = 0;
    FUNC_0(&VAR_2->crst);
    FUNC_2(FUNC_1(), 0, VAR_2->drv_id);
    FUNC_2(FUNC_1(), 0, VAR_2);
}
