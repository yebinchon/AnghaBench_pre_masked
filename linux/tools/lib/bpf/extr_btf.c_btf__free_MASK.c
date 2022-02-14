
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int fd; struct btf* types; struct btf* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btf*) ;

void FUNC_2(struct btf *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->fd != -1)
  FUNC_0(VAR_0->fd);

 FUNC_1(VAR_0->data);
 FUNC_1(VAR_0->types);
 FUNC_1(VAR_0);
}
