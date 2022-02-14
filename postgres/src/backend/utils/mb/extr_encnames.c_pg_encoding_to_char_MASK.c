
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int encoding; char const* name; } ;
typedef TYPE_1__ pg_enc2name ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;

const char *
FUNC_2(int VAR_1)
{
 if (FUNC_1(VAR_1))
 {
  const pg_enc2name *VAR_2 = &VAR_0[VAR_1];

  FUNC_0(VAR_1 == VAR_2->encoding);
  return VAR_2->name;
 }
 return "";
}
