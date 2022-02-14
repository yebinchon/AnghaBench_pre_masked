
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** tuples; } ;
struct TYPE_5__ {scalar_t__ len; } ;
typedef TYPE_2__ PGresult ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,int,int) ;

int
FUNC_1(const PGresult *VAR_1, int VAR_2, int VAR_3)
{
 if (!FUNC_0(VAR_1, VAR_2, VAR_3))
  return 0;
 if (VAR_1->tuples[VAR_2][VAR_3].len != VAR_0)
  return VAR_1->tuples[VAR_2][VAR_3].len;
 else
  return 0;
}
