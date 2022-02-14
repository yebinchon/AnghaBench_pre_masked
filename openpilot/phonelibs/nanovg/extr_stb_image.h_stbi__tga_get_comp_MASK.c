
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3, int VAR_4, int* VAR_5)
{

   if(VAR_5) *VAR_5 = 0;
   switch(VAR_3) {
      case 8: return VAR_0;
      case 16: if(VAR_4) return VAR_1;

      case 15: if(VAR_5) *VAR_5 = 1;
            return VAR_2;
      case 24:
      case 32: return VAR_3/8;
      default: return 0;
   }
}
