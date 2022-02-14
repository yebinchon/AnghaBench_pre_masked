
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_node {int event_time; } ;
typedef int s64 ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct event_node *VAR_2 = VAR_0;
 const struct event_node *VAR_3 = VAR_1;
 s64 VAR_4 = VAR_2->event_time - VAR_3->event_time;

 return VAR_4;
}
