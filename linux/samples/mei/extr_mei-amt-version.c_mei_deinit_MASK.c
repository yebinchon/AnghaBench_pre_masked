
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei {int fd; int initialized; scalar_t__ prot_ver; scalar_t__ buf_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mei *VAR_0)
{
 if (VAR_0->fd != -1)
  FUNC_0(VAR_0->fd);
 VAR_0->fd = -1;
 VAR_0->buf_size = 0;
 VAR_0->prot_ver = 0;
 VAR_0->initialized = 0;
}
