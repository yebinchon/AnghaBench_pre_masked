
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ domain_type; } ;
typedef scalar_t__ Oid ;
typedef int * MemoryContext ;
typedef TYPE_1__ DomainIOData ;
typedef int Datum ;


 int * VAR_0 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (scalar_t__,int,int *) ;

void
FUNC_2(Datum VAR_1, bool VAR_2, Oid VAR_3,
    void **VAR_4, MemoryContext VAR_5)
{
 DomainIOData *VAR_6 = ((void*)0);

 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_0;






 if (VAR_4)
  VAR_6 = (DomainIOData *) *VAR_4;
 if (VAR_6 == ((void*)0) || VAR_6->domain_type != VAR_3)
 {
  VAR_6 = FUNC_1(VAR_3, 1, VAR_5);
  if (VAR_4)
   *VAR_4 = (void *) VAR_6;
 }




 FUNC_0(VAR_1, VAR_2, VAR_6);
}
