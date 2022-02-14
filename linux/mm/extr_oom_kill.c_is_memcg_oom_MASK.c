
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oom_control {int * memcg; } ;



__attribute__((used)) static inline bool FUNC_0(struct oom_control *VAR_0)
{
 return VAR_0->memcg != ((void*)0);
}
