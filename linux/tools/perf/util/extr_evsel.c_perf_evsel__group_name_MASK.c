
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {scalar_t__ group_name; } ;



const char *FUNC_0(struct evsel *VAR_0)
{
 return VAR_0->group_name ?: "anon group";
}
