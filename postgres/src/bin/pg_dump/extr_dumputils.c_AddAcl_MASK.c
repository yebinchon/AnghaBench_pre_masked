
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
typedef TYPE_1__* PQExpBuffer ;


 int FUNC_0 (TYPE_1__*,char*,char const*) ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char const*) ;

__attribute__((used)) static void
FUNC_3(PQExpBuffer VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (VAR_0->len > 0)
  FUNC_1(VAR_0, ',');
 FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0, "(%s)", VAR_2);
}
