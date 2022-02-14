
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs43130_bitwidth_map {unsigned int bitwidth; } ;


 int FUNC_0 (struct cs43130_bitwidth_map const*) ;
 struct cs43130_bitwidth_map const* VAR_0 ;

__attribute__((used)) static const struct cs43130_bitwidth_map *FUNC_1(
    unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].bitwidth == VAR_1)
   return &VAR_0[VAR_2];
 }

 return ((void*)0);
}
