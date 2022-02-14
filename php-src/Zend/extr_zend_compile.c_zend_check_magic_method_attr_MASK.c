
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_bool ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_3, const char* VAR_4, zend_bool VAR_5)
{
 if (VAR_5) {
  if (!(VAR_3 & VAR_1) || !(VAR_3 & VAR_2)) {
   FUNC_0(VAR_0, "The magic method %s() must have public visibility and be static", VAR_4);
  }
 } else if (!(VAR_3 & VAR_1) || (VAR_3 & VAR_2)) {
  FUNC_0(VAR_0,
    "The magic method %s() must have public visibility and cannot be static",
    VAR_4);
 }
}
