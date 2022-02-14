
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ databaseId; scalar_t__ tempNamespaceId; } ;
typedef TYPE_1__ PGPROC ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;

bool
FUNC_4(Oid VAR_3)
{
 PGPROC *VAR_4;
 int VAR_5;

 FUNC_0(FUNC_3(VAR_2));

 VAR_5 = FUNC_2(VAR_3);

 if (VAR_5 == VAR_0 ||
  VAR_5 == VAR_1)
  return 0;


 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 == ((void*)0))
  return 0;


 if (VAR_4->databaseId != VAR_2)
  return 0;


 if (VAR_4->tempNamespaceId != VAR_3)
  return 0;


 return 1;
}
