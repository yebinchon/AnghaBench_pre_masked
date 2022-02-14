
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_14__ {int max_storages; TYPE_2__** storages; TYPE_1__* db; } ;
struct TYPE_13__ {scalar_t__ type; int pwcsName; } ;
struct TYPE_12__ {int storage; } ;
struct TYPE_11__ {int storage; } ;
typedef TYPE_2__ STORAGE ;
typedef TYPE_3__ STATSTG ;
typedef TYPE_4__ MSISTORAGESVIEW ;
typedef int INT ;
typedef int IEnumSTATSTG ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,TYPE_3__*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,int ,int **) ;
 int FUNC_5 (int ,int ,int *,int,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_7 (TYPE_4__*,int ,int *) ;
 int FUNC_8 (int ) ;
 TYPE_2__** FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,int) ;

__attribute__((used)) static INT FUNC_11(MSISTORAGESVIEW *VAR_4)
{
    STORAGE *VAR_5 = ((void*)0);
    IEnumSTATSTG *VAR_6 = ((void*)0);
    STATSTG VAR_7;
    HRESULT VAR_8;
    UINT VAR_9 = 0, VAR_10;

    VAR_8 = FUNC_4(VAR_4->db->storage, 0, ((void*)0), 0, &VAR_6);
    if (FUNC_1(VAR_8))
        return -1;

    VAR_4->max_storages = 1;
    VAR_4->storages = FUNC_9(sizeof(STORAGE *));
    if (!VAR_4->storages)
        return -1;

    while (VAR_3)
    {
        VAR_10 = 0;
        VAR_8 = FUNC_2(VAR_6, 1, &VAR_7, &VAR_10);
        if (FUNC_1(VAR_8) || !VAR_10)
            break;

        if (VAR_7.type != VAR_2)
        {
            FUNC_0(VAR_7.pwcsName);
            continue;
        }

        FUNC_6("enumerated storage %s\n", FUNC_8(VAR_7.pwcsName));

        VAR_5 = FUNC_7(VAR_4, VAR_7.pwcsName, ((void*)0));
        if (!VAR_5)
        {
            VAR_9 = -1;
            FUNC_0(VAR_7.pwcsName);
            break;
        }

        FUNC_5(VAR_4->db->storage, VAR_7.pwcsName, ((void*)0),
                             VAR_0 | VAR_1, ((void*)0), 0,
                             &VAR_5->storage);
        FUNC_0(VAR_7.pwcsName);

        if (!FUNC_10(VAR_4, ++VAR_9))
        {
            VAR_9 = -1;
            break;
        }

        VAR_4->storages[VAR_9 - 1] = VAR_5;
    }

    FUNC_3(VAR_6);
    return VAR_9;
}
