
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int buf ;
typedef int RBuffer ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_0) {
 if (FUNC_2 (VAR_0) > 0x190) {
  ut8 VAR_1[4];
  FUNC_1 (VAR_0, 0x100, VAR_1, sizeof (VAR_1));
  return !FUNC_0 (VAR_1, "SEGA", 4);
 }
 return 0;
}
