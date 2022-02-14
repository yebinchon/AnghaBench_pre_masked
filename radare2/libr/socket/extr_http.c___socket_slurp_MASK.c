
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int RSocket ;


 int FUNC_0 (int *,int,int ,int) ;
 int FUNC_1 (int *,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2 (RSocket *VAR_0, ut8 *VAR_1, int VAR_2) {
 int VAR_3;
 int VAR_4 = 1;

 if (FUNC_1 (VAR_0, (ut8 *) VAR_1, 1) != 1) {
  return 0;
 }
 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3 += VAR_4) {
  VAR_1[VAR_3] =0;
  FUNC_0 (VAR_0, 1, 0, 1000);
  int VAR_5 = FUNC_1 (VAR_0, (ut8 *) VAR_1 + VAR_3 , VAR_4);
  if (VAR_5 != VAR_4) {
   VAR_1[VAR_3] = 0;
   break;
  }
 }
 return VAR_3;
}
