
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ errcode; } ;
struct TYPE_5__ {TYPE_1__ error; } ;
typedef TYPE_2__ fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(fz_context *VAR_1)
{
 FUNC_0(VAR_1 && VAR_1->error.errcode >= VAR_0);
 return VAR_1->error.errcode;
}
