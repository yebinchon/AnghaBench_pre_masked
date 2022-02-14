
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int hints; int elf; int insn_list; int ignore_unreachables; int c_file; int insn_hash; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char const*,int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_4 ;
 char const* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

int FUNC_15(const char *VAR_7, bool VAR_8)
{
 int VAR_9, VAR_10 = 0;

 VAR_5 = VAR_7;

 VAR_2.elf = FUNC_6(VAR_5, VAR_8 ? VAR_1 : VAR_0);
 if (!VAR_2.elf)
  return 1;

 FUNC_0(&VAR_2.insn_list);
 FUNC_9(VAR_2.insn_hash);
 VAR_2.c_file = FUNC_8(VAR_2.elf, ".comment");
 VAR_2.ignore_unreachables = VAR_4;
 VAR_2.hints = 0;

 FUNC_1(&VAR_3);

 VAR_9 = FUNC_5(&VAR_2);
 if (VAR_9 < 0)
  goto out;
 VAR_10 += VAR_9;

 if (FUNC_10(&VAR_2.insn_list))
  goto out;

 if (VAR_6) {
  VAR_9 = FUNC_13(&VAR_2);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_10 += VAR_9;
 }

 VAR_9 = FUNC_11(&VAR_2);
 if (VAR_9 < 0)
  goto out;
 VAR_10 += VAR_9;

 VAR_9 = FUNC_14(&VAR_2);
 if (VAR_9 < 0)
  goto out;
 VAR_10 += VAR_9;

 if (!VAR_10) {
  VAR_9 = FUNC_12(&VAR_2);
  if (VAR_9 < 0)
   goto out;
  VAR_10 += VAR_9;
 }

 if (VAR_8) {
  VAR_9 = FUNC_3(&VAR_2);
  if (VAR_9 < 0)
   goto out;

  VAR_9 = FUNC_4(&VAR_2);
  if (VAR_9 < 0)
   goto out;

  VAR_9 = FUNC_7(VAR_2.elf);
  if (VAR_9 < 0)
   goto out;
 }

out:
 FUNC_2(&VAR_2);


 if (VAR_9 || VAR_10)
  return 0;
 return 0;
}
