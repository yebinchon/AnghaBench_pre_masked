
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int LineLength; struct TYPE_4__* ContribRow; struct TYPE_4__* Weights; } ;
typedef TYPE_1__ LineContribType ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(LineContribType * VAR_0)
{
 unsigned int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->LineLength; VAR_1++) {
  FUNC_0(VAR_0->ContribRow[VAR_1].Weights);
 }
 FUNC_0(VAR_0->ContribRow);
 FUNC_0(VAR_0);
}
