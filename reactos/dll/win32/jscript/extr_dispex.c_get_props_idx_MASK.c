
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; } ;
typedef TYPE_1__ jsdisp_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(jsdisp_t *VAR_1, unsigned VAR_2)
{
    return (VAR_2*VAR_0) & (VAR_1->buf_size-1);
}
