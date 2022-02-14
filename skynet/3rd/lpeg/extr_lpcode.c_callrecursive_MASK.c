
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int key; scalar_t__ tag; } ;
typedef TYPE_1__ TTree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2 (TTree *VAR_2, int VAR_3 (TTree *VAR_4), int VAR_5) {
  int VAR_6 = VAR_2->key;
  FUNC_0(VAR_2->tag == VAR_0);
  FUNC_0(FUNC_1(VAR_2)->tag == VAR_1);
  if (VAR_6 == 0)
    return VAR_5;
  else {
    int VAR_7;
    VAR_2->key = 0;
    VAR_7 = VAR_3(FUNC_1(VAR_2));
    VAR_2->key = VAR_6;
    return VAR_7;
  }
}
