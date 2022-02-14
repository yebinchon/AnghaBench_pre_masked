
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int name; TYPE_2__* namespace; } ;
struct TYPE_9__ {TYPE_3__ dobj; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_7__ {TYPE_1__ dobj; } ;
typedef TYPE_4__ OprInfo ;
typedef int Archive ;


 int FUNC_0 (char const*) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_6(Archive *VAR_0, const char *VAR_1)
{
 OprInfo *VAR_2;


 if (FUNC_5(VAR_1, "0") == 0)
  return ((void*)0);

 VAR_2 = FUNC_1(FUNC_0(VAR_1));
 if (VAR_2 == ((void*)0))
 {
  FUNC_3("could not find operator with OID %s",
        VAR_1);
  return ((void*)0);
 }

 return FUNC_4("OPERATOR(%s.%s)",
     FUNC_2(VAR_2->dobj.namespace->dobj.name),
     VAR_2->dobj.name);
}
