
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (char const* const*,char const* const*,int) ;
 int FUNC_1 (TYPE_1__*) ;

PGconn *
FUNC_2(const char *const *VAR_1,
      const char *const *VAR_2,
      int VAR_3)
{
 PGconn *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_4 && VAR_4->status != VAR_0)
  (void) FUNC_1(VAR_4);

 return VAR_4;

}
