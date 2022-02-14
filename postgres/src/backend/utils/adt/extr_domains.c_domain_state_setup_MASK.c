
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ typtype; int domainBaseTypmod; int domainBaseType; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_6__ {int domain_type; int mcxt; int * econtext; int constraint_ref; int proc; int typiofunc; int typioparam; int typtypmod; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_2__ DomainIOData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ,int *,int *) ;
 TYPE_1__* FUNC_9 (int ,int ) ;

__attribute__((used)) static DomainIOData *
FUNC_10(Oid VAR_4, bool VAR_5, MemoryContext VAR_6)
{
 DomainIOData *VAR_7;
 TypeCacheEntry *VAR_8;
 Oid VAR_9;

 VAR_7 = (DomainIOData *) FUNC_1(VAR_6, sizeof(DomainIOData));
 VAR_8 = FUNC_9(VAR_4, VAR_2);
 if (VAR_8->typtype != VAR_3)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("type %s is not a domain",
      FUNC_6(VAR_4))));


 VAR_9 = VAR_8->domainBaseType;
 VAR_7->typtypmod = VAR_8->domainBaseTypmod;


 if (VAR_5)
  FUNC_7(VAR_9,
          &VAR_7->typiofunc,
          &VAR_7->typioparam);
 else
  FUNC_8(VAR_9,
       &VAR_7->typiofunc,
       &VAR_7->typioparam);
 FUNC_5(VAR_7->typiofunc, &VAR_7->proc, VAR_6);


 FUNC_0(VAR_4, &VAR_7->constraint_ref, VAR_6, 1);


 VAR_7->econtext = ((void*)0);
 VAR_7->mcxt = VAR_6;


 VAR_7->domain_type = VAR_4;

 return VAR_7;
}
