
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_1, VAR_2, VAR_3;

 VAR_3=-10000;
 VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 0x10000; VAR_1++) {
  if (VAR_0[VAR_1] > VAR_3) {
   VAR_2 = VAR_1;
   VAR_3 = VAR_0[VAR_1];
  }
 }
 return VAR_2;
}
