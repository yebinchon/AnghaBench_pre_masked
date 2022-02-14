
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs43130_rate_map {int fs; } ;


 int FUNC_0 (struct cs43130_rate_map const*) ;
 struct cs43130_rate_map const* VAR_0 ;

__attribute__((used)) static const struct cs43130_rate_map *FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].fs == VAR_1)
   return &VAR_0[VAR_2];
 }

 return ((void*)0);
}
