
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_name_union {scalar_t__ filename; scalar_t__ group; } ;



__attribute__((used)) static inline bool FUNC_0
(const struct tomoyo_name_union *VAR_0, const struct tomoyo_name_union *VAR_1)
{
 return VAR_0->filename == VAR_1->filename && VAR_0->group == VAR_1->group;
}
