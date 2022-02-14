
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
 int VAR_2 ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int*,int) ;

__attribute__((used)) static int FUNC_7(RIO *VAR_3, RIODesc *VAR_4, ut8 *VAR_5, int VAR_6) {
 RSocket *VAR_7 = FUNC_0 (VAR_4);
 int VAR_8, VAR_9 = (int)VAR_6;
 ut8 VAR_10[5];


 if (VAR_6 > VAR_0) {
  VAR_6 = VAR_0;
 }

 VAR_10[0] = VAR_1;
 FUNC_6 (VAR_10 + 1, VAR_6);
 (void)FUNC_5 (VAR_7, VAR_10, 5);
 FUNC_3 (VAR_7);

 VAR_8 = FUNC_4 (VAR_7, VAR_10, 5);
 if (VAR_8 != 5 || VAR_10[0] != (VAR_1 | VAR_2)) {
  FUNC_1 ("__rap_read: Unexpected rap read reply "
   "(%d=0x%02x) expected (%d=0x%02x)\n",
   VAR_8, VAR_10[0], 2, (VAR_1 | VAR_2));
  return -1;
 }
 VAR_9 = FUNC_2 (VAR_10, 1);
 if (VAR_9 > VAR_6) {
  FUNC_1 ("__rap_read: Unexpected data size %d vs %d\n", VAR_9, VAR_6);
  return -1;
 }
 FUNC_4 (VAR_7, VAR_5, VAR_9);
 return VAR_6;
}
