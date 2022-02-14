
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct handle_table {unsigned int iFirstFree; int mutex; TYPE_1__* paEntries; } ;
struct TYPE_5__ {int (* destructor ) (TYPE_2__*) ;int refcount; } ;
struct TYPE_4__ {unsigned int iNextFree; TYPE_2__* pObject; } ;
typedef TYPE_2__ OBJECTHDR ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct handle_table*,...) ;
 int VAR_1 ;
 int FUNC_5 (struct handle_table*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;

BOOL FUNC_7(struct handle_table *VAR_2, HCRYPTKEY VAR_3, DWORD VAR_4)
{
    unsigned int VAR_5 = FUNC_1(VAR_3);
    OBJECTHDR *VAR_6;
    BOOL VAR_7 = VAR_0;

    FUNC_4("(lpTable=%p, handle=%ld)\n", VAR_2, VAR_3);

    FUNC_0(&VAR_2->mutex);

    if (!FUNC_5(VAR_2, VAR_3, VAR_4))
        goto exit;

    VAR_6 = VAR_2->paEntries[VAR_5].pObject;
    if (FUNC_2(&VAR_6->refcount) == 0)
    {
        FUNC_4("destroying handle %ld\n", VAR_3);
        if (VAR_6->destructor)
            VAR_6->destructor(VAR_6);
    }

    VAR_2->paEntries[VAR_5].pObject = ((void*)0);
    VAR_2->paEntries[VAR_5].iNextFree = VAR_2->iFirstFree;
    VAR_2->iFirstFree = VAR_5;

    VAR_7 = VAR_1;
exit:
    FUNC_3(&VAR_2->mutex);
    return VAR_7;
}
