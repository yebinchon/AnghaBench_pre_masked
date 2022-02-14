
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int namedRelList; } ;
typedef TYPE_1__ QueryEnvironment ;
typedef scalar_t__ EphemeralNamedRelation ;


 scalar_t__ FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (int ,scalar_t__) ;

void
FUNC_2(QueryEnvironment *VAR_0, const char *VAR_1)
{
 EphemeralNamedRelation VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_0->namedRelList = FUNC_1(VAR_0->namedRelList, VAR_2);
}
