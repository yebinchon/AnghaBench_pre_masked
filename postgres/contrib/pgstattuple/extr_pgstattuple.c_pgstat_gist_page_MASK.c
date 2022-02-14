
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgstattuple_type ;
typedef int Relation ;
typedef int Page ;
typedef int BufferAccessStrategy ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(pgstattuple_type *VAR_4, Relation VAR_5, BlockNumber VAR_6,
     BufferAccessStrategy VAR_7)
{
 Buffer VAR_8;
 Page VAR_9;

 VAR_8 = FUNC_4(VAR_5, VAR_2, VAR_6, VAR_3, VAR_7);
 FUNC_2(VAR_8, VAR_1);
 FUNC_6(VAR_5, VAR_8);
 VAR_9 = FUNC_0(VAR_8);

 if (FUNC_1(VAR_9))
 {
  FUNC_7(VAR_4, VAR_9, VAR_0,
        FUNC_3(VAR_9));
 }
 else
 {

 }

 FUNC_5(VAR_8);
}
