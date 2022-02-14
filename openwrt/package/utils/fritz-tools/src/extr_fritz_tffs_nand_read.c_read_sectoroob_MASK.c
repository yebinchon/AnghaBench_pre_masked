
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_buf {int ptr; int length; int start; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct mtd_oob_buf*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(off_t VAR_4)
{
 struct mtd_oob_buf VAR_5 = {
  .start = VAR_4,
  .length = VAR_1,
  .ptr = VAR_3
 };

 if (FUNC_0(VAR_2, VAR_0, &VAR_5) < 0) {
  return -1;
 }

 return 0;
}
