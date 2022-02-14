
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_shadow {void* obj; unsigned long id; } ;



__attribute__((used)) static inline bool FUNC_0(struct klp_shadow *VAR_0, void *VAR_1,
    unsigned long VAR_2)
{
 return VAR_0->obj == VAR_1 && VAR_0->id == VAR_2;
}
