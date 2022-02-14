
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ uNumItem; size_t* order; int hwndSelf; TYPE_1__* items; } ;
struct TYPE_5__ {size_t iOrder; } ;
typedef int LRESULT ;
typedef size_t INT ;
typedef TYPE_1__ HEADER_ITEM ;
typedef TYPE_2__ HEADER_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 void* FUNC_4 (size_t*,size_t,size_t) ;
 size_t FUNC_5 (size_t*,size_t,size_t const) ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_6(HEADER_INFO *VAR_3, INT VAR_4, const INT *VAR_5)
{
    HEADER_ITEM *VAR_6;
    INT VAR_7;

    if ((UINT)VAR_4 != VAR_3->uNumItem)
      return VAR_0;

    if (FUNC_3(VAR_2))
    {
        FUNC_2("count=%d, order array={", VAR_4);
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
            FUNC_2("%d%c", VAR_5[VAR_7], VAR_7 != VAR_4-1 ? ',' : '}');
        FUNC_2("\n");
    }

    for (VAR_7=0; VAR_7<VAR_4; VAR_7++)
    {
        if (VAR_5[VAR_7] >= VAR_4 || VAR_5[VAR_7] < 0)



           VAR_3->order[VAR_7] = FUNC_4(VAR_3->order, VAR_7, VAR_4);
        else
        {
           INT VAR_8, VAR_9;

           VAR_3->order[VAR_7] = VAR_5[VAR_7];
           VAR_8 = VAR_7;

           while ((VAR_9 = FUNC_5(VAR_3->order, VAR_8, VAR_5[VAR_8])) != -1)
           {
               INT VAR_10;

               VAR_10 = FUNC_4(VAR_3->order, VAR_8, VAR_4);
               VAR_3->order[VAR_9] = VAR_10;
               VAR_8--;
           }
        }
    }

    for (VAR_7=0; VAR_7<VAR_4; VAR_7++)
    {
        VAR_6 = &VAR_3->items[VAR_3->order[VAR_7]];
        VAR_6->iOrder = VAR_7;
    }
    FUNC_0(VAR_3);
    FUNC_1(VAR_3->hwndSelf, ((void*)0), VAR_0);
    return VAR_1;
}
