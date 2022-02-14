
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_object {scalar_t__ mod; int name; } ;



__attribute__((used)) static inline bool FUNC_0(struct klp_object *VAR_0)
{
 return !VAR_0->name || VAR_0->mod;
}
