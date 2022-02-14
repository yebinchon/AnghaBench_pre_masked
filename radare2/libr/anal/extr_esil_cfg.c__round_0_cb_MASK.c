
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
typedef scalar_t__ ut16 ;
struct TYPE_12__ {int esil; TYPE_1__* cur; } ;
struct TYPE_9__ {scalar_t__ idx; } ;
struct TYPE_11__ {TYPE_2__ last; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_3__ RAnalEsilOp ;
typedef TYPE_4__ RAnalEsilBB ;
typedef TYPE_5__ EsilCfgGen ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*,scalar_t__) ;
 TYPE_3__* FUNC_1 (int ,char*) ;

bool FUNC_2 (void *VAR_1, void *VAR_2, ut32 VAR_3) {
 EsilCfgGen *VAR_4 = (EsilCfgGen *)VAR_1;
 char *VAR_5 = (char *)VAR_2;
 RAnalEsilBB *VAR_6 = (RAnalEsilBB *)VAR_4->cur->data;
 RAnalEsilOp *VAR_7 = FUNC_1 (VAR_4->esil, VAR_5);
 VAR_6->last.idx = (ut16)VAR_3;
 if (VAR_7 && VAR_7->type == VAR_0) {
  FUNC_0 (VAR_4, VAR_5, VAR_3);
 }
 return 1;
}
