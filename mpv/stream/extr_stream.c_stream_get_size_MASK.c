
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* get_size ) (TYPE_1__*) ;} ;
typedef TYPE_1__ stream_t ;
typedef int int64_t ;


 int FUNC_0 (TYPE_1__*) ;

int64_t FUNC_1(stream_t *VAR_0)
{
    return VAR_0->get_size ? VAR_0->get_size(VAR_0) : -1;
}
