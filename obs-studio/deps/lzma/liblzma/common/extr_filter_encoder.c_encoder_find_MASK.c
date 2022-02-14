
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ lzma_vli ;
struct TYPE_5__ {scalar_t__ id; } ;
typedef TYPE_1__ lzma_filter_encoder ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;

__attribute__((used)) static const lzma_filter_encoder *
FUNC_1(lzma_vli VAR_1)
{
 for (size_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  if (VAR_0[VAR_2].id == VAR_1)
   return VAR_0 + VAR_2;

 return ((void*)0);
}
