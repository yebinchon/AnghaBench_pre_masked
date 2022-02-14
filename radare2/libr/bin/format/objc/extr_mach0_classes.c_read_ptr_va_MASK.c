
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;
typedef scalar_t__ mach0_ut ;
typedef int RBinFile ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int*,int*,int *) ;

__attribute__((used)) static bool FUNC_3(RBinFile *VAR_0, ut64 VAR_1, mach0_ut *VAR_2) {
 FUNC_0 (VAR_0, 0);
 ut32 VAR_3 = 0, VAR_4 = 0;
 mach0_ut VAR_5 = FUNC_2 (VAR_1, &VAR_3, &VAR_4, VAR_0);
 if (VAR_5 == 0 || VAR_4 < sizeof (mach0_ut)) {
  return 0;
 }
 return FUNC_1 (VAR_0, VAR_5, VAR_2);
}
