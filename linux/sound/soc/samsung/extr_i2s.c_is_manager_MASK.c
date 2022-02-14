
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_dai {int mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2s_dai*) ;

__attribute__((used)) static inline bool FUNC_1(struct i2s_dai *VAR_1)
{
 if (FUNC_0(VAR_1) && (VAR_1->mode & VAR_0))
  return 1;
 else
  return 0;
}
