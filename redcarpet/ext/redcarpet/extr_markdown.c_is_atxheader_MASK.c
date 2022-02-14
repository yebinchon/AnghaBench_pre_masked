
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct sd_markdown {int ext_flags; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct sd_markdown *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 if (VAR_2[0] != '#')
  return 0;

 if (VAR_1->ext_flags & VAR_0) {
  size_t VAR_4 = 0;

  while (VAR_4 < VAR_3 && VAR_4 < 6 && VAR_2[VAR_4] == '#')
   VAR_4++;

  if (VAR_4 < VAR_3 && VAR_2[VAR_4] != ' ')
   return 0;
 }

 return 1;
}
