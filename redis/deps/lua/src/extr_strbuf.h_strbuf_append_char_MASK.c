
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; int length; } ;
typedef TYPE_1__ strbuf_t ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_1(strbuf_t *VAR_0, const char VAR_1)
{
    FUNC_0(VAR_0, 1);
    VAR_0->buf[VAR_0->length++] = VAR_1;
}
