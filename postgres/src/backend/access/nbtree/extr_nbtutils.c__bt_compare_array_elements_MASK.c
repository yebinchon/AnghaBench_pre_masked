
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_2__ {scalar_t__ reverse; int collation; int flinfo; } ;
typedef int Datum ;
typedef TYPE_1__ BTSortArrayContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 Datum VAR_3 = *((const Datum *) VAR_0);
 Datum VAR_4 = *((const Datum *) VAR_1);
 BTSortArrayContext *VAR_5 = (BTSortArrayContext *) VAR_2;
 int32 VAR_6;

 VAR_6 = FUNC_0(FUNC_1(&VAR_5->flinfo,
             VAR_5->collation,
             VAR_3, VAR_4));
 if (VAR_5->reverse)
  FUNC_2(VAR_6);
 return VAR_6;
}
