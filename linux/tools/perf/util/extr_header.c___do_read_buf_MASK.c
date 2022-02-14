
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feat_fd {scalar_t__ offset; scalar_t__ buf; scalar_t__ size; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct feat_fd *VAR_0, void *VAR_1, ssize_t VAR_2)
{
 if (VAR_2 > (ssize_t)VAR_0->size - VAR_0->offset)
  return -1;

 FUNC_0(VAR_1, VAR_0->buf + VAR_0->offset, VAR_2);
 VAR_0->offset += VAR_2;

 return 0;

}
