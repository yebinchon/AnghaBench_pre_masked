
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 unsigned long VAR_2 ;

__attribute__((used)) static int FUNC_4(char *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 if (FUNC_3(VAR_3, "NO_", 3) == 0) {
  VAR_5 = 1;
  VAR_3 += 3;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_5) {
  VAR_2 &= ~(1UL << VAR_4);
  FUNC_1(VAR_4);
 } else {
  VAR_2 |= (1UL << VAR_4);
  FUNC_2(VAR_4);
 }

 return 0;
}
