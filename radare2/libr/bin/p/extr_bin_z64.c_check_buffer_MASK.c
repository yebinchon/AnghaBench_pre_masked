
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int magic ;
typedef int RBuffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(RBuffer *VAR_1) {
 ut8 VAR_2[4];
 if (FUNC_2 (VAR_1) < VAR_0) {
  return 0;
 }
 (void)FUNC_1 (VAR_1, 0, VAR_2, sizeof (VAR_2));
 return !FUNC_0 (VAR_2, "\x80\x37\x12\x40", 4);
}
