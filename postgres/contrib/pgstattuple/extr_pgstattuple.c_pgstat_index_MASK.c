
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_5__ {int table_len; int member_0; } ;
typedef TYPE_1__ pgstattuple_type ;
typedef int (* pgstat_page ) (TYPE_1__*,int ,scalar_t__,int ) ;
typedef int Relation ;
typedef int FunctionCallInfo ;
typedef int Datum ;
typedef int BufferAccessStrategy ;
typedef scalar_t__ BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static Datum
FUNC_7(Relation VAR_4, BlockNumber VAR_5, pgstat_page VAR_6,
    FunctionCallInfo VAR_7)
{
 BlockNumber VAR_8;
 BlockNumber VAR_9;
 BufferAccessStrategy VAR_10;
 pgstattuple_type VAR_11 = {0};


 VAR_10 = FUNC_1(VAR_1);

 VAR_9 = VAR_5;
 for (;;)
 {

  FUNC_2(VAR_4, VAR_3);
  VAR_8 = FUNC_3(VAR_4);
  FUNC_4(VAR_4, VAR_3);


  if (VAR_9 >= VAR_8)
  {
   VAR_11.table_len = (uint64) VAR_8 * VAR_2;

   break;
  }

  for (; VAR_9 < VAR_8; VAR_9++)
  {
   FUNC_0();

   VAR_6(&VAR_11, VAR_4, VAR_9, VAR_10);
  }
 }

 FUNC_6(VAR_4, VAR_0);

 return FUNC_5(&VAR_11, VAR_7);
}
