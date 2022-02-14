
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {TYPE_1__* ops; } ;
struct TYPE_7__ {TYPE_3__* table; } ;
struct TYPE_6__ {scalar_t__ (* execute ) (TYPE_3__*,int *) ;scalar_t__ (* drop ) (TYPE_3__*) ;} ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSIDROPVIEW ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static UINT FUNC_3(struct tagMSIVIEW *VAR_2, MSIRECORD *VAR_3)
{
    MSIDROPVIEW *VAR_4 = (MSIDROPVIEW*)VAR_2;
    UINT VAR_5;

    FUNC_0("%p %p\n", VAR_4, VAR_3);

    if( !VAR_4->table )
         return VAR_0;

    VAR_5 = VAR_4->table->ops->execute(VAR_4->table, VAR_3);
    if (VAR_5 != VAR_1)
        return VAR_5;

    return VAR_4->table->ops->drop(VAR_4->table);
}
