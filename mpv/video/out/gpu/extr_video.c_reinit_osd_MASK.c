
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_video {scalar_t__ osd_state; int log; int ra; int * osd; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gl_video *VAR_0)
{
    FUNC_0(VAR_0->osd);
    VAR_0->osd = ((void*)0);
    if (VAR_0->osd_state)
        VAR_0->osd = FUNC_1(VAR_0->ra, VAR_0->log, VAR_0->osd_state);
}
