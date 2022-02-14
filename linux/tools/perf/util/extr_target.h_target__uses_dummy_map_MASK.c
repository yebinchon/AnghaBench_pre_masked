
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int uses_mmap; scalar_t__ per_thread; scalar_t__ default_per_cpu; } ;


 int FUNC_0 (struct target*) ;
 scalar_t__ FUNC_1 (struct target*) ;
 scalar_t__ FUNC_2 (struct target*) ;

__attribute__((used)) static inline bool FUNC_3(struct target *VAR_0)
{
 bool VAR_1 = 0;

 if (VAR_0->default_per_cpu)
  VAR_1 = VAR_0->per_thread ? 1 : 0;
 else if (FUNC_2(VAR_0) ||
          (!FUNC_0(VAR_0) && !VAR_0->uses_mmap))
  VAR_1 = 1;
 else if (FUNC_1(VAR_0))
  VAR_1 = 1;

 return VAR_1;
}
