
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_filter {int * filter_string; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct event_filter *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->filter_string);
 VAR_0->filter_string = ((void*)0);
}
