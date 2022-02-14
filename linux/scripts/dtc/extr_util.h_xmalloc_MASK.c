
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 void* FUNC_1 (size_t) ;

__attribute__((used)) static inline void *FUNC_2(size_t VAR_0)
{
 void *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  FUNC_0("malloc() failed\n");

 return VAR_1;
}
