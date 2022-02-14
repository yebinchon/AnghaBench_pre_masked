
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cris_disasm_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*,char*,unsigned long) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2 (unsigned long VAR_2,
     char *VAR_3,
     struct cris_disasm_data *VAR_4)
{

  VAR_2 &= 0xffffffff;

  FUNC_0 (VAR_3, "0x%lx", VAR_2);


  if (VAR_0) {
   VAR_1 = VAR_2;
  }

  return VAR_3 + FUNC_1 (VAR_3);
}
