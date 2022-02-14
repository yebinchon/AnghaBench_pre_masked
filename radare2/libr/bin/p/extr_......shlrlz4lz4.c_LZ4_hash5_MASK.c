
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;
typedef scalar_t__ tableType_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ const VAR_1 ;

__attribute__((used)) static ut32 FUNC_1(ut64 VAR_2, tableType_t const VAR_3) {
 static const ut64 VAR_4 = 889523592379ULL;
 static const ut64 VAR_5 = 11400714785074694791ULL;
 const ut32 VAR_6 = (VAR_3 == VAR_1) ? VAR_0+1 : VAR_0;
 if (FUNC_0()) {
  return (ut32)(((VAR_2 << 24) * VAR_4) >> (64 - VAR_6));
 }
 return (ut32)(((VAR_2 >> 24) * VAR_5) >> (64 - VAR_6));
}
