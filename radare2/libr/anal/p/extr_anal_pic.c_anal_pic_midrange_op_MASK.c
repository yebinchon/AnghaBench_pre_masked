
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
struct TYPE_6__ {scalar_t__ opcode; int (* handler ) (int *,TYPE_1__*,int ,int *) ;int args; } ;
struct TYPE_5__ {int size; int cycles; int type; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;
typedef scalar_t__ PicMidrangeOpcode ;
typedef int PicMidrangeOpArgsVal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_5 (RAnal *VAR_4, RAnalOp *VAR_5, ut64 VAR_6,
     const ut8 *VAR_7, int VAR_8) {

 ut16 VAR_9;
 int VAR_10;

 FUNC_1 (VAR_4, 0);

 if (!VAR_7 || VAR_8 < 2) {
  VAR_5->type = VAR_1;
  return VAR_5->size;
 }

 VAR_9 = FUNC_3 (VAR_7);


 VAR_5->size = 2;
 VAR_5->cycles = 1;
 VAR_5->type = VAR_2;

 PicMidrangeOpcode VAR_11 = FUNC_2 (VAR_9);
 PicMidrangeOpArgsVal VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (VAR_3[VAR_10].opcode == VAR_11) {
   FUNC_0 (
    VAR_9, VAR_3[VAR_10].args,
    &VAR_12);
   VAR_3[VAR_10].handler (VAR_4, VAR_5, VAR_6,
             &VAR_12);
   break;
  }
 }

 return VAR_5->size;
}
