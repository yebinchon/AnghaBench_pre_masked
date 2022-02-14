
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_4__ {int num_rows; TYPE_1__** storages; } ;
struct TYPE_3__ {int str_index; } ;
typedef TYPE_2__ MSISTORAGESVIEW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct tagMSIVIEW*,int,int,int*) ;

__attribute__((used)) static UINT FUNC_1(struct tagMSIVIEW *VAR_3, UINT VAR_4, UINT VAR_5, UINT *VAR_6)
{
    MSISTORAGESVIEW *VAR_7 = (MSISTORAGESVIEW *)VAR_3;

    FUNC_0("(%p, %d, %d, %p)\n", VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_5 != 1)
        return VAR_0;

    if (VAR_4 >= VAR_7->num_rows)
        return VAR_1;

    *VAR_6 = VAR_7->storages[VAR_4]->str_index;

    return VAR_2;
}
