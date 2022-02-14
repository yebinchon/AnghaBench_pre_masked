
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct special_alt {int dummy; } ;
struct objtool_file {int dummy; } ;
struct instruction {scalar_t__ type; int offset; int sec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 struct instruction* FUNC_1 (struct instruction*,int ) ;

__attribute__((used)) static int FUNC_2(struct objtool_file *VAR_3,
      struct special_alt *VAR_4,
      struct instruction *VAR_5,
      struct instruction **VAR_6)
{
 if (VAR_5->type == VAR_1)
  return 0;

 if (VAR_5->type != VAR_0) {
  FUNC_0("unsupported instruction at jump label",
     VAR_5->sec, VAR_5->offset);
  return -1;
 }

 *VAR_6 = FUNC_1(VAR_5, VAR_2);
 return 0;
}
