
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ k; int f; } ;
typedef TYPE_1__ expdesc ;
struct TYPE_8__ {int fs; } ;
typedef TYPE_2__ LexState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2 (LexState *VAR_2) {

  expdesc VAR_3;
  FUNC_0(VAR_2, &VAR_3);
  if (VAR_3.k == VAR_1) VAR_3.k = VAR_0;
  FUNC_1(VAR_2->fs, &VAR_3);
  return VAR_3.f;
}
