
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * aPoint; scalar_t__ nPoint; int sPoint; scalar_t__ bPoint; } ;
typedef int RtreeSearchPoint ;
typedef TYPE_1__ RtreeCursor ;



__attribute__((used)) static RtreeSearchPoint *FUNC_0(RtreeCursor *VAR_0){
  return VAR_0->bPoint ? &VAR_0->sPoint : VAR_0->nPoint ? VAR_0->aPoint : 0;
}
