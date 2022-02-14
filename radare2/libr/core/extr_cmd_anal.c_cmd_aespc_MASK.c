
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_16__ {int * esil; } ;
struct TYPE_15__ {int reg; } ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_13__ {int const blocksize; int offset; TYPE_4__* dbg; TYPE_1__* search; TYPE_8__* anal; int io; int config; } ;
struct TYPE_12__ {int align; } ;
typedef int RRegItem ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RAnalOp ;
typedef int RAnalEsil ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int const) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (TYPE_8__*,int ) ;
 int * FUNC_5 (int,int,unsigned int) ;
 int FUNC_6 (TYPE_8__*,TYPE_3__*,int,int *,int,int) ;
 int FUNC_7 (TYPE_3__*) ;
 void* FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (TYPE_2__*,int,int *,int *,int) ;
 int FUNC_11 (TYPE_2__*,int,int) ;
 int FUNC_12 (TYPE_4__*,char const*) ;
 int FUNC_13 (int ,int,int *,int) ;
 int * FUNC_14 (int ,char const*,int) ;
 char* FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int *,int) ;

__attribute__((used)) static void FUNC_17(RCore *VAR_4, ut64 VAR_5, int VAR_6) {
 RAnalEsil *VAR_7 = VAR_4->anal->esil;
 int VAR_8, VAR_9 = 0;
 int VAR_10 = 0;
 ut8 *VAR_11;
 RAnalOp VAR_12 = {0};
 int VAR_13 , VAR_14 = FUNC_0 (64, VAR_4->blocksize);
 const int VAR_15 = FUNC_4 (VAR_4->anal, VAR_0);
 const int VAR_16 = FUNC_0 (1, VAR_15);
 const char *VAR_17 = FUNC_15 (VAR_4->dbg->reg, VAR_3);
 RRegItem *VAR_18 = FUNC_14 (VAR_4->dbg->reg, VAR_17, -1);
 int VAR_19 = FUNC_8 (VAR_4->config, "esil.stack.depth");
 int VAR_20 = FUNC_8 (VAR_4->config, "esil.iotrap");
 unsigned int VAR_21 = FUNC_8 (VAR_4->config, "esil.addr.size");

 if (!VAR_7) {
  if (!(VAR_7 = FUNC_5 (VAR_19, VAR_20, VAR_21))) {
   return;
  }
 }
 VAR_11 = FUNC_3 (VAR_14);
 if (!VAR_11) {
  FUNC_1 ("Cannot allocate %d byte(s)\n", VAR_14);
  FUNC_2 (VAR_11);
  return;
 }
 if (VAR_5 == -1) {
  VAR_5 = FUNC_12 (VAR_4->dbg, VAR_17);
 }
 ut64 VAR_22 = VAR_5;
 ut64 VAR_23 = VAR_4->offset;
 for (VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_6 ; VAR_8++, VAR_9++) {
  if (FUNC_9 ()) {
   break;
  }
  if (VAR_8 >= (VAR_14 - 32)) {
   VAR_8 = 0;
  }
  if (!VAR_8) {
   FUNC_13 (VAR_4->io, VAR_5, VAR_11, VAR_14);
  }
  VAR_13 = FUNC_6 (VAR_4->anal, &VAR_12, VAR_5, VAR_11 + VAR_8, VAR_14 - VAR_8, VAR_1 | VAR_2);
  VAR_10 += VAR_13;
  int VAR_24 = (VAR_4->search->align > 0)? VAR_4->search->align - 1: VAR_13 - 1;
  if (VAR_24 < 0) {
   VAR_24 = VAR_16;
  }
  VAR_8 += VAR_24;
  VAR_5 += VAR_24;
  FUNC_7 (&VAR_12);
 }
 FUNC_16 (VAR_4->dbg->reg, VAR_18, VAR_22);
 FUNC_10 (VAR_4, VAR_22 + VAR_10, ((void*)0), ((void*)0), 0);
 FUNC_11 (VAR_4, VAR_23, 1);
}
