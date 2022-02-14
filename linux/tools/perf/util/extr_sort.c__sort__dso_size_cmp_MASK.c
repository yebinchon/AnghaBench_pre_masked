
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (struct map*) ;

__attribute__((used)) static int64_t FUNC_1(struct map *VAR_0, struct map *VAR_1)
{
 int64_t VAR_2 = VAR_0 != ((void*)0) ? FUNC_0(VAR_0) : 0;
 int64_t VAR_3 = VAR_1 != ((void*)0) ? FUNC_0(VAR_1) : 0;

 return VAR_2 < VAR_3 ? -1 :
  VAR_2 == VAR_3 ? 0 : 1;
}
