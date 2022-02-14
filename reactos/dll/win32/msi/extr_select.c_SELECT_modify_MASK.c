
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef int UINT ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {TYPE_3__* table; } ;
struct TYPE_5__ {int (* modify ) (TYPE_3__*,int ,int *,int ) ;} ;
typedef TYPE_2__ MSISELECTVIEW ;
typedef int MSIRECORD ;
typedef int MSIMODIFY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,int ,int *,int ) ;
 int FUNC_1 (struct tagMSIVIEW*,int *,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int *,int ) ;

__attribute__((used)) static UINT FUNC_3( struct tagMSIVIEW *VAR_2, MSIMODIFY VAR_3,
                           MSIRECORD *VAR_4, UINT VAR_5 )
{
    MSISELECTVIEW *VAR_6 = (MSISELECTVIEW*)VAR_2;

    FUNC_0("%p %d %p %d\n", VAR_6, VAR_3, VAR_4, VAR_5 );

    if( !VAR_6->table )
         return VAR_0;

    if (VAR_3 == VAR_1)
        return FUNC_1(VAR_2, VAR_4, VAR_5);

    return VAR_6->table->ops->modify( VAR_6->table, VAR_3, VAR_4, VAR_5 );
}
