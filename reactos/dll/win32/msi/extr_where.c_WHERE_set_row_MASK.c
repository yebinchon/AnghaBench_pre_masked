
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {TYPE_1__* ops; } ;
struct TYPE_18__ {scalar_t__ col_count; size_t table_index; TYPE_5__* view; struct TYPE_18__* next; } ;
struct TYPE_17__ {int hdr; } ;
struct TYPE_16__ {int col_count; TYPE_4__* tables; } ;
struct TYPE_15__ {scalar_t__ (* get_column_info ) (TYPE_5__*,scalar_t__,int *,scalar_t__*,int *,int *) ;scalar_t__ (* set_row ) (TYPE_5__*,scalar_t__,TYPE_3__*,scalar_t__) ;} ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef TYPE_3__ MSIRECORD ;
typedef TYPE_4__ JOINTABLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,TYPE_3__*,scalar_t__) ;
 int FUNC_2 (char*,TYPE_2__*,scalar_t__,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_5__*,scalar_t__,int *,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*,scalar_t__,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_7( struct tagMSIVIEW *VAR_4, UINT VAR_5, MSIRECORD *VAR_6, UINT VAR_7 )
{
    MSIWHEREVIEW *VAR_8 = (MSIWHEREVIEW*)VAR_4;
    UINT VAR_9, VAR_10, VAR_11 = 0;
    JOINTABLE *VAR_12 = VAR_8->tables;
    UINT *VAR_13;
    UINT VAR_14 = VAR_7;

    FUNC_2("%p %d %p %08x\n", VAR_8, VAR_5, VAR_6, VAR_7 );

    if( !VAR_8->tables )
         return VAR_0;

    VAR_10 = FUNC_3(VAR_8, VAR_5, &VAR_13);
    if (VAR_10 != VAR_2)
        return VAR_10;

    if (VAR_7 >= 1 << VAR_8->col_count)
        return VAR_1;

    do
    {
        for (VAR_9 = 0; VAR_9 < VAR_12->col_count; VAR_9++) {
            UINT VAR_15;

            if (!(VAR_14 & (1 << VAR_9)))
                continue;
            VAR_10 = VAR_12->view->ops->get_column_info(VAR_12->view, VAR_9 + 1, ((void*)0),
                                            &VAR_15, ((void*)0), ((void*)0) );
            if (VAR_10 != VAR_2)
                return VAR_10;
            if (VAR_15 & VAR_3)
                return VAR_0;
        }
        VAR_14 >>= VAR_12->col_count;
    }
    while (VAR_14 && (VAR_12 = VAR_12->next));

    VAR_12 = VAR_8->tables;

    do
    {
        const UINT VAR_16 = VAR_12->col_count;
        UINT VAR_17;
        MSIRECORD *VAR_18;
        UINT VAR_19 = (VAR_7 >> VAR_11) & ((1 << VAR_16) - 1);

        if (!VAR_19)
        {
            VAR_11 += VAR_16;
            continue;
        }

        VAR_18 = FUNC_0(VAR_16);
        if (!VAR_18)
            return VAR_0;

        for (VAR_17 = 1; VAR_17 <= VAR_16; VAR_17++)
        {
            VAR_10 = FUNC_1(VAR_6, VAR_17 + VAR_11, VAR_18, VAR_17);
            if (VAR_10 != VAR_2)
                break;
        }

        VAR_11 += VAR_16;

        if (VAR_10 == VAR_2)
            VAR_10 = VAR_12->view->ops->set_row(VAR_12->view, VAR_13[VAR_12->table_index], VAR_18, VAR_19);

        FUNC_4(&VAR_18->hdr);
    }
    while ((VAR_12 = VAR_12->next));
    return VAR_10;
}
