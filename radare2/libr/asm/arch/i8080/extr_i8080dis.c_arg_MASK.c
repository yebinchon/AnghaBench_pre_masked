
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_t {int type; int const shift; int const mask; int * fmt; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(char* VAR_0, int const VAR_1, struct arg_t const* VAR_2, int VAR_3) {
  if (VAR_2->type == 3) {
    FUNC_1(VAR_0, VAR_2->fmt[(VAR_1 >> VAR_2->shift) & VAR_2->mask]);
  } else {
    if (VAR_2->type == 1)
      FUNC_0(VAR_0, "%02X", VAR_3 & 0xff);
    else if (VAR_2->type == 2)
      FUNC_0(VAR_0, "%04X", VAR_3);
  }
}
