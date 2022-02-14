
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int RSocket ;
typedef int RIODesc ;
typedef int RIO ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *,int**,int) ;
 int FUNC_6 (int*,int) ;

__attribute__((used)) static ut64 FUNC_7(RIO *VAR_2, RIODesc *VAR_3, ut64 VAR_4, int VAR_5) {
 RSocket *VAR_6 = FUNC_0 (VAR_3);
 ut8 VAR_7[10];
 VAR_7[0] = VAR_1;
 VAR_7[1] = (ut8)VAR_5;
 FUNC_6 (VAR_7 + 2, VAR_4);
 (void)FUNC_5 (VAR_6, &VAR_7, 10);
 FUNC_3 (VAR_6);
 int VAR_8 = FUNC_4 (VAR_6, (ut8*)&VAR_7, 9);
 if (VAR_8 != 9) {
  FUNC_1 ("Truncated socket read\n");
  return -1;
 }
 if (VAR_7[0] != (VAR_1 | VAR_0)) {


  FUNC_1 ("Unexpected lseek reply (%02x -> %02x)\n", VAR_7[0], (VAR_1 | VAR_0));
  return -1;
 }
 return FUNC_2 (VAR_7, 1);
}
