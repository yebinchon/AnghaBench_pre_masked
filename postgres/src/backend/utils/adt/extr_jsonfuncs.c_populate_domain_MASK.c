
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int domain_info; int base_typmod; int base_typid; int base_io; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int JsValue ;
typedef TYPE_1__ DomainIOData ;
typedef scalar_t__ Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int,int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char const*,int ,int ,int *,int*) ;

__attribute__((used)) static Datum
FUNC_4(DomainIOData *VAR_0,
    Oid VAR_1,
    const char *VAR_2,
    MemoryContext VAR_3,
    JsValue *VAR_4,
    bool VAR_5)
{
 Datum VAR_6;

 if (VAR_5)
  VAR_6 = (Datum) 0;
 else
 {
  VAR_6 = FUNC_3(VAR_0->base_io,
         VAR_0->base_typid, VAR_0->base_typmod,
         VAR_2, VAR_3, FUNC_1(((void*)0)),
         VAR_4, &VAR_5);
  FUNC_0(!VAR_5);
 }

 FUNC_2(VAR_6, VAR_5, VAR_1, &VAR_0->domain_info, VAR_3);

 return VAR_6;
}
