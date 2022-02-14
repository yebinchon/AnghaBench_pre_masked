
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgnoLast; int pgnoFirst; } ;
typedef TYPE_1__ Fts5StructureSegment ;



__attribute__((used)) static int FUNC_0(Fts5StructureSegment *VAR_0){
  return 1 + VAR_0->pgnoLast - VAR_0->pgnoFirst;
}
