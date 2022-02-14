
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Tuplestorestate ;
struct TYPE_4__ {size_t query_depth; TYPE_1__* query_stack; } ;
struct TYPE_3__ {int * fdw_tuplestore; } ;
typedef int ResourceOwner ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_3 ;
 int * FUNC_1 (int,int,int ) ;
 int VAR_4 ;

__attribute__((used)) static Tuplestorestate *
FUNC_2(void)
{
 Tuplestorestate *VAR_5;

 VAR_5 = VAR_3.query_stack[VAR_3.query_depth].fdw_tuplestore;
 if (VAR_5 == ((void*)0))
 {
  MemoryContext VAR_6;
  ResourceOwner VAR_7;





  VAR_6 = FUNC_0(VAR_0);
  VAR_7 = VAR_2;
  VAR_2 = VAR_1;

  VAR_5 = FUNC_1(0, 0, VAR_4);

  VAR_2 = VAR_7;
  FUNC_0(VAR_6);

  VAR_3.query_stack[VAR_3.query_depth].fdw_tuplestore = VAR_5;
 }

 return VAR_5;
}
