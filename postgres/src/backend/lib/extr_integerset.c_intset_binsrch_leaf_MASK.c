
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_3__ {scalar_t__ first; } ;
typedef TYPE_1__ leaf_item ;



__attribute__((used)) static int
FUNC_0(uint64 VAR_0, leaf_item *VAR_1, int VAR_2, bool VAR_3)
{
 int VAR_4,
    VAR_5,
    VAR_6;

 VAR_4 = 0;
 VAR_5 = VAR_2;
 while (VAR_5 > VAR_4)
 {
  VAR_6 = VAR_4 + (VAR_5 - VAR_4) / 2;

  if (VAR_3)
  {
   if (VAR_0 >= VAR_1[VAR_6].first)
    VAR_4 = VAR_6 + 1;
   else
    VAR_5 = VAR_6;
  }
  else
  {
   if (VAR_0 > VAR_1[VAR_6].first)
    VAR_4 = VAR_6 + 1;
   else
    VAR_5 = VAR_6;
  }
 }

 return VAR_4;
}
