
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 int FUNC_0 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_5)
{
 switch (VAR_5 & VAR_1) {
  case 130:
   FUNC_0(VAR_4, " (self)");
   break;
  case 131:
   FUNC_0(VAR_4, " (parent)");
   break;
  case 129:
   FUNC_0(VAR_4, " (static)");
   break;
  case 133:
   FUNC_0(VAR_4, " (auto)");
   break;
  case 132:
   FUNC_0(VAR_4, " (interface)");
   break;
  case 128:
   FUNC_0(VAR_4, " (trait)");
   break;
 }
 if (VAR_5 & VAR_2) {
   FUNC_0(VAR_4, " (no-autolod)");
 }
 if (VAR_5 & VAR_3) {
   FUNC_0(VAR_4, " (silent)");
 }
 if (VAR_5 & VAR_0) {
   FUNC_0(VAR_4, " (exception)");
 }
}
