
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {scalar_t__ active; scalar_t__ lines; int src; int conn; scalar_t__ forked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_1__*,int ) ;

void FUNC_9(client *VAR_3) {

    FUNC_3(FUNC_6("<endsession>"));
    FUNC_4();


    if (VAR_2.forked) {
        FUNC_8(VAR_3,0);
        FUNC_7(VAR_1,"Lua debugging session child exiting");
        FUNC_2(0);
    } else {
        FUNC_7(VAR_1,
            "Redis synchronous debugging eval session ended");
    }


    FUNC_0(VAR_2.conn);
    FUNC_1(VAR_2.conn,0);



    VAR_3->flags |= VAR_0;


    FUNC_5(VAR_2.src,VAR_2.lines);
    VAR_2.lines = 0;
    VAR_2.active = 0;
}
