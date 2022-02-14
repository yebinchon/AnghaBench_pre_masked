
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {size_t table_index; scalar_t__ row_count; } ;
struct TYPE_7__ {int cond; scalar_t__ rec_index; } ;
typedef TYPE_1__ MSIWHEREVIEW ;
typedef int MSIRECORD ;
typedef TYPE_2__ JOINTABLE ;
typedef scalar_t__ INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*,int ,scalar_t__*,int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_2( MSIWHEREVIEW *VAR_4, MSIRECORD *VAR_5, JOINTABLE **VAR_6,
                             UINT VAR_7[] )
{
    UINT VAR_8 = VAR_1;
    INT VAR_9;

    for (VAR_7[(*VAR_6)->table_index] = 0;
         VAR_7[(*VAR_6)->table_index] < (*VAR_6)->row_count;
         VAR_7[(*VAR_6)->table_index]++)
    {
        VAR_9 = 0;
        VAR_4->rec_index = 0;
        VAR_8 = FUNC_0( VAR_4, VAR_7, VAR_4->cond, &VAR_9, VAR_5 );
        if (VAR_8 != VAR_2 && VAR_8 != VAR_0)
            break;
        if (VAR_9)
        {
            if (*(VAR_6 + 1))
            {
                VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6 + 1, VAR_7);
                if (VAR_8 != VAR_2)
                    break;
            }
            else
            {
                if (VAR_8 != VAR_2)
                    break;
                FUNC_1 (VAR_4, VAR_7);
            }
        }
    }
    VAR_7[(*VAR_6)->table_index] = VAR_3;
    return VAR_8;
}
