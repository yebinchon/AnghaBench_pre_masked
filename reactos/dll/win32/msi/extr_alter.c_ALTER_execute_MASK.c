
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {TYPE_1__* ops; } ;
struct TYPE_8__ {int hold; scalar_t__ colinfo; TYPE_3__* table; } ;
struct TYPE_7__ {scalar_t__ (* release ) (TYPE_3__*) ;int (* add_ref ) (TYPE_3__*) ;} ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSIALTERVIEW ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static UINT FUNC_4( struct tagMSIVIEW *VAR_1, MSIRECORD *VAR_2 )
{
    MSIALTERVIEW *VAR_3 = (MSIALTERVIEW*)VAR_1;
    UINT VAR_4;

    FUNC_0("%p %p\n", VAR_3, VAR_2);

    if (VAR_3->hold == 1)
        VAR_3->table->ops->add_ref(VAR_3->table);
    else if (VAR_3->hold == -1)
    {
        VAR_4 = VAR_3->table->ops->release(VAR_3->table);
        if (VAR_4 == 0)
            VAR_3->table = ((void*)0);
    }

    if (VAR_3->colinfo)
        return FUNC_1(VAR_3);

    return VAR_0;
}
