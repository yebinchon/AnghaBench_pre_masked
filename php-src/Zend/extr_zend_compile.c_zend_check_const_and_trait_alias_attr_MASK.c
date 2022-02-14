
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_4, const char* VAR_5)
{
 if (VAR_4 & VAR_3) {
  FUNC_0(VAR_0, "Cannot use 'static' as %s modifier", VAR_5);
 } else if (VAR_4 & VAR_1) {
  FUNC_0(VAR_0, "Cannot use 'abstract' as %s modifier", VAR_5);
 } else if (VAR_4 & VAR_2) {
  FUNC_0(VAR_0, "Cannot use 'final' as %s modifier", VAR_5);
 }
}
