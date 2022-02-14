
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuple_len; int tuple_count; int dead_tuple_len; int dead_tuple_count; int free_space; } ;
typedef TYPE_1__ pgstattuple_type ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(pgstattuple_type *VAR_0, Page VAR_1,
      OffsetNumber VAR_2, OffsetNumber VAR_3)
{
 OffsetNumber VAR_4;

 VAR_0->free_space += FUNC_3(VAR_1);

 for (VAR_4 = VAR_2; VAR_4 <= VAR_3; VAR_4 = FUNC_2(VAR_4))
 {
  ItemId VAR_5 = FUNC_4(VAR_1, VAR_4);

  if (FUNC_1(VAR_5))
  {
   VAR_0->dead_tuple_count++;
   VAR_0->dead_tuple_len += FUNC_0(VAR_5);
  }
  else
  {
   VAR_0->tuple_count++;
   VAR_0->tuple_len += FUNC_0(VAR_5);
  }
 }
}
