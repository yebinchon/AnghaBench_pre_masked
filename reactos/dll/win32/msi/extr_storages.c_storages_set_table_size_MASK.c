
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int max_storages; int storages; } ;
typedef int STORAGE ;
typedef TYPE_1__ MSISTORAGESVIEW ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static BOOL FUNC_1(MSISTORAGESVIEW *VAR_2, UINT VAR_3)
{
    if (VAR_3 >= VAR_2->max_storages)
    {
        VAR_2->max_storages *= 2;
        VAR_2->storages = FUNC_0(VAR_2->storages, VAR_2->max_storages * sizeof(STORAGE *));
        if (!VAR_2->storages)
            return VAR_0;
    }

    return VAR_1;
}
