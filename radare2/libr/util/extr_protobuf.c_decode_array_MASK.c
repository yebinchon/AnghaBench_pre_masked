
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int RStrBuf ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(RStrBuf *VAR_0, const ut8* VAR_1, const ut8* VAR_2) {
 while (VAR_1 < VAR_2) {
  FUNC_0 (VAR_0, "%02x ", *VAR_1);
  VAR_1++;
 }
 FUNC_0 (VAR_0, "\n");
}
