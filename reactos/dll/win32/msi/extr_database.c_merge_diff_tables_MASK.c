
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_15__ {int tabledata; TYPE_1__* curview; TYPE_2__* curtable; int merge; int db; } ;
struct TYPE_14__ {int entry; } ;
struct TYPE_13__ {int hdr; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIQUERY ;
typedef TYPE_2__ MERGETABLE ;
typedef TYPE_3__ MERGEDATA ;
typedef TYPE_3__* LPVOID ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__**,char const*,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_2__**) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static UINT FUNC_10(MSIRECORD *VAR_2, LPVOID VAR_3)
{
    MERGEDATA *VAR_4 = VAR_3;
    MERGETABLE *VAR_5;
    MSIQUERY *VAR_6 = ((void*)0);
    MSIQUERY *VAR_7 = ((void*)0);
    LPCWSTR VAR_8;
    UINT VAR_9;

    static const WCHAR VAR_10[] = {'S','E','L','E','C','T',' ','*',' ',
        'F','R','O','M',' ','`','%','s','`',0};

    VAR_8 = FUNC_2(VAR_2, 1);

    VAR_9 = FUNC_1(VAR_4->merge, &VAR_7, VAR_10, VAR_8);
    if (VAR_9 != VAR_0)
        goto done;

    if (FUNC_3(VAR_4->db, VAR_8))
    {
        VAR_9 = FUNC_1(VAR_4->db, &VAR_6, VAR_10, VAR_8);
        if (VAR_9 != VAR_0)
            goto done;

        VAR_9 = FUNC_6(VAR_6, VAR_7);
        if (VAR_9 != VAR_0)
            goto done;

        VAR_9 = FUNC_7(VAR_4->db, VAR_4->merge, VAR_8);
        if (VAR_9 != VAR_0)
            goto done;
    }

    VAR_9 = FUNC_8(VAR_4->merge, VAR_8, &VAR_5);
    if (VAR_9 != VAR_0)
        goto done;

    VAR_4->curtable = VAR_5;
    VAR_4->curview = VAR_7;
    VAR_9 = FUNC_0(VAR_7, ((void*)0), VAR_1, VAR_4);
    if (VAR_9 != VAR_0)
    {
        FUNC_4(VAR_5);
        goto done;
    }

    FUNC_5(VAR_4->tabledata, &VAR_5->entry);

done:
    FUNC_9(&VAR_6->hdr);
    FUNC_9(&VAR_7->hdr);
    return VAR_9;
}
