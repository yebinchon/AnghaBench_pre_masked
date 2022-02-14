
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int buf ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(RBuffer *VAR_0) {
 if (FUNC_4 (VAR_0) > 32) {
  ut8 VAR_1[4];
  FUNC_1 (VAR_0, 0, VAR_1, sizeof (VAR_1));
  if (!FUNC_0 (VAR_1, "\xca\xfe\xba\xbe", 4)) {
   int VAR_2 = FUNC_3 (VAR_0, 4 * sizeof (int));
   int VAR_3 = FUNC_2 (VAR_0, 6);
   if (VAR_2 > 0 && VAR_3 < 1024) {
    return 1;
   }
  }
 }
 return 0;
}
