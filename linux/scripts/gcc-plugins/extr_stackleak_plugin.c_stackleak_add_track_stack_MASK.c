
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gimple_stmt_iterator ;
typedef int gimple ;
typedef int gcall ;
typedef int cgraph_node_ptr ;
typedef TYPE_1__* basic_block ;
struct TYPE_4__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(gimple_stmt_iterator *VAR_4, bool VAR_5)
{
 gimple VAR_6;
 gcall *VAR_7;
 cgraph_node_ptr VAR_8;
 int VAR_9;
 basic_block VAR_10;


 VAR_6 = FUNC_7(VAR_3, 0);
 VAR_7 = FUNC_0(VAR_6);
 if (VAR_5) {
  FUNC_8(VAR_4, VAR_7,
      VAR_0);
 } else {
  FUNC_9(VAR_4, VAR_7, VAR_1);
 }


 VAR_10 = FUNC_6(VAR_7);
 VAR_8 = FUNC_2(VAR_3);
 FUNC_5(VAR_8);
 VAR_9 = FUNC_4(VAR_2, VAR_10);
 FUNC_1(FUNC_3(VAR_2), VAR_8,
   VAR_7, VAR_10->count, VAR_9);
}
