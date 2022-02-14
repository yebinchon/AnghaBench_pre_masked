
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* value; } ;
struct TYPE_4__ {int type; } ;
typedef TYPE_2__ RedisModuleKey ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_0(RedisModuleKey *VAR_7) {
    if (VAR_7 == ((void*)0) || VAR_7->value == ((void*)0)) return VAR_0;


    switch(VAR_7->value->type) {
    case 129: return VAR_5;
    case 132: return VAR_2;
    case 130: return VAR_4;
    case 128: return VAR_6;
    case 133: return VAR_1;
    case 131: return VAR_3;
    default: return 0;
    }
}
