
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int queryEnv; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ md; } ;
typedef TYPE_2__* EphemeralNamedRelation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (char const*) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(const char *VAR_4)
{
 EphemeralNamedRelation VAR_5;
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return VAR_0;

 VAR_6 = FUNC_0(0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
 {
  FUNC_3(VAR_3->queryEnv, VAR_5->md.name);
  VAR_6 = VAR_2;
 }
 else
  VAR_6 = VAR_1;

 FUNC_1(0);

 return VAR_6;
}
