
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ required_num_args; scalar_t__ num_args; int fn_flags; struct _zend_arg_info* arg_info; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
typedef scalar_t__ uint32_t ;
struct _zend_arg_info {int dummy; } ;
typedef int smart_str ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,struct _zend_arg_info*,scalar_t__,int,char*) ;
 int FUNC_1 (int *,char*,char*,...) ;
 int FUNC_2 (int *,char) ;

__attribute__((used)) static void FUNC_3(smart_str *VAR_1, zend_function *VAR_2, char* VAR_3)
{
 struct _zend_arg_info *VAR_4 = VAR_2->common.arg_info;
 uint32_t VAR_5, VAR_6, VAR_7 = VAR_2->common.required_num_args;

 if (!VAR_4) {
  return;
 }

 VAR_6 = VAR_2->common.num_args;
 if (VAR_2->common.fn_flags & VAR_0) {
  VAR_6++;
 }
 FUNC_2(VAR_1, '\n');
 FUNC_1(VAR_1, "%s- Parameters [%d] {\n", VAR_3, VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  FUNC_1(VAR_1, "%s  ", VAR_3);
  FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5, VAR_5 < VAR_7, VAR_3);
  FUNC_2(VAR_1, '\n');
  VAR_4++;
 }
 FUNC_1(VAR_1, "%s}\n", VAR_3);
}
