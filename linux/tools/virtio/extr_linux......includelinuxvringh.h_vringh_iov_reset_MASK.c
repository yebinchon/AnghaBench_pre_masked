
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vringh_iov {size_t i; scalar_t__ consumed; TYPE_1__* iov; } ;
struct TYPE_2__ {int iov_base; int iov_len; } ;



__attribute__((used)) static inline void FUNC_0(struct vringh_iov *VAR_0)
{
 VAR_0->iov[VAR_0->i].iov_len += VAR_0->consumed;
 VAR_0->iov[VAR_0->i].iov_base -= VAR_0->consumed;
 VAR_0->consumed = 0;
 VAR_0->i = 0;
}
