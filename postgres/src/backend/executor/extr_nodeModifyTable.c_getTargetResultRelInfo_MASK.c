
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * resultRelInfo; int * rootResultRelInfo; } ;
typedef int ResultRelInfo ;
typedef TYPE_1__ ModifyTableState ;



__attribute__((used)) static ResultRelInfo *
FUNC_0(ModifyTableState *VAR_0)
{




 if (VAR_0->rootResultRelInfo != ((void*)0))
  return VAR_0->rootResultRelInfo;
 else
  return VAR_0->resultRelInfo;
}
