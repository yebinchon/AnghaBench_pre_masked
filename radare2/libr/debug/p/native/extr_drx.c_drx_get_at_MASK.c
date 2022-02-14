
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;
typedef int drxt ;


 scalar_t__ FUNC_0 (int *,int,int*,int*,int*,int*) ;

int FUNC_1(drxt *VAR_0, ut64 VAR_1) {
 ut64 VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_3 == 4 || VAR_3 == 5) {
   continue;
  }
  VAR_4 = VAR_5 = VAR_6 = VAR_7 = 0;
  VAR_2 = FUNC_0 (VAR_0, VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7);
  if (VAR_2 == VAR_1) {
   return VAR_3;
  }
 }
 return -1;
}
