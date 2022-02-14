
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock_filter {scalar_t__ code; scalar_t__ k; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {struct sock_filter* insns; TYPE_1__ ptr; } ;
struct TYPE_6__ {TYPE_2__ u; scalar_t__ fill_helper; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 struct sock_filter *VAR_3;
 int VAR_4;

 if (VAR_1[VAR_2].fill_helper)
  return VAR_1[VAR_2].u.ptr.len;

 VAR_3 = VAR_1[VAR_2].u.insns;
 for (VAR_4 = VAR_0 - 1; VAR_4 > 0; --VAR_4)
  if (VAR_3[VAR_4].code != 0 || VAR_3[VAR_4].k != 0)
   break;

 return VAR_4 + 1;
}
