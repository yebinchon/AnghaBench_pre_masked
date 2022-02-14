
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_perms {int deny; int allow; int audit; int quiet; int kill; int stop; int complain; int cond; int hide; int prompt; } ;



void FUNC_0(struct aa_perms *VAR_0, struct aa_perms *VAR_1)
{
 VAR_0->deny |= VAR_1->deny;
 VAR_0->allow &= VAR_1->allow & ~VAR_0->deny;
 VAR_0->audit |= VAR_1->audit & VAR_0->allow;
 VAR_0->quiet &= VAR_1->quiet & ~VAR_0->allow;
 VAR_0->kill |= VAR_1->kill & ~VAR_0->allow;
 VAR_0->stop |= VAR_1->stop & ~VAR_0->allow;
 VAR_0->complain |= VAR_1->complain & ~VAR_0->allow & ~VAR_0->deny;
 VAR_0->cond |= VAR_1->cond & ~VAR_0->allow & ~VAR_0->deny;
 VAR_0->hide &= VAR_1->hide & ~VAR_0->allow;
 VAR_0->prompt |= VAR_1->prompt & ~VAR_0->allow & ~VAR_0->deny;
}
