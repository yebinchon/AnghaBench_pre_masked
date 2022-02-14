
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int attcacheoff; } ;
struct TYPE_7__ {int tdtypmod; int tdtypeid; } ;
typedef int MemoryContext ;
typedef int FormData_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,int const*,int ) ;

__attribute__((used)) static TupleDesc
FUNC_4(int VAR_3, const FormData_pg_attribute *VAR_4)
{
 TupleDesc VAR_5;
 MemoryContext VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_1);

 VAR_5 = FUNC_0(VAR_3);
 VAR_5->tdtypeid = VAR_2;
 VAR_5->tdtypmod = -1;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  FUNC_3(FUNC_2(VAR_5, VAR_7), &VAR_4[VAR_7], VAR_0);

  FUNC_2(VAR_5, VAR_7)->attcacheoff = -1;
 }


 FUNC_2(VAR_5, 0)->attcacheoff = 0;



 FUNC_1(VAR_6);

 return VAR_5;
}
