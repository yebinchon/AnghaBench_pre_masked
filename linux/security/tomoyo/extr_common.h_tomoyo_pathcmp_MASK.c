
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {scalar_t__ hash; int name; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct tomoyo_path_info *VAR_0,
      const struct tomoyo_path_info *VAR_1)
{
 return VAR_0->hash != VAR_1->hash || FUNC_0(VAR_0->name, VAR_1->name);
}
