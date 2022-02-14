
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbuffer {int (* next_event ) (struct kbuffer*) ;} ;


 int FUNC_0 (struct kbuffer*) ;

__attribute__((used)) static int FUNC_1(struct kbuffer *VAR_0)
{
 return VAR_0->next_event(VAR_0);
}
