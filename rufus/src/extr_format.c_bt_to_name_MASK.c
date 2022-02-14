
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __inline const char* FUNC_1(void) {
 switch (VAR_1) {
 case 129: return "FreeDOS";
 case 128: return "ReactOS";
 default:
  return ((VAR_1 == VAR_0) && FUNC_0(VAR_2)) ? "KolibriOS" : "Standard";
 }
}
