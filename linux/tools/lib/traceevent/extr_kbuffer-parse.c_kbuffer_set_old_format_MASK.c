
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int next_event; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct kbuffer *VAR_2)
{
 VAR_2->flags |= VAR_0;

 VAR_2->next_event = VAR_1;
}
