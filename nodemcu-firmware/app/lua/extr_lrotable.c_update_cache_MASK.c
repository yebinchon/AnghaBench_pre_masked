
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int member_0; size_t member_1; unsigned int member_2; unsigned int hash; size_t addr; unsigned int ndx; } ;
typedef TYPE_1__ cache_line_t ;
typedef int ROTable ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_1(unsigned VAR_3, ROTable *VAR_4, unsigned VAR_5) {
  int VAR_6 = (VAR_3)>>2 & (VAR_0-1), VAR_7;

  cache_line_t VAR_8 = {VAR_3, (size_t) VAR_4, VAR_5};







  FUNC_0(2);
  if (VAR_5>0xffu)
    return;
  for (VAR_7 = VAR_1-1; VAR_7>0; VAR_7--)
    VAR_2[VAR_6][VAR_7] = VAR_2[VAR_6][VAR_7-1];
  VAR_2[VAR_6][0] = VAR_8;
}
