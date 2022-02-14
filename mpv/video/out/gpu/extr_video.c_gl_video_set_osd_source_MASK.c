
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int dummy; } ;
struct gl_video {struct osd_state* osd_state; int * osd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gl_video*) ;

void FUNC_2(struct gl_video *VAR_0, struct osd_state *VAR_1)
{
    FUNC_0(VAR_0->osd);
    VAR_0->osd = ((void*)0);
    VAR_0->osd_state = VAR_1;
    FUNC_1(VAR_0);
}
