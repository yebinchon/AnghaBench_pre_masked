
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;
typedef int tmp ;
typedef int RBuffer ;


 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,int ,int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static bool FUNC_5(RBuffer *VAR_0) {
 FUNC_4 (VAR_0, 0);

 ut64 VAR_1 = FUNC_3 (VAR_0);
 if (VAR_1 <= 0xffff) {
  return 0;
 }

 ut8 VAR_2 = FUNC_1 (VAR_0, 0);
 if (VAR_2 == 0xcf || VAR_2 == 0x7f) {
  return 0;
 }

 const ut32 VAR_3 = VAR_1 - 0x10000 + 0xfff0;


 ut8 VAR_4[3];
 int VAR_5 = FUNC_2 (VAR_0, 0, VAR_4, sizeof (VAR_4));
 if (VAR_5 <= 0 || !FUNC_0 (VAR_4, "dex", 3) || !FUNC_0 (VAR_4, "MZ", 2)) {
  return 0;
 }


 ut8 VAR_6 = FUNC_1 (VAR_0, VAR_3);
 return VAR_6 == 0xea || VAR_6 == 0xe9;
}
