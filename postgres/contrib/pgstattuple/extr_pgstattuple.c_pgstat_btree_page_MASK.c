
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int free_space; } ;
typedef TYPE_1__ pgstattuple_type ;
typedef int Relation ;
typedef int Page ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef int BlockNumber ;
typedef scalar_t__ BTPageOpaque ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_11(pgstattuple_type *VAR_4, Relation VAR_5, BlockNumber VAR_6,
      BufferAccessStrategy VAR_7)
{
 Buffer VAR_8;
 Page VAR_9;

 VAR_8 = FUNC_8(VAR_5, VAR_2, VAR_6, VAR_3, VAR_7);
 FUNC_1(VAR_8, VAR_1);
 VAR_9 = FUNC_0(VAR_8);


 if (FUNC_7(VAR_9))
 {

  VAR_4->free_space += VAR_0;
 }
 else
 {
  BTPageOpaque VAR_10;

  VAR_10 = (BTPageOpaque) FUNC_6(VAR_9);
  if (FUNC_3(VAR_10))
  {

   VAR_4->free_space += VAR_0;
  }
  else if (FUNC_4(VAR_10))
  {
   FUNC_10(VAR_4, VAR_9, FUNC_2(VAR_10),
         FUNC_5(VAR_9));
  }
  else
  {

  }
 }

 FUNC_9(VAR_5, VAR_8);
}
