
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szPg; int pgno; } ;
typedef TYPE_1__ GState ;



__attribute__((used)) static int FUNC_0(GState *VAR_0, int VAR_1){
  return VAR_0->szPg*(VAR_0->pgno-1) + VAR_1;
}
