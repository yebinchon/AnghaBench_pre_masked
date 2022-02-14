
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
typedef TYPE_1__ RConfigNode ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1 (void *VAR_1, void *VAR_2) {
 RConfigNode *VAR_3 = (RConfigNode*) VAR_2;
 if (VAR_3->value) {
  FUNC_0 (VAR_0, VAR_3->value);
 }
 return 1;
}
