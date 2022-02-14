
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ass_state {int * log; int * library; int * render; int * track; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ass_state *VAR_0)
{
    if (VAR_0->track)
        FUNC_0(VAR_0->track);
    VAR_0->track = ((void*)0);
    if (VAR_0->render)
        FUNC_2(VAR_0->render);
    VAR_0->render = ((void*)0);
    if (VAR_0->library)
        FUNC_1(VAR_0->library);
    VAR_0->library = ((void*)0);
    FUNC_3(VAR_0->log);
    VAR_0->log = ((void*)0);
}
