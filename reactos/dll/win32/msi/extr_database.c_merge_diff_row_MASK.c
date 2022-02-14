
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_26__ {int db; int curview; int merge; TYPE_3__* curtable; } ;
struct TYPE_25__ {int entry; int data; } ;
struct TYPE_24__ {int rows; int numconflicts; int name; } ;
struct TYPE_23__ {int hdr; } ;
struct TYPE_22__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef TYPE_3__ MERGETABLE ;
typedef TYPE_4__ MERGEROW ;
typedef TYPE_5__ MERGEDATA ;
typedef TYPE_4__* LPWSTR ;
typedef TYPE_5__* LPVOID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_4__*,TYPE_2__**) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__**) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 TYPE_4__* FUNC_6 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 TYPE_4__* FUNC_8 (int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static UINT FUNC_11(MSIRECORD *VAR_3, LPVOID VAR_4)
{
    MERGEDATA *VAR_5 = VAR_4;
    MERGETABLE *VAR_6 = VAR_5->curtable;
    MERGEROW *VAR_7;
    MSIQUERY *VAR_8 = ((void*)0);
    MSIRECORD *VAR_9 = ((void*)0);
    LPWSTR VAR_10 = ((void*)0);
    UINT VAR_11 = VAR_2;

    if (FUNC_5(VAR_5->db, VAR_6->name))
    {
        VAR_10 = FUNC_6(VAR_5->merge, VAR_5->curview, VAR_6->name, VAR_3);
        if (!VAR_10)
            return VAR_1;

        VAR_11 = FUNC_1(VAR_5->db, VAR_10, &VAR_8);
        if (VAR_11 != VAR_2)
            goto done;

        VAR_11 = FUNC_3(VAR_8, ((void*)0));
        if (VAR_11 != VAR_2)
            goto done;

        VAR_11 = FUNC_4(VAR_8, &VAR_9);
        if (VAR_11 == VAR_2 && !FUNC_2(VAR_3, VAR_9))
        {
            VAR_6->numconflicts++;
            goto done;
        }
        else if (VAR_11 != VAR_0)
            goto done;

        VAR_11 = VAR_2;
    }

    VAR_7 = FUNC_8(sizeof(MERGEROW));
    if (!VAR_7)
    {
        VAR_11 = VAR_1;
        goto done;
    }

    VAR_7->data = FUNC_0(VAR_3);
    if (!VAR_7->data)
    {
        VAR_11 = VAR_1;
        FUNC_9(VAR_7);
        goto done;
    }

    FUNC_7(&VAR_6->rows, &VAR_7->entry);

done:
    FUNC_9(VAR_10);
    FUNC_10(&VAR_9->hdr);
    FUNC_10(&VAR_8->hdr);
    return VAR_11;
}
