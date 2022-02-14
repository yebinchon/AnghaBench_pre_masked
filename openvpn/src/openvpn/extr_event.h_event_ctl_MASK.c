
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* ctl ) (struct event_set*,int ,unsigned int,void*) ;} ;
struct event_set {TYPE_1__ func; } ;
typedef int event_t ;


 int FUNC_0 (struct event_set*,int ,unsigned int,void*) ;

__attribute__((used)) static inline void
FUNC_1(struct event_set *VAR_0, event_t VAR_1, unsigned int VAR_2, void *VAR_3)
{
    (*VAR_0->func.ctl)(VAR_0, VAR_1, VAR_2, VAR_3);
}
