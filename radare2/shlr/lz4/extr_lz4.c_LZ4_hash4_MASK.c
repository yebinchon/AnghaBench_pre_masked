
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ut32 ;
typedef scalar_t__ tableType_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;

__attribute__((used)) static ut32 FUNC_0(ut32 VAR_3, tableType_t const VAR_4) {
 if (VAR_4 == VAR_2) {
  return ((VAR_3 * 2654435761U) >> ((VAR_1*8)-(VAR_0+1)));
 }
 return ((VAR_3 * 2654435761U) >> ((VAR_1*8)-VAR_0));
}
