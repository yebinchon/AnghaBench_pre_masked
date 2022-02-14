
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; int cap; } ;
typedef TYPE_1__ TTree ;
typedef int CompileState ;
typedef int Charset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int) ;
 int FUNC_1 (int *,int ,int ,int,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5 (CompileState *VAR_5, TTree *VAR_6, int VAR_7,
                         const Charset *VAR_8) {
  int VAR_9 = FUNC_2(FUNC_4(VAR_6));
  if (VAR_9 >= 0 && VAR_9 <= VAR_4 && !FUNC_3(FUNC_4(VAR_6))) {
    FUNC_1(VAR_5, FUNC_4(VAR_6), 0, VAR_7, VAR_8);
    FUNC_0(VAR_5, VAR_2, VAR_6->cap, VAR_6->key, VAR_9);
  }
  else {
    FUNC_0(VAR_5, VAR_3, VAR_6->cap, VAR_6->key, 0);
    FUNC_1(VAR_5, FUNC_4(VAR_6), 0, VAR_7, VAR_8);
    FUNC_0(VAR_5, VAR_1, VAR_0, 0, 0);
  }
}
