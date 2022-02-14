
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tag; } ;
struct TYPE_6__ {int cap; int tag; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static TTree *FUNC_1 (TTree *VAR_2, int VAR_3) {
  VAR_2->tag = VAR_0;
  VAR_2->cap = VAR_3;
  FUNC_0(VAR_2)->tag = VAR_1;
  return VAR_2;
}
