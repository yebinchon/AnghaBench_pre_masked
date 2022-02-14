
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int tmp ;
typedef int RBuffer ;


 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_2(RBuffer *VAR_0) {
 char VAR_1[4];
 int VAR_2 = FUNC_0 (VAR_0, 0, (ut8 *)VAR_1, sizeof (VAR_1));
 return VAR_2 == 4 && !FUNC_1 (VAR_1, "art\n", 4);
}
