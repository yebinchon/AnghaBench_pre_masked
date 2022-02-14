
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clip_vcc {int encap; int idle_timeout; int old_pop; scalar_t__ old_push; int last_use; scalar_t__ xoff; int * entry; struct atm_vcc* vcc; } ;
struct atm_vcc {int pop; scalar_t__ push; int flags; struct clip_vcc* user_back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct clip_vcc* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,struct clip_vcc*,struct atm_vcc*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct atm_vcc*) ;

__attribute__((used)) static int FUNC_4(struct atm_vcc *VAR_8, int VAR_9)
{
 struct clip_vcc *VAR_10;

 if (!VAR_8->push)
  return -VAR_1;
 VAR_10 = FUNC_0(sizeof(struct clip_vcc), VAR_3);
 if (!VAR_10)
  return -VAR_2;
 FUNC_1("%p vcc %p\n", VAR_10, VAR_8);
 VAR_10->vcc = VAR_8;
 VAR_8->user_back = VAR_10;
 FUNC_2(VAR_0, &VAR_8->flags);
 VAR_10->entry = ((void*)0);
 VAR_10->xoff = 0;
 VAR_10->encap = 1;
 VAR_10->last_use = VAR_7;
 VAR_10->idle_timeout = VAR_9 * VAR_4;
 VAR_10->old_push = VAR_8->push;
 VAR_10->old_pop = VAR_8->pop;
 VAR_8->push = VAR_6;
 VAR_8->pop = VAR_5;


 FUNC_3(VAR_8);

 return 0;
}
