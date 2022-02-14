
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int userPtr; int (* renderDeleteTexture ) (int ,int) ;} ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef TYPE_2__ NVGcontext ;


 int FUNC_0 (int ,int) ;

void FUNC_1(NVGcontext* VAR_0, int VAR_1)
{
 VAR_0->params.renderDeleteTexture(VAR_0->params.userPtr, VAR_1);
}
