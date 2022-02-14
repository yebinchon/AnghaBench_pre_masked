
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_fcall_info_cache ;
struct TYPE_4__ {int param_count; scalar_t__ no_separation; int * retval; int * params; } ;
typedef TYPE_1__ zend_fcall_info ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(zend_fcall_info *VAR_0, zend_fcall_info_cache *VAR_1,
    zend_string *VAR_2, long VAR_3) {

    zval VAR_4, *VAR_5 = &VAR_4;

    FUNC_3(VAR_5);

    zval VAR_6[2];

    FUNC_4(&VAR_6[0], FUNC_1(VAR_2), FUNC_0(VAR_2));
    FUNC_2(&VAR_6[1], VAR_3);

    VAR_0->params = VAR_6;
    VAR_0->retval = VAR_5;

    VAR_0->no_separation = 0;
    VAR_0->param_count = 2;


    FUNC_5(VAR_0, VAR_1);


    FUNC_6(&VAR_6[0]);
    FUNC_6(VAR_5);
}
