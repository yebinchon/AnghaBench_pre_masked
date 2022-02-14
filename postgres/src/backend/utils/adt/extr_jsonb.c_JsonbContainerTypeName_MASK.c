
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int header; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonbContainer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 char const* FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static const char *
FUNC_5(JsonbContainer *VAR_1)
{
 JsonbValue VAR_2;

 if (FUNC_2(VAR_1, &VAR_2))
  return FUNC_3(&VAR_2);
 else if (FUNC_0(VAR_1))
  return "array";
 else if (FUNC_1(VAR_1))
  return "object";
 else
 {
  FUNC_4(VAR_0, "invalid jsonb container type: 0x%08x", VAR_1->header);
  return "unknown";
 }
}
