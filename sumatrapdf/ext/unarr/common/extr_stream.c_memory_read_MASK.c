
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryStream {size_t length; size_t offset; size_t data; } ;


 int FUNC_0 (void*,size_t,size_t) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2)
{
    struct MemoryStream *VAR_3 = VAR_0;
    if (VAR_2 > VAR_3->length - VAR_3->offset)
        VAR_2 = VAR_3->length - VAR_3->offset;
    FUNC_0(VAR_1, VAR_3->data + VAR_3->offset, VAR_2);
    VAR_3->offset += VAR_2;
    return VAR_2;
}
