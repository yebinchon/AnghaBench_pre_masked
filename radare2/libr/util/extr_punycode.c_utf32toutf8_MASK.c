
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;

ut8 *FUNC_4 (ut32 *VAR_0) {
 if (!VAR_0) {
  FUNC_1 ("ERROR input is null\n");
  return ((void*)0);
 }

 int VAR_1 = 0;
 int VAR_2 = 0;
 int VAR_3 = FUNC_3 (VAR_0);
 ut8 *VAR_4 = FUNC_0 (4, VAR_3 + 1);
 if (!VAR_4) {
  FUNC_1 ("ERROR: out of memory\n");
  return ((void*)0);
 }

 for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
  if (VAR_0[VAR_1] < 0x80) {
   VAR_4[VAR_2] = VAR_0[VAR_1];
   VAR_2++;
  } else if (VAR_0[VAR_1] < 0x800) {
   VAR_4[VAR_2 + 1] = 0x80 | (VAR_0[VAR_1] & 0x3f);
   VAR_4[VAR_2] = 0xc0 | ((VAR_0[VAR_1] >> 6) & 0x1f);
   VAR_2 += 2;
  } else if (VAR_0[VAR_1] < 0x10000) {
   VAR_4[VAR_2 + 2] = 0x80 | (VAR_0[VAR_1] & 0x3f);
   VAR_4[VAR_2 + 1] = 0x80 | ((VAR_0[VAR_1] >> 6) & 0x3f);
   VAR_4[VAR_2] = 0xe0 | ((VAR_0[VAR_1] >> 12) & 0xf);
   VAR_2 += 3;
  } else if (VAR_0[VAR_1] < 0x200000) {
   VAR_4[VAR_2 + 3] = 0x80 | (VAR_0[VAR_1] & 0x3f);
   VAR_4[VAR_2 + 2] = 0x80 | ((VAR_0[VAR_1] >> 6) & 0x3f);
   VAR_4[VAR_2 + 1] = 0x80 | ((VAR_0[VAR_1] >> 12) & 0x3f);
   VAR_4[VAR_2] = 0xf0 | ((VAR_0[VAR_1] >> 18) & 0x7);
   VAR_2 += 4;
  } else {
   FUNC_1 ("ERROR in toutf8. Seems like input is invalid\n");
   FUNC_2 (VAR_4);
   return ((void*)0);
  }
 }

 VAR_4[VAR_2] = 0;
 return VAR_4;
}
