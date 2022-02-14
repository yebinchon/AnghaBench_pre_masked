
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opcode; scalar_t__ cond; } ;
typedef TYPE_2__ aarch64_inst ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_0, const aarch64_inst *VAR_1)
{
  char *VAR_2;
  size_t VAR_3;

  VAR_2 = FUNC_1 (VAR_1->opcode->name, '.');
  FUNC_0 (VAR_2 && VAR_1->cond);
  VAR_3 = VAR_2 - VAR_1->opcode->name;
  FUNC_0 (VAR_3 < 8);
  FUNC_2 (VAR_0, VAR_1->opcode->name, VAR_3);
  VAR_0[VAR_3] = '\0';
}
