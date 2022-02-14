
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,size_t) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = VAR_1 - 1;
 FUNC_0(VAR_1 != 0 && !(VAR_1 & (VAR_1 - 1)),
      "size not a power of 2: %lu", VAR_1);
 return (void *) (((size_t) VAR_0 + VAR_2) & ~VAR_2);
}
