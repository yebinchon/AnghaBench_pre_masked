
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ btype; scalar_t__ qb_pos; int querybuf; scalar_t__ read_reploff; scalar_t__ reploff; } ;
typedef TYPE_1__ client ;
struct TYPE_7__ {TYPE_1__* current_client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__ VAR_6 ;

int FUNC_3(client *VAR_7) {
    int VAR_8 = 0;
    VAR_6.current_client = VAR_7;
    if (FUNC_0(VAR_7) == VAR_5) {
        if (VAR_7->flags & VAR_2 && !(VAR_7->flags & VAR_3)) {

            VAR_7->reploff = VAR_7->read_reploff - FUNC_2(VAR_7->querybuf) + VAR_7->qb_pos;
        }





        if (!(VAR_7->flags & VAR_1) ||
            VAR_7->btype != VAR_0)
        {
            FUNC_1(VAR_7);
        }
    }
    if (VAR_6.current_client == ((void*)0)) VAR_8 = 1;
    VAR_6.current_client = ((void*)0);



    return VAR_8 ? VAR_4 : VAR_5;
}
