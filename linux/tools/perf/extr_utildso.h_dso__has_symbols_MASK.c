
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rb_root; } ;
struct dso {TYPE_1__ symbols; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(const struct dso *VAR_0)
{
 return !FUNC_0(&VAR_0->symbols.rb_root);
}
