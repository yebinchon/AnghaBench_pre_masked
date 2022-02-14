
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 << 1;
 if (VAR_1 <= 127)
  return FUNC_0(VAR_0, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_2 - 255);
}
