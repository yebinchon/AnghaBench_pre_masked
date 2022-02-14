
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RSocket ;
typedef int RIODesc ;
typedef int RIO ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(RIO *VAR_2, RIODesc *VAR_3, const ut8 *VAR_4, int VAR_5) {
 RSocket *VAR_6 = FUNC_0 (VAR_3);
 ut8 *VAR_7;
 int VAR_8;

 if (VAR_5 < 1) {
  return VAR_5;
 }

 if (VAR_5 > VAR_0) {
  VAR_5 = VAR_0;
 }
 if (!(VAR_7 = (ut8 *)FUNC_3 (VAR_5 + 5))) {
  FUNC_1 ("__rap_write: malloc failed\n");
  return -1;
 }
 VAR_7[0] = VAR_1;
 FUNC_9 (VAR_7 + 1, VAR_5);
 FUNC_4 (VAR_7 + 5, VAR_4, VAR_5);

 (void)FUNC_8 (VAR_6, VAR_7, VAR_5 + 5);
 FUNC_6 (VAR_6);
 if (FUNC_7 (VAR_6, VAR_7, 5) != 5) {
  FUNC_1 ("__rap_write: error\n");
  VAR_8 = -1;
 } else {
  VAR_8 = FUNC_5 (VAR_7 + 1);
  if (!VAR_8) {
   VAR_8 = -1;
  }
 }
 FUNC_2 (VAR_7);
 return VAR_8;
}
