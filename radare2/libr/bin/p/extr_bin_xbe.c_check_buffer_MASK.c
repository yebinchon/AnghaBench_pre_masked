
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int magic ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int *,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 ut8 VAR_1[4];
 if (FUNC_1 (VAR_0, 0, VAR_1, sizeof (VAR_1)) == 4) {
  return !FUNC_0 (VAR_1, "XBEH", 4);
 }
 return 0;
}
