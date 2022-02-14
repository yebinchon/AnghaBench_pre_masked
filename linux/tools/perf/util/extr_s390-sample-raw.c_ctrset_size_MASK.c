
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cf_ctrset_entry {int ctr; } ;



__attribute__((used)) static size_t FUNC_0(struct cf_ctrset_entry *VAR_0)
{
 return sizeof(*VAR_0) + VAR_0->ctr * sizeof(u64);
}
