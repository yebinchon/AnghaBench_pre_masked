
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_pool_map {scalar_t__ mode; int* pool_to; scalar_t__ count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct svc_pool_map VAR_3 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_4)
{
 const struct svc_pool_map *VAR_5 = &VAR_3;

 if (VAR_5->count) {
  if (VAR_5->mode == VAR_1)
   return FUNC_0(VAR_5->pool_to[VAR_4]);
  if (VAR_5->mode == VAR_2)
   return VAR_5->pool_to[VAR_4];
 }
 return VAR_0;
}
