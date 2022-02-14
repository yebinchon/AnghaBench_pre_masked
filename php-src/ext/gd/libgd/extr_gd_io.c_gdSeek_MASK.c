
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* seek ) (TYPE_1__*,int const) ;} ;
typedef TYPE_1__ gdIOCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int const) ;

int FUNC_3 (gdIOCtx * VAR_0, const int VAR_1)
{
 FUNC_0 (FUNC_1("Seeking..."));
 return ((VAR_0->seek) (VAR_0, VAR_1));
 FUNC_0 (FUNC_1("Done."));
}
