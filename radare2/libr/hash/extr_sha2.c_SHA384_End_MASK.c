
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int R_SHA384_CTX ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int ,int) ;
 void** VAR_1 ;

char *FUNC_2(R_SHA384_CTX *VAR_2, char VAR_3[]) {
 ut8 VAR_4[VAR_0], *VAR_5 = VAR_4;
 int VAR_6;


 if (!VAR_2) {
  return ((void*)0);
 }

 if (VAR_3 != (char *) 0) {
  FUNC_0 (VAR_4, VAR_2);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   *VAR_3++ = VAR_1[(*VAR_5 & 0xf0) >> 4];
   *VAR_3++ = VAR_1[*VAR_5 & 0x0f];
   VAR_5++;
  }
  *VAR_3 = (char) 0;
 } else {
  FUNC_1 (VAR_2, 0, sizeof(*VAR_2));
 }
 FUNC_1 (VAR_4, 0, VAR_0);
 return VAR_3;
}
