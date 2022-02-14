
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
typedef int mstime_t ;
struct TYPE_15__ {int flags; int * argv; int db; } ;
typedef TYPE_2__ client ;
struct TYPE_16__ {int wrongtypeerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int *,int,int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int) ;
 TYPE_3__ VAR_5 ;

void FUNC_8(client *VAR_6) {
    mstime_t VAR_7;

    if (FUNC_3(VAR_6,VAR_6->argv[3],&VAR_7,VAR_4)
        != VAR_2) return;

    robj *VAR_8 = FUNC_5(VAR_6->db, VAR_6->argv[1]);

    if (VAR_8 == ((void*)0)) {
        if (VAR_6->flags & VAR_1) {


            FUNC_1(VAR_6);
        } else {

            FUNC_2(VAR_6,VAR_0,VAR_6->argv + 1,1,VAR_7,VAR_6->argv[2],((void*)0));
        }
    } else {
        if (VAR_8->type != VAR_3) {
            FUNC_0(VAR_6, VAR_5.wrongtypeerr);
        } else {


            FUNC_7(VAR_6,VAR_8,FUNC_4(VAR_8) > 0);
            FUNC_6(VAR_6);
        }
    }
}
