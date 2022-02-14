
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ buf; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (scalar_t__,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_2(strbuf_t *VAR_0, const char *VAR_1, int VAR_2)
{
    FUNC_1(VAR_0, VAR_2);
    FUNC_0(VAR_0->buf + VAR_0->length, VAR_1, VAR_2);
    VAR_0->length += VAR_2;
}
