
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcore {int elfclass; int fd; int elf; int ehdr; } ;
typedef int GElf_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct kcore *VAR_4, char *VAR_5, int VAR_6,
         bool VAR_7)
{
 VAR_4->elfclass = VAR_6;

 if (VAR_7)
  VAR_4->fd = FUNC_5(VAR_5);
 else
  VAR_4->fd = FUNC_6(VAR_5, VAR_3 | VAR_1 | VAR_2, 0400);
 if (VAR_4->fd == -1)
  return -1;

 VAR_4->elf = FUNC_1(VAR_4->fd, VAR_0, ((void*)0));
 if (!VAR_4->elf)
  goto out_close;

 if (!FUNC_3(VAR_4->elf, VAR_6))
  goto out_end;

 FUNC_4(&VAR_4->ehdr, 0, sizeof(GElf_Ehdr));

 return 0;

out_end:
 FUNC_2(VAR_4->elf);
out_close:
 FUNC_0(VAR_4->fd);
 FUNC_7(VAR_5);
 return -1;
}
