
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* putBuf ) (TYPE_1__*,void const*,int) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,void const*,int) ;

int FUNC_3 (const void *VAR_0, int VAR_1, gdIOCtx * VAR_2)
{
 FUNC_0 (FUNC_1("Putting buf..."));
 return (VAR_2->putBuf) (VAR_2, VAR_0, VAR_1);
 FUNC_0 (FUNC_1("put."));
}
