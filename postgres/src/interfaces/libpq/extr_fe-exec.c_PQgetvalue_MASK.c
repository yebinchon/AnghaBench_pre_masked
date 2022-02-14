
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** tuples; } ;
struct TYPE_5__ {char* value; } ;
typedef TYPE_2__ PGresult ;


 int FUNC_0 (TYPE_2__ const*,int,int) ;

char *
FUNC_1(const PGresult *VAR_0, int VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_0, VAR_1, VAR_2))
  return ((void*)0);
 return VAR_0->tuples[VAR_1][VAR_2].value;
}
