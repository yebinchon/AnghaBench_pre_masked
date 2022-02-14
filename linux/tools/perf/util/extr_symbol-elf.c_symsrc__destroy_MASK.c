
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symsrc {int fd; int elf; int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct symsrc *VAR_0)
{
 FUNC_2(&VAR_0->name);
 FUNC_1(VAR_0->elf);
 FUNC_0(VAR_0->fd);
}
