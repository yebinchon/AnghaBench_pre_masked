
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int mask; scalar_t__ iOrder; } ;
struct TYPE_13__ {scalar_t__ uNumItem; int hwndSelf; int * items; } ;
typedef int LRESULT ;
typedef size_t INT ;
typedef int HEADER_ITEM ;
typedef TYPE_1__ HEADER_INFO ;
typedef TYPE_2__ HDITEMW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,size_t,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_2__ const*,int ,void**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,size_t,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int,TYPE_2__ const*,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (char*,size_t) ;
 int VAR_4 ;
 int FUNC_7 (void*) ;

__attribute__((used)) static LRESULT
FUNC_8 (HEADER_INFO *VAR_5, INT VAR_6, const HDITEMW *VAR_7, BOOL VAR_8)
{
    HEADER_ITEM *VAR_9;
    HDITEMW VAR_10;
    void *VAR_11;

    if (VAR_7 == ((void*)0))
 return VAR_0;
    if ((VAR_6 < 0) || (VAR_6 >= (INT)VAR_5->uNumItem))
        return VAR_0;

    FUNC_6("[nItem=%d]\n", VAR_6);

    FUNC_1(VAR_5, &VAR_10, VAR_7, VAR_8, &VAR_11);
    if (FUNC_2(VAR_5, VAR_3, VAR_6, &VAR_10))
    {
        FUNC_7(VAR_11);
        return VAR_0;
    }

    VAR_9 = &VAR_5->items[VAR_6];
    FUNC_4(VAR_9, VAR_7->mask, VAR_7, VAR_8);

    if (VAR_7->mask & VAR_1)
        if (VAR_7->iOrder >= 0 && VAR_7->iOrder < VAR_5->uNumItem)
            FUNC_0(VAR_5, VAR_6, VAR_7->iOrder);

    FUNC_2(VAR_5, VAR_2, VAR_6, &VAR_10);

    FUNC_3 (VAR_5);

    FUNC_5(VAR_5->hwndSelf, ((void*)0), VAR_0);

    FUNC_7(VAR_11);
    return VAR_4;
}
