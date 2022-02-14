
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NtlmsspDecode {unsigned int length; int * buf; scalar_t__ offset; } ;


 int FUNC_0 (struct NtlmsspDecode*,int ,int) ;

void
FUNC_1(struct NtlmsspDecode *VAR_0, size_t VAR_1)
{
    FUNC_0(VAR_0, 0, sizeof(*VAR_0));






    if (VAR_1 > 65536)
        VAR_1 = 65536;

    VAR_0->length = (unsigned)VAR_1;
    VAR_0->offset = 0;
    VAR_0->buf = ((void*)0);

}
