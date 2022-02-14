
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long (* tell ) (TYPE_1__*) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 long FUNC_2 (TYPE_1__*) ;

long FUNC_3 (gdIOCtx * VAR_0)
{
 FUNC_0 (FUNC_1("Telling..."));
 return ((VAR_0->tell) (VAR_0));
 FUNC_0 (FUNC_1 ("told."));
}
