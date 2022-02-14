
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,char const* const) ;

__attribute__((used)) static void
FUNC_1(PQExpBuffer VAR_0, const char *const VAR_1)
{
 if (VAR_0->len > 0)
  FUNC_0(VAR_0, ", ");

 FUNC_0(VAR_0, VAR_1);
}
