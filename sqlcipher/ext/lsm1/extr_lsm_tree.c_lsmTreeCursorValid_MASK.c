
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iNode; scalar_t__ pSave; } ;
typedef TYPE_1__ TreeCursor ;



int FUNC_0(TreeCursor *VAR_0){
  return (VAR_0 && (VAR_0->pSave || VAR_0->iNode>=0));
}
