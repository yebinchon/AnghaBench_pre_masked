
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ngx_int_t ;
struct TYPE_2__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,scalar_t__) ;
 void* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (void*,int ,int) ;

ngx_int_t
FUNC_3(void)
{
    void *VAR_6;

    if (((uintptr_t) VAR_4
          & ~((uintptr_t) VAR_2 - 1))
        == (uintptr_t) VAR_4)
    {
        return VAR_1;
    }

    VAR_6 = FUNC_1(16 * sizeof(uint32_t) + VAR_2, VAR_5->log);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_6, VAR_2);

    FUNC_2(VAR_6, VAR_3, 16 * sizeof(uint32_t));

    VAR_4 = VAR_6;

    return VAR_1;
}
