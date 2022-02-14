
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ num_rows; TYPE_1__** storages; } ;
struct TYPE_3__ {scalar_t__ str_index; } ;
typedef TYPE_2__ MSISTORAGESVIEW ;
typedef int MSIITERHANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static UINT FUNC_3(struct tagMSIVIEW *VAR_4, UINT VAR_5,
                                       UINT VAR_6, UINT *VAR_7, MSIITERHANDLE *VAR_8)
{
    MSISTORAGESVIEW *VAR_9 = (MSISTORAGESVIEW *)VAR_4;
    UINT VAR_10 = FUNC_0(*VAR_8);

    FUNC_1("(%d, %d): %d\n", *VAR_7, VAR_5, VAR_6);

    if (VAR_5 == 0 || VAR_5 > VAR_3)
        return VAR_0;

    while (VAR_10 < VAR_9->num_rows)
    {
        if (VAR_9->storages[VAR_10]->str_index == VAR_6)
        {
            *VAR_7 = VAR_10;
            break;
        }

        VAR_10++;
    }

    *VAR_8 = FUNC_2(++VAR_10);
    if (VAR_10 >= VAR_9->num_rows)
        return VAR_1;

    return VAR_2;
}
