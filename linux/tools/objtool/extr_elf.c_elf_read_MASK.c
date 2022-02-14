
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf {int fd; int ehdr; int elf; int sections; } ;
typedef int Elf_Cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (struct elf*) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,char*,char const*,char*) ;
 int FUNC_6 (int ,int *) ;
 struct elf* FUNC_7 (int) ;
 int FUNC_8 (struct elf*,int ,int) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (struct elf*) ;
 scalar_t__ FUNC_12 (struct elf*) ;
 scalar_t__ FUNC_13 (struct elf*) ;
 int VAR_8 ;
 char* FUNC_14 (int ) ;

struct elf *FUNC_15(const char *VAR_9, int VAR_10)
{
 struct elf *VAR_11;
 Elf_Cmd VAR_12;

 FUNC_4(VAR_3);

 VAR_11 = FUNC_7(sizeof(*VAR_11));
 if (!VAR_11) {
  FUNC_10("malloc");
  return ((void*)0);
 }
 FUNC_8(VAR_11, 0, sizeof(*VAR_11));

 FUNC_0(&VAR_11->sections);

 VAR_11->fd = FUNC_9(VAR_9, VAR_10);
 if (VAR_11->fd == -1) {
  FUNC_5(VAR_8, "objtool: Can't open '%s': %s\n",
   VAR_9, FUNC_14(VAR_7));
  goto err;
 }

 if ((VAR_10 & VAR_4) == VAR_5)
  VAR_12 = VAR_1;
 else if ((VAR_10 & VAR_4) == VAR_6)
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_2;

 VAR_11->elf = FUNC_2(VAR_11->fd, VAR_12, ((void*)0));
 if (!VAR_11->elf) {
  FUNC_1("elf_begin");
  goto err;
 }

 if (!FUNC_6(VAR_11->elf, &VAR_11->ehdr)) {
  FUNC_1("gelf_getehdr");
  goto err;
 }

 if (FUNC_12(VAR_11))
  goto err;

 if (FUNC_13(VAR_11))
  goto err;

 if (FUNC_11(VAR_11))
  goto err;

 return VAR_11;

err:
 FUNC_3(VAR_11);
 return ((void*)0);
}
