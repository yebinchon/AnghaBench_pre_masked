
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_copy_desc {unsigned int iovcnt; TYPE_1__* iov; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ iov_len; } ;



__attribute__((used)) static ssize_t
FUNC_0(struct mic_copy_desc *VAR_0)
{
 ssize_t VAR_1 = 0;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->iovcnt; VAR_2++)
  VAR_1 += VAR_0->iov[VAR_2].iov_len;
 return VAR_1;
}
