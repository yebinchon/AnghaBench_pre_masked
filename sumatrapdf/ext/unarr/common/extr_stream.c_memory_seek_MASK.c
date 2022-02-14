
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MemoryStream {size_t offset; size_t length; } ;
typedef scalar_t__ off64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(void *VAR_2, off64_t VAR_3, int VAR_4)
{
    struct MemoryStream *VAR_5 = VAR_2;
    if (VAR_4 == VAR_0)
        VAR_3 += VAR_5->offset;
    else if (VAR_4 == VAR_1)
        VAR_3 += VAR_5->length;
    if (VAR_3 < 0 || VAR_3 > (off64_t)VAR_5->length || (size_t)VAR_3 > VAR_5->length)
        return 0;
    VAR_5->offset = (size_t)VAR_3;
    return 1;
}
