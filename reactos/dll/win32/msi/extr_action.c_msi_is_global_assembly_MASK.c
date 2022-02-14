
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* assembly; } ;
struct TYPE_4__ {int application; } ;
typedef TYPE_2__ MSICOMPONENT ;
typedef int BOOL ;



BOOL FUNC_0( MSICOMPONENT *VAR_0 )
{
    return VAR_0->assembly && !VAR_0->assembly->application;
}
