
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int typname; int nspname; int remoteid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ LogicalRepTyp ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int *,void*,int ,int*) ;
 char* FUNC_5 (char*,scalar_t__,...) ;

char *
FUNC_6(Oid VAR_3)
{
 LogicalRepTyp *VAR_4;
 bool VAR_5;


 if (VAR_3 < VAR_0)
 {
  if (!FUNC_3(VAR_3))
  {




   return FUNC_5("unrecognized %u", VAR_3);
  }

  return FUNC_2(VAR_3);
 }

 if (VAR_2 == ((void*)0))
 {






  return FUNC_5("unrecognized %u", VAR_3);
 }


 VAR_4 = FUNC_4(VAR_2, (void *) &VAR_3,
      VAR_1, &VAR_5);
 if (!VAR_5)
  return FUNC_5("unrecognized %u", VAR_3);

 FUNC_0(FUNC_1(VAR_4->remoteid));
 return FUNC_5("%s.%s", VAR_4->nspname, VAR_4->typname);
}
