
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ length; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(strbuf_t *VAR_0, int VAR_1)
{
    if (VAR_1 > FUNC_0(VAR_0))
        FUNC_1(VAR_0, VAR_0->length + VAR_1);
}
