
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* byte ;
struct TYPE_9__ {void* n; } ;
struct TYPE_12__ {int tag; TYPE_1__ u; } ;
struct TYPE_10__ {int ps; void* n; } ;
struct TYPE_11__ {int tag; TYPE_2__ u; } ;
typedef TYPE_3__ TTree ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2 (TTree *VAR_1, int VAR_2, int VAR_3, const char *VAR_4) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3 - 1; VAR_5++) {
    VAR_1->tag = VAR_0; VAR_1->u.ps = 2;
    FUNC_0(VAR_1)->tag = VAR_2;
    FUNC_0(VAR_1)->u.n = VAR_4 ? (byte)VAR_4[VAR_5] : 0;
    VAR_1 = FUNC_1(VAR_1);
  }
  VAR_1->tag = VAR_2;
  VAR_1->u.n = VAR_4 ? (byte)VAR_4[VAR_5] : 0;
}
