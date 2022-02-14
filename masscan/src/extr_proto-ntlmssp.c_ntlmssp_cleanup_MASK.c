
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NtlmsspDecode {scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct NtlmsspDecode *VAR_0)
{
    if (VAR_0->buf) {
        FUNC_0(VAR_0->buf);
        VAR_0->buf = 0;
    }
}
