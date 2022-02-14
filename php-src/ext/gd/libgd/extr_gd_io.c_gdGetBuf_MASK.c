
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* getBuf ) (TYPE_1__*,void*,int) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (TYPE_1__*,void*,int) ;

int FUNC_1 (void *VAR_0, int VAR_1, gdIOCtx * VAR_2)
{
 return (VAR_2->getBuf) (VAR_2, VAR_0, VAR_1);
}
