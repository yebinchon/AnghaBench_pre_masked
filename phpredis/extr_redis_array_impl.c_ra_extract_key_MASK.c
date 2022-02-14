
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_4__ {int z_fun; } ;
typedef TYPE_1__ RedisArray ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*,char const*,int) ;
 char* FUNC_2 (char const*,char) ;
 int * FUNC_3 (char const*,int,int ) ;

__attribute__((used)) static zend_string *
FUNC_4(RedisArray *VAR_1, const char *VAR_2, int VAR_3)
{
    char *VAR_4, *VAR_5;

    if (FUNC_0(VAR_1->z_fun) != VAR_0) {
        return FUNC_1(VAR_1, VAR_2, VAR_3);
    } else if ((VAR_4 = FUNC_2(VAR_2, '{')) == ((void*)0) || (VAR_5 = FUNC_2(VAR_4 + 1, '}')) == ((void*)0)) {
        return FUNC_3(VAR_2, VAR_3, 0);
    }

    return FUNC_3(VAR_4 + 1, VAR_5 - VAR_4 - 1, 0);
}
