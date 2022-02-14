
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_stat_t ;
struct buffer {int fd; size_t flen; scalar_t__ elen; int * ebuf; scalar_t__ eoff; void const* fbuf; int st; } ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,int *) ;

void
FUNC_3(struct buffer *VAR_0, int VAR_1, const zend_stat_t *VAR_2, const void *VAR_3,
    size_t VAR_4)
{
 VAR_0->fd = VAR_1;
 if (VAR_2)
  FUNC_0(&VAR_0->st, VAR_2, sizeof(VAR_0->st));
 else if (VAR_0->fd == -1 || FUNC_2(VAR_0->fd, &VAR_0->st) == -1)
  FUNC_1(&VAR_0->st, 0, sizeof(VAR_0->st));
 VAR_0->fbuf = VAR_3;
 VAR_0->flen = VAR_4;
 VAR_0->eoff = 0;
 VAR_0->ebuf = ((void*)0);
 VAR_0->elen = 0;
}
