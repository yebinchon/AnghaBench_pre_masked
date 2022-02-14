
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int dsa_pointer ;
typedef int dsa_area ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_6__ {int tdtypmod; } ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static dsa_pointer
FUNC_4(dsa_area *VAR_0, TupleDesc VAR_1, uint32 VAR_2)
{
 dsa_pointer VAR_3;
 TupleDesc VAR_4;

 VAR_3 = FUNC_2(VAR_0, FUNC_1(VAR_1));
 VAR_4 = (TupleDesc) FUNC_3(VAR_0, VAR_3);
 FUNC_0(VAR_4, VAR_1);
 VAR_4->tdtypmod = VAR_2;

 return VAR_3;
}
