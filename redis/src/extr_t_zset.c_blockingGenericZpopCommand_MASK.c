
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; } ;
typedef TYPE_1__ robj ;
typedef int mstime_t ;
struct TYPE_14__ {int argc; int flags; int * argv; int db; } ;
typedef TYPE_2__ client ;
struct TYPE_15__ {int zpopmin; int zpopmax; int wrongtypeerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int *,int,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int,int,int,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int *,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ) ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

void FUNC_8(client *VAR_7, int VAR_8) {
    robj *VAR_9;
    mstime_t VAR_10;
    int VAR_11;

    if (FUNC_4(VAR_7,VAR_7->argv[VAR_7->argc-1],&VAR_10,VAR_4)
        != VAR_2) return;

    for (VAR_11 = 1; VAR_11 < VAR_7->argc-1; VAR_11++) {
        VAR_9 = FUNC_5(VAR_7->db,VAR_7->argv[VAR_11]);
        if (VAR_9 != ((void*)0)) {
            if (VAR_9->type != VAR_3) {
                FUNC_0(VAR_7,VAR_6.wrongtypeerr);
                return;
            } else {
                if (FUNC_7(VAR_9) != 0) {

                    FUNC_3(VAR_7,&VAR_7->argv[VAR_11],1,VAR_8,1,((void*)0));

                    FUNC_6(VAR_7,2,
                        VAR_8 == VAR_5 ? VAR_6.zpopmax : VAR_6.zpopmin,
                        VAR_7->argv[VAR_11]);
                    return;
                }
            }
        }
    }



    if (VAR_7->flags & VAR_1) {
        FUNC_1(VAR_7);
        return;
    }


    FUNC_2(VAR_7,VAR_0,VAR_7->argv + 1,VAR_7->argc - 2,VAR_10,((void*)0),((void*)0));
}
