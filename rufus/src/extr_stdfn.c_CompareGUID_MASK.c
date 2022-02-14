
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GUID ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int const*,int) ;

BOOL FUNC_1(const GUID *VAR_1, const GUID *VAR_2) {
 if ((VAR_1 != ((void*)0)) && (VAR_2 != ((void*)0))) {
  return (FUNC_0(VAR_1, VAR_2, sizeof(GUID)) == 0);
 }
 return VAR_0;
}
