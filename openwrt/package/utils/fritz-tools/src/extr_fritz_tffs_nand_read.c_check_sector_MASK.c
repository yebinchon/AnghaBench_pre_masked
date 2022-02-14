
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(off_t VAR_2)
{
 if (!VAR_1) {
  return 1;
 }
 if (FUNC_0(VAR_2)) {
  return 0;
 }
 if (FUNC_1(VAR_0, 0x00) != 0xff) {

  return 0;
 }
 if (FUNC_1(VAR_0, 0x01) != 0xff) {

  return 0;
 }
 return 1;
}
