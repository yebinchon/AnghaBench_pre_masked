
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressor_data {scalar_t__ weak_sidechain; } ;
typedef int obs_source_t ;


 int * FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline obs_source_t *FUNC_1(struct compressor_data *VAR_0)
{
 if (VAR_0->weak_sidechain)
  return FUNC_0(VAR_0->weak_sidechain);
 return ((void*)0);
}
