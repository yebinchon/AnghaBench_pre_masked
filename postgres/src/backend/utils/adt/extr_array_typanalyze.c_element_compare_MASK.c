
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coll_id; int cmp; } ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, const void *VAR_2)
{
 Datum VAR_3 = *((const Datum *) VAR_1);
 Datum VAR_4 = *((const Datum *) VAR_2);
 Datum VAR_5;

 VAR_5 = FUNC_1(VAR_0->cmp,
        VAR_0->coll_id,
        VAR_3, VAR_4);
 return FUNC_0(VAR_5);
}
