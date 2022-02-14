
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_acl_info {scalar_t__ type; scalar_t__ cond; } ;



__attribute__((used)) static inline bool FUNC_0(const struct tomoyo_acl_info *VAR_0,
     const struct tomoyo_acl_info *VAR_1)
{
 return VAR_0->type == VAR_1->type && VAR_0->cond == VAR_1->cond;
}
