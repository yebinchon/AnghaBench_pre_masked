
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int hash; size_t addr; int ndx; } ;
typedef TYPE_1__ cache_line_t ;
typedef int ROTable ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_3, ROTable *VAR_4) {
  int VAR_5 = (VAR_3>>2) & (VAR_0-1), VAR_6;

  for (VAR_6 = 0; VAR_6<VAR_1; VAR_6++) {
    cache_line_t VAR_7 = VAR_2[VAR_5][VAR_6];
    if (VAR_7.hash == VAR_3 && ((size_t)VAR_4 & 0xffffffu) == VAR_7.addr) {
      FUNC_0(0);
      return VAR_7.ndx;
    }
  }
  FUNC_0(1);
  return -1;
}
