
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* XMLRPC_VALUE ;
struct TYPE_3__ {scalar_t__ type; double d; } ;


 scalar_t__ VAR_0 ;

double FUNC_0(XMLRPC_VALUE VAR_1) {
    return ((VAR_1 && VAR_1->type == VAR_0) ? VAR_1->d : 0);
}
