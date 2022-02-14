
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t qb_pos; char* querybuf; int flags; scalar_t__ reqtype; int argc; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_12__ {scalar_t__ gopher_enabled; scalar_t__ lua_timedout; } ;
struct TYPE_10__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 size_t FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int) ;
 TYPE_3__ VAR_11 ;
 int FUNC_8 (char*) ;

void FUNC_9(client *VAR_12) {

    while(VAR_12->qb_pos < FUNC_6(VAR_12->querybuf)) {

        if (!(VAR_12->flags & VAR_6) && FUNC_0()) break;


        if (VAR_12->flags & VAR_0) break;



        if (VAR_12->flags & VAR_4) break;





        if (VAR_11.lua_timedout && VAR_12->flags & VAR_3) break;






        if (VAR_12->flags & (VAR_1|VAR_2)) break;


        if (!VAR_12->reqtype) {
            if (VAR_12->querybuf[VAR_12->qb_pos] == '*') {
                VAR_12->reqtype = VAR_10;
            } else {
                VAR_12->reqtype = VAR_9;
            }
        }

        if (VAR_12->reqtype == VAR_9) {
            if (FUNC_3(VAR_12) != VAR_8) break;


            if (VAR_11.gopher_enabled &&
                ((VAR_12->argc == 1 && ((char*)(VAR_12->argv[0]->ptr))[0] == '/') ||
                  VAR_12->argc == 0))
            {
                FUNC_2(VAR_12);
                FUNC_5(VAR_12);
                VAR_12->flags |= VAR_1;
                break;
            }
        } else if (VAR_12->reqtype == VAR_10) {
            if (FUNC_4(VAR_12) != VAR_8) break;
        } else {
            FUNC_8("Unknown request type");
        }


        if (VAR_12->argc == 0) {
            FUNC_5(VAR_12);
        } else {



            if (VAR_12->flags & VAR_5) {
                VAR_12->flags |= VAR_4;
                break;
            }


            if (FUNC_1(VAR_12) == VAR_7) {



                return;
            }
        }
    }


    if (VAR_12->qb_pos) {
        FUNC_7(VAR_12->querybuf,VAR_12->qb_pos,-1);
        VAR_12->qb_pos = 0;
    }
}
