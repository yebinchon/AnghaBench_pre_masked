
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int zend_ulong ;
struct TYPE_14__ {scalar_t__ type; } ;
typedef TYPE_1__ zend_ssa_var_info ;
struct TYPE_15__ {int vars_count; TYPE_1__* var_info; } ;
typedef TYPE_2__ zend_ssa ;
typedef int zend_script ;
struct TYPE_16__ {int last_var; } ;
typedef TYPE_3__ zend_op_array ;
typedef int zend_long ;
typedef int zend_bitset ;
struct TYPE_13__ {int return_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_11__* FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__ const*,int const*,int,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_3__ const*,int const*,TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_3__ const*,int const*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_10(const zend_op_array *VAR_3, const zend_script *VAR_4, zend_ssa *VAR_5, zend_long VAR_6)
{
 zend_ssa_var_info *VAR_7 = VAR_5->var_info;
 int VAR_8 = VAR_5->vars_count;
 int VAR_9;
 zend_bitset VAR_10;
 FUNC_0(VAR_2);

 VAR_10 = FUNC_2(sizeof(zend_ulong) * FUNC_6(VAR_8), VAR_2);
 FUNC_4(VAR_10, 0, sizeof(zend_ulong) * FUNC_6(VAR_8));


 for (VAR_9 = VAR_3->last_var; VAR_9 < VAR_8; VAR_9++) {
  FUNC_5(VAR_10, VAR_9);
  VAR_7[VAR_9].type = 0;
 }

 if (FUNC_8(VAR_3, VAR_4, VAR_5, VAR_10, VAR_6) != VAR_1) {
  FUNC_3(VAR_10, VAR_2);
  return VAR_0;
 }


 FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6);

 if (FUNC_1(VAR_3)) {
  FUNC_7(VAR_3, VAR_4, 1, 0, &FUNC_1(VAR_3)->return_info);
 }

 FUNC_3(VAR_10, VAR_2);
 return VAR_1;
}
