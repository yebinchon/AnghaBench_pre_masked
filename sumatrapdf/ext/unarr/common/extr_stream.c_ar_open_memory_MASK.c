
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryStream {size_t length; scalar_t__ offset; void const* data; } ;
typedef int ar_stream ;


 int * FUNC_0 (struct MemoryStream*,int ,int ,int ,int ) ;
 struct MemoryStream* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

ar_stream *FUNC_2(const void *VAR_4, size_t VAR_5)
{
    struct MemoryStream *VAR_6 = FUNC_1(sizeof(struct MemoryStream));
    if (!VAR_6)
        return ((void*)0);
    VAR_6->data = VAR_4;
    VAR_6->length = VAR_5;
    VAR_6->offset = 0;
    return FUNC_0(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3);
}
