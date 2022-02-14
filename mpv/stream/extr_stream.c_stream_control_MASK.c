
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* control ) (TYPE_1__*,int,void*) ;} ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,void*) ;

int FUNC_1(stream_t *VAR_1, int VAR_2, void *VAR_3)
{
    return VAR_1->control ? VAR_1->control(VAR_1, VAR_2, VAR_3) : VAR_0;
}
