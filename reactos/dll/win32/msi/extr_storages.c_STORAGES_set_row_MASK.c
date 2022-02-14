
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ num_rows; int * storages; TYPE_1__* db; } ;
struct TYPE_4__ {int storage; } ;
typedef TYPE_2__ MSISTORAGESVIEW ;
typedef int MSIRECORD ;
typedef int * LPWSTR ;
typedef int IStream ;
typedef int IStorage ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int,int ,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,int **) ;
 int FUNC_6 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,struct tagMSIVIEW*,int *) ;
 int FUNC_8 (TYPE_2__*,int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *,int **) ;

__attribute__((used)) static UINT FUNC_12(struct tagMSIVIEW *VAR_5, UINT VAR_6, MSIRECORD *VAR_7, UINT VAR_8)
{
    MSISTORAGESVIEW *VAR_9 = (MSISTORAGESVIEW *)VAR_5;
    IStorage *VAR_10, *VAR_11 = ((void*)0);
    IStream *VAR_12;
    LPWSTR VAR_13 = ((void*)0);
    HRESULT VAR_14;
    UINT VAR_15 = VAR_0;

    FUNC_7("(%p, %p)\n", VAR_5, VAR_7);

    if (VAR_6 > VAR_9->num_rows)
        return VAR_0;

    VAR_15 = FUNC_5(VAR_7, 2, &VAR_12);
    if (VAR_15 != VAR_2)
        return VAR_15;

    VAR_15 = FUNC_11(VAR_12, &VAR_10);
    if (VAR_15 != VAR_2)
    {
        FUNC_4(VAR_12);
        return VAR_15;
    }

    VAR_13 = FUNC_10(FUNC_6(VAR_7, 1));
    if (!VAR_13)
    {
        VAR_15 = VAR_1;
        goto done;
    }

    VAR_14 = FUNC_2(VAR_9->db->storage, VAR_13,
                                VAR_4 | VAR_3,
                                0, 0, &VAR_11);
    if (FUNC_0(VAR_14))
    {
        VAR_15 = VAR_0;
        goto done;
    }

    VAR_14 = FUNC_1(VAR_10, 0, ((void*)0), ((void*)0), VAR_11);
    if (FUNC_0(VAR_14))
    {
        VAR_15 = VAR_0;
        goto done;
    }

    VAR_9->storages[VAR_6] = FUNC_8(VAR_9, VAR_13, VAR_10);
    if (!VAR_9->storages[VAR_6])
        VAR_15 = VAR_0;

done:
    FUNC_9(VAR_13);

    if (VAR_11) FUNC_3(VAR_11);
    FUNC_3(VAR_10);
    FUNC_4(VAR_12);

    return VAR_15;
}
