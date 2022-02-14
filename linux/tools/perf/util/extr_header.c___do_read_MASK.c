
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feat_fd {int buf; } ;
typedef int ssize_t ;


 int FUNC_0 (struct feat_fd*,void*,int ) ;
 int FUNC_1 (struct feat_fd*,void*,int ) ;

__attribute__((used)) static int FUNC_2(struct feat_fd *VAR_0, void *VAR_1, ssize_t VAR_2)
{
 if (!VAR_0->buf)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
