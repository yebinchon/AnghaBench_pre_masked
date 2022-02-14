
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_color {int dummy; } ;
struct gl_video {int force_clear_color; struct m_color clear_color; } ;



void FUNC_0(struct gl_video *VAR_0, struct m_color VAR_1)
{
    VAR_0->force_clear_color = 1;
    VAR_0->clear_color = VAR_1;
}
