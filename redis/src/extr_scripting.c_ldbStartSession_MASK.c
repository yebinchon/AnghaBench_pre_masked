
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef char* sds ;
typedef int pid_t ;
struct TYPE_8__ {int flags; TYPE_1__** argv; } ;
typedef TYPE_2__ client ;
struct TYPE_9__ {int forked; int active; int lines; int src; int conn; int children; } ;
struct TYPE_7__ {int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_4__ VAR_5 ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (char*,size_t) ;
 int FUNC_10 (char*,size_t,char*,int,int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,struct sigaction*,int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(client *VAR_6) {
    VAR_5.forked = (VAR_6->flags & VAR_0) == 0;
    if (VAR_5.forked) {
        pid_t VAR_7 = FUNC_5();
        if (VAR_7 == -1) {
            FUNC_0(VAR_6,"Fork() failed: can't run EVAL in debugging mode.");
            return 0;
        } else if (VAR_7 == 0) {

            struct sigaction VAR_8;
            FUNC_13(&VAR_8.sa_mask);
            VAR_8.sa_flags = 0;
            VAR_8.sa_handler = VAR_4;
            FUNC_12(VAR_3, &VAR_8, ((void*)0));
            FUNC_12(VAR_2, &VAR_8, ((void*)0));




            FUNC_11(VAR_1,"Redis forked for debugging eval");
        } else {

            FUNC_4(VAR_5.children,(void*)(unsigned long)VAR_7);
            FUNC_3(VAR_6);
            return 0;
        }
    } else {
        FUNC_11(VAR_1,
            "Redis synchronous debugging eval session started");
    }


    FUNC_1(VAR_5.conn);
    FUNC_2(VAR_5.conn,5000);
    VAR_5.active = 1;



    sds VAR_9 = FUNC_6(VAR_6->argv[1]->ptr);
    size_t VAR_10 = FUNC_8(VAR_9);
    while(VAR_10 && (VAR_9[VAR_10-1] == '\n' ||
                     VAR_9[VAR_10-1] == '\r'))
    {
        VAR_9[--VAR_10] = '\0';
    }
    FUNC_9(VAR_9,VAR_10);
    VAR_5.src = FUNC_10(VAR_9,FUNC_8(VAR_9),"\n",1,&VAR_5.lines);
    FUNC_7(VAR_9);
    return 1;
}
