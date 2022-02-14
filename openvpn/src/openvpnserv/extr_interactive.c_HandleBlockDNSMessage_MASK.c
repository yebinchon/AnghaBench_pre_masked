
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int * undo_lists_t ;
struct TYPE_12__ {int index; } ;
struct TYPE_11__ {scalar_t__ type; } ;
struct TYPE_13__ {TYPE_2__ iface; TYPE_1__ header; } ;
typedef TYPE_3__ block_dns_message_t ;
struct TYPE_14__ {scalar_t__ metric_v4; scalar_t__ metric_v6; int * engine; int index; } ;
typedef TYPE_4__ block_dns_data_t ;
typedef int WCHAR ;
struct TYPE_15__ {int * exe_path; } ;
typedef int * LPCWSTR ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int,int *,int) ;
 TYPE_4__* FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int **,int ,int *,int ) ;
 size_t VAR_9 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 void* FUNC_8 (int ,int ,int*) ;
 TYPE_4__* FUNC_9 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_10 (int ,int ,scalar_t__) ;
 TYPE_5__ VAR_11 ;

__attribute__((used)) static DWORD
FUNC_11(const block_dns_message_t *VAR_12, undo_lists_t *VAR_13)
{
    DWORD VAR_14 = 0;
    block_dns_data_t *VAR_15;
    HANDLE VAR_16 = ((void*)0);
    LPCWSTR VAR_17;




    WCHAR VAR_18[VAR_7];
    FUNC_2(VAR_4, 0, VAR_11.exe_path, VAR_7, VAR_18, VAR_7);
    VAR_17 = VAR_18;


    if (VAR_12->header.type == VAR_10)
    {
        VAR_14 = FUNC_5(&VAR_16, VAR_12->iface.index, VAR_17, VAR_3);
        if (!VAR_14)
        {
            VAR_15 = FUNC_9(sizeof(block_dns_data_t));
            if (!VAR_15)
            {
                return VAR_6;
            }
            VAR_15->engine = VAR_16;
            VAR_15->index = VAR_12->iface.index;
            int VAR_19 = 0;
            VAR_15->metric_v4 = FUNC_8(VAR_12->iface.index,
                                                             VAR_0, &VAR_19);
            if (VAR_19)
            {
                VAR_15->metric_v4 = 0;
            }
            VAR_15->metric_v6 = FUNC_8(VAR_12->iface.index,
                                                             VAR_1, &VAR_19);
            if (VAR_19)
            {
                VAR_15->metric_v6 = 0;
            }
            VAR_14 = FUNC_0(&(*VAR_13)[VAR_9], VAR_15);
            if (!VAR_14)
            {
                VAR_14 = FUNC_10(VAR_12->iface.index, VAR_0,
                                           VAR_2);
                if (!VAR_14)
                {
                    FUNC_10(VAR_12->iface.index, VAR_1,
                                         VAR_2);
                }
            }
        }
    }
    else
    {
        VAR_15 = FUNC_3(&(*VAR_13)[VAR_9], VAR_5, ((void*)0));
        if (VAR_15)
        {
            VAR_16 = VAR_15->engine;
            VAR_14 = FUNC_6(VAR_16);
            VAR_16 = ((void*)0);
            if (VAR_15->metric_v4 >= 0)
            {
                FUNC_10(VAR_12->iface.index, VAR_0,
                                     VAR_15->metric_v4);
            }
            if (VAR_15->metric_v6 >= 0)
            {
                FUNC_10(VAR_12->iface.index, VAR_1,
                                     VAR_15->metric_v6);
            }
            FUNC_7(VAR_15);
        }
        else
        {
            FUNC_1(VAR_8, FUNC_4("No previous block DNS filters to delete"));
        }
    }

    if (VAR_14 && VAR_16)
    {
        FUNC_6(VAR_16);
    }

    return VAR_14;
}
