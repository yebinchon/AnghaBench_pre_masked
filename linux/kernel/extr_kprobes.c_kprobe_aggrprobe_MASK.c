
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kprobe {scalar_t__ pre_handler; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct kprobe *VAR_1)
{
 return VAR_1->pre_handler == VAR_0;
}
