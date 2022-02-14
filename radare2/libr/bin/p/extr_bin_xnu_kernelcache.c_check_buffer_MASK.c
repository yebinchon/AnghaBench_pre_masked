
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int buf ;
typedef int RBuffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(RBuffer *VAR_0) {
 if (FUNC_3 (VAR_0) > 4) {
  ut8 VAR_1[4];
  FUNC_2 (VAR_0, 0, VAR_1, sizeof (VAR_1));
  if (!FUNC_1 (VAR_1, "\xcf\xfa\xed\xfe", 4)) {
   return FUNC_0 (VAR_0);
  }
 }
 return 0;
}
