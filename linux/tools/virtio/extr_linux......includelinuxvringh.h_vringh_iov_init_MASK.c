
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vringh_iov {unsigned int max_num; struct iovec* iov; scalar_t__ consumed; scalar_t__ i; scalar_t__ used; } ;
struct iovec {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct vringh_iov *VAR_0,
       struct iovec *VAR_1, unsigned VAR_2)
{
 VAR_0->used = VAR_0->i = 0;
 VAR_0->consumed = 0;
 VAR_0->max_num = VAR_2;
 VAR_0->iov = VAR_1;
}
