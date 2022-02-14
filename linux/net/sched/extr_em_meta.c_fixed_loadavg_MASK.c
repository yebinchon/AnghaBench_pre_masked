
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned long FUNC_0(int VAR_2)
{
 int VAR_3 = VAR_2 + (VAR_0/200);
 int VAR_4 = ((VAR_3 & (VAR_0-1)) * 100) >> VAR_1;

 return ((VAR_3 >> VAR_1) * 100) + VAR_4;
}
