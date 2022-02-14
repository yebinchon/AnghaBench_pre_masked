
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_4__ {scalar_t__ (* on_modify ) (TYPE_1__*,int *,int ,int ,int ,int) ;int modifiable; int * value; int mh_arg3; int mh_arg2; int mh_arg1; } ;
typedef TYPE_1__ zend_ini_entry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,int ,int) ;
 TYPE_1__* FUNC_2 (int ,char*,int) ;
 int * FUNC_3 (char*,int,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(char *VAR_4, int VAR_5, char *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 zend_ini_entry *VAR_10;
 zend_string *VAR_11;

 if ((VAR_10 = FUNC_2(FUNC_0(VAR_3), VAR_4, VAR_5)) == ((void*)0)) {
  return VAR_0;
 }

 VAR_11 = FUNC_3(VAR_6, VAR_7, 1);

 if (!VAR_10->on_modify
   || VAR_10->on_modify(VAR_10, VAR_11,
    VAR_10->mh_arg1, VAR_10->mh_arg2, VAR_10->mh_arg3, VAR_9) == VAR_1) {
  VAR_10->value = VAR_11;

  if (VAR_8 == VAR_2) {
   VAR_10->modifiable = VAR_8;
  }
 } else {
  FUNC_4(VAR_11, 1);
 }

 return VAR_1;
}
