
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mls_level {scalar_t__ sens; int cat; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static inline int FUNC_1(struct mls_level *VAR_0, struct mls_level *VAR_1)
{
 return ((VAR_0->sens == VAR_1->sens) &&
  FUNC_0(&VAR_0->cat, &VAR_1->cat));
}
