
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ op_type; } ;
typedef TYPE_1__ znode ;
struct TYPE_23__ {scalar_t__ opcode; int extended_value; } ;
typedef TYPE_2__ zend_op ;
struct TYPE_24__ {scalar_t__ attr; struct TYPE_24__** child; } ;
typedef TYPE_3__ zend_ast ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,TYPE_3__*,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static zend_op *FUNC_8(znode *VAR_13, zend_ast *VAR_14, uint32_t VAR_15)
{
 if (VAR_14->attr == VAR_8) {
  FUNC_4(VAR_5, "Array and string offset access syntax with curly braces is deprecated");
 }

 zend_ast *VAR_16 = VAR_14->child[0];
 zend_ast *VAR_17 = VAR_14->child[1];
 zend_op *VAR_18;

 znode VAR_19, VAR_20;

 VAR_18 = FUNC_2(&VAR_19, VAR_16, VAR_15, 0);
 if (VAR_18 && VAR_15 == VAR_3 && (VAR_18->opcode == VAR_12 || VAR_18->opcode == VAR_11)) {
  VAR_18->extended_value |= VAR_10;
 }

 FUNC_7(&VAR_19, VAR_16, VAR_15);

 if (VAR_17 == ((void*)0)) {
  if (VAR_15 == VAR_1 || VAR_15 == VAR_0) {
   FUNC_5(VAR_4, "Cannot use [] for reading");
  }
  if (VAR_15 == VAR_2) {
   FUNC_5(VAR_4, "Cannot use [] for unsetting");
  }
  VAR_20.op_type = VAR_7;
 } else {
  FUNC_1(&VAR_20, VAR_17);
 }

 VAR_18 = FUNC_3(VAR_13, VAR_9, &VAR_19, &VAR_20);
 FUNC_0(VAR_18, VAR_13, VAR_15);

 if (VAR_20.op_type == VAR_6) {
  FUNC_6(VAR_18, &VAR_20);
 }
 return VAR_18;
}
