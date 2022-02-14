
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {unsigned long long start; } ;
struct machine {unsigned long long kernel_start; } ;


 int FUNC_0 (struct machine*,char*) ;
 struct map* FUNC_1 (struct machine*) ;
 int FUNC_2 (struct map*) ;

int FUNC_3(struct machine *VAR_0)
{
 struct map *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;
 VAR_0->kernel_start = 1ULL << 63;
 if (VAR_1) {
  VAR_2 = FUNC_2(VAR_1);





  if (!VAR_2 && !FUNC_0(VAR_0, "x86_64"))
   VAR_0->kernel_start = VAR_1->start;
 }
 return VAR_2;
}
