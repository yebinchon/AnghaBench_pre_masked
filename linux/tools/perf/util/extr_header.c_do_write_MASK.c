
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feat_fd {int buf; } ;


 int FUNC_0 (struct feat_fd*,void const*,size_t) ;
 int FUNC_1 (struct feat_fd*,void const*,size_t) ;

int FUNC_2(struct feat_fd *VAR_0, const void *VAR_1, size_t VAR_2)
{
 if (!VAR_0->buf)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
