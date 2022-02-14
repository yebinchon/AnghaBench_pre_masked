
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ code; } ;
struct TYPE_6__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1 (Instruction *VAR_1, int VAR_2) {
  while (VAR_1[VAR_2].i.code == VAR_0)
    VAR_2 = FUNC_0(VAR_1, VAR_2);
  return VAR_2;
}
