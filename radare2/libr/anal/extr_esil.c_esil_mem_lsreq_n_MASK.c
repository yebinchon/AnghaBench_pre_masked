
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int RAnalEsil ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,char*,int*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static bool FUNC_8(RAnalEsil *VAR_0, int VAR_1) {
 bool VAR_2 = 0;
 ut64 VAR_3, VAR_4;
 char *VAR_5 = FUNC_5 (VAR_0);
 char *VAR_6 = FUNC_5 (VAR_0);
 char *VAR_7 = ((void*)0);
 if (VAR_6 && FUNC_4 (VAR_0, VAR_6, &VAR_3)) {
  FUNC_6 (VAR_0, VAR_5);
  VAR_2 = (!!FUNC_1 (VAR_0, VAR_1));
  VAR_7 = FUNC_5 (VAR_0);
  if (VAR_7 && FUNC_4 (VAR_0, VAR_7, &VAR_4)) {
   VAR_4 >>= VAR_3;
   FUNC_7 (VAR_0, VAR_4);
   FUNC_6 (VAR_0, VAR_5);
   VAR_2 &= (!!FUNC_2 (VAR_0, VAR_1));
  } else {
   VAR_2 = 0;
  }
 }
 if (!VAR_2) {
  FUNC_0 ("esil_mem_lsreq_n: invalid parameters");
 }
 FUNC_3 (VAR_5);
 FUNC_3 (VAR_6);
 FUNC_3 (VAR_7);
 return VAR_2;
}
