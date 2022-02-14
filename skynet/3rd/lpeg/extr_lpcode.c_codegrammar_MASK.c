
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tag; } ;
typedef TYPE_1__ TTree ;
typedef int CompileState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (int *,int*,int,int) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9 (CompileState *VAR_8, TTree *VAR_9) {
  int VAR_10[VAR_3];
  int VAR_11 = 0;
  TTree *VAR_12;
  int VAR_13 = FUNC_1(VAR_8, VAR_0);
  int VAR_14 = FUNC_1(VAR_8, VAR_1);
  int VAR_15 = FUNC_5(VAR_8);
  FUNC_6(VAR_8, VAR_13);
  for (VAR_12 = FUNC_7(VAR_9); VAR_12->tag == VAR_5; VAR_12 = FUNC_8(VAR_12)) {
    VAR_10[VAR_11++] = FUNC_5(VAR_8);
    FUNC_3(VAR_8, FUNC_7(VAR_12), 0, VAR_4, VAR_7);
    FUNC_0(VAR_8, VAR_2, 0);
  }
  FUNC_2(VAR_12->tag == VAR_6);
  FUNC_6(VAR_8, VAR_14);
  FUNC_4(VAR_8, VAR_10, VAR_15, FUNC_5(VAR_8));
}
