
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tagMSIVIEW {TYPE_1__* ops; } ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ col_count; scalar_t__ row_count; int tables; } ;
struct TYPE_3__ {scalar_t__ (* fetch_int ) (struct tagMSIVIEW*,scalar_t__,scalar_t__,scalar_t__*) ;} ;
typedef TYPE_2__ MSIWHEREVIEW ;
typedef int MSIITERHANDLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct tagMSIVIEW*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct tagMSIVIEW*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static UINT FUNC_4( struct tagMSIVIEW *VAR_4, UINT VAR_5,
    UINT VAR_6, UINT *VAR_7, MSIITERHANDLE *VAR_8 )
{
    MSIWHEREVIEW *VAR_9 = (MSIWHEREVIEW*)VAR_4;
    UINT VAR_10, VAR_11;

    FUNC_1("%p, %d, %u, %p\n", VAR_4, VAR_5, VAR_6, *VAR_8);

    if (!VAR_9->tables)
         return VAR_0;

    if (VAR_5 == 0 || VAR_5 > VAR_9->col_count)
        return VAR_1;

    for (VAR_10 = FUNC_0(*VAR_8); VAR_10 < VAR_9->row_count; VAR_10++)
    {
        if (VAR_4->ops->fetch_int( VAR_4, VAR_10, VAR_5, &VAR_11 ) != VAR_3)
            continue;

        if (VAR_11 == VAR_6)
        {
            *VAR_7 = VAR_10;
            *VAR_8 = FUNC_2(VAR_10 + 1);
            return VAR_3;
        }
    }

    return VAR_2;
}
