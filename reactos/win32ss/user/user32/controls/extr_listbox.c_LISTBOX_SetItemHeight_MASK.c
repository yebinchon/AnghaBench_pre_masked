
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int style; size_t nb_items; size_t item_height; int self; TYPE_1__* items; } ;
struct TYPE_7__ {size_t height; } ;
typedef int LRESULT ;
typedef TYPE_2__ LB_DESCR ;
typedef size_t INT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 size_t VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,size_t,...) ;
 int VAR_5 ;

__attribute__((used)) static LRESULT FUNC_6( LB_DESCR *VAR_6, INT VAR_7, INT VAR_8, BOOL VAR_9 )
{
    if (VAR_8 > VAR_4)
        return -1;

    if (!VAR_8) VAR_8 = 1;

    if (VAR_6->style & VAR_1)
    {
        if ((VAR_7 < 0) || (VAR_7 >= VAR_6->nb_items))
        {
            FUNC_4(VAR_0);
            return VAR_2;
        }
        FUNC_5("[%p]: item %d height = %d\n", VAR_6->self, VAR_7, VAR_8 );
        VAR_6->items[VAR_7].height = VAR_8;
        FUNC_3( VAR_6 );
 if (VAR_9)
     FUNC_1( VAR_6, VAR_7 );
    }
    else if (VAR_8 != VAR_6->item_height)
    {
        FUNC_5("[%p]: new height = %d\n", VAR_6->self, VAR_8 );
        VAR_6->item_height = VAR_8;
        FUNC_2( VAR_6 );
        FUNC_3( VAR_6 );
 if (VAR_9)
     FUNC_0( VAR_6->self, 0, VAR_5 );
    }
    return VAR_3;
}
