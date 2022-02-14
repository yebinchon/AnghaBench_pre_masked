
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcore {int fd; scalar_t__ elfclass; int elf; int ehdr; } ;
typedef int GElf_Ehdr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct kcore *VAR_3, const char *VAR_4)
{
 GElf_Ehdr *VAR_5;

 VAR_3->fd = FUNC_5(VAR_4, VAR_2);
 if (VAR_3->fd == -1)
  return -1;

 VAR_3->elf = FUNC_1(VAR_3->fd, VAR_1, ((void*)0));
 if (!VAR_3->elf)
  goto out_close;

 VAR_3->elfclass = FUNC_3(VAR_3->elf);
 if (VAR_3->elfclass == VAR_0)
  goto out_end;

 VAR_5 = FUNC_4(VAR_3->elf, &VAR_3->ehdr);
 if (!VAR_5)
  goto out_end;

 return 0;

out_end:
 FUNC_2(VAR_3->elf);
out_close:
 FUNC_0(VAR_3->fd);
 return -1;
}
