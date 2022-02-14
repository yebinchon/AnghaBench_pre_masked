
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* XMLRPC_VALUE ;
struct TYPE_4__ {scalar_t__ str; scalar_t__ len; } ;
struct TYPE_5__ {TYPE_1__ id; } ;



const char* FUNC_0(XMLRPC_VALUE VAR_0) {
    return (const char*)((VAR_0 && VAR_0->id.len) ? VAR_0->id.str : 0);
}
