
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int num; scalar_t__* txt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,char*,int) ;
 int FUNC_5 (char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(char *VAR_4, int VAR_5)
{
 if (VAR_1 != 0 &&
     VAR_5 == VAR_0[VAR_1-1].len &&
     FUNC_3(VAR_4, VAR_0[VAR_1-1].txt, VAR_5) == 0) {
  VAR_0[VAR_1-1].num++;
  return;
 }
 if (VAR_1 == VAR_2) {
  FUNC_5("max_size too small??\n");
  FUNC_0(1);
 }
 VAR_0[VAR_1].txt = FUNC_2(VAR_5+1);
 VAR_0[VAR_1].len = VAR_5;
 VAR_0[VAR_1].num = 1;
 FUNC_4(VAR_0[VAR_1].txt, VAR_4, VAR_5);
 VAR_0[VAR_1].txt[VAR_5] = 0;
 VAR_1++;
 if (VAR_1 % 1000 == 0) {
  FUNC_5("loaded %d\r", VAR_1);
  FUNC_1(VAR_3);
 }
}
