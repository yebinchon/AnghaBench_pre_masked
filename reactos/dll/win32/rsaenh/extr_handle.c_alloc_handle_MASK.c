
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct handle_table {size_t iFirstFree; size_t iEntries; int mutex; TYPE_1__* paEntries; } ;
struct TYPE_6__ {int refcount; } ;
struct TYPE_5__ {size_t iNextFree; TYPE_2__* pObject; } ;
typedef TYPE_2__ OBJECTHDR ;
typedef scalar_t__ HCRYPTKEY ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct handle_table*,TYPE_2__*,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_5 (struct handle_table*) ;

__attribute__((used)) static BOOL FUNC_6(struct handle_table *VAR_3, OBJECTHDR *VAR_4, HCRYPTKEY *VAR_5)
{
    BOOL VAR_6 = VAR_0;

    FUNC_4("(lpTable=%p, lpObject=%p, lpHandle=%p)\n", VAR_3, VAR_4, VAR_5);

    FUNC_0(&VAR_3->mutex);
    if (VAR_3->iFirstFree >= VAR_3->iEntries)
        if (!FUNC_5(VAR_3))
        {
            *VAR_5 = (HCRYPTKEY)VAR_1;
            goto exit;
        }

    *VAR_5 = FUNC_1(VAR_3->iFirstFree);

    VAR_3->paEntries[VAR_3->iFirstFree].pObject = VAR_4;
    VAR_3->iFirstFree = VAR_3->paEntries[VAR_3->iFirstFree].iNextFree;
    FUNC_2(&VAR_4->refcount);

    VAR_6 = VAR_2;
exit:
    FUNC_3(&VAR_3->mutex);
    return VAR_6;
}
