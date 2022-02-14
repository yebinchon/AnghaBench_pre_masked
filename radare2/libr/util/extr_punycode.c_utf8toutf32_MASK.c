
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char const*) ;

ut32 *FUNC_4 (const ut8 *VAR_0) {
 if (!VAR_0) {
  FUNC_1 ("ERROR input is null\n");
  return ((void*)0);
 }

 int VAR_1 = 0;
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4 = FUNC_3 ((const char *) VAR_0);
 ut32 *VAR_5 = FUNC_0 (FUNC_3 ((const char *) VAR_0) + 1, 4);

 if (!VAR_5) {
  FUNC_1 ("ERROR: out of memory\n");
  return ((void*)0);
 }

 while (VAR_1 < VAR_4) {
  if (VAR_0[VAR_1] >> 7 == 0) {
   VAR_3 = VAR_0[VAR_1];
   VAR_1 += 1;
  } else if (VAR_0[VAR_1] >> 5 == 0x6) {
   VAR_3 = (((VAR_0[VAR_1] & 0x1f) << 6) & 0xfc0) |
   (VAR_0[VAR_1 + 1] & 0x3f);
   VAR_1 += 2;
  } else if (VAR_0[VAR_1] >> 4 == 0xe) {
   VAR_3 = (((VAR_0[VAR_1] & 0xf) << 12) & 0xf000) |
   (((VAR_0[VAR_1 + 1] & 0x3f) << 6) & 0xffc0) |
   (VAR_0[VAR_1 + 2] & 0x3f);
   VAR_1 += 3;
  } else if (VAR_0[VAR_1] >> 3 == 0x1e) {
   VAR_3 = (((VAR_0[VAR_1] & 0xf) << 18) & 0x1c0000) |
   (((VAR_0[VAR_1 + 1] & 0x3f) << 12) & 0x1ff000) |
   (((VAR_0[VAR_1 + 2] & 0x3f) << 6) & 0x1fffc0) |
   (VAR_0[VAR_1 + 3] & 0x3f);
   VAR_1 += 4;
  } else {
   FUNC_1 ("ERROR in toutf32. Seems like input is invalid.\n");
   FUNC_2 (VAR_5);
   return ((void*)0);
  }
  VAR_5[VAR_2] = VAR_3;
  VAR_2++;
 }

 return VAR_5;
}
