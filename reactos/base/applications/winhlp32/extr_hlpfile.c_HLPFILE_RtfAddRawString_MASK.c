
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RtfData {scalar_t__ ptr; scalar_t__ data; int allocated; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,char const*,size_t) ;

__attribute__((used)) static BOOL FUNC_3(struct RtfData* VAR_2, const char* VAR_3, size_t VAR_4)
{
    if (VAR_2->ptr + VAR_4 >= VAR_2->data + VAR_2->allocated)
    {
        char* VAR_5 = FUNC_1(FUNC_0(), 0, VAR_2->data, VAR_2->allocated *= 2);
        if (!VAR_5) return VAR_0;
        VAR_2->ptr = VAR_5 + (VAR_2->ptr - VAR_2->data);
        VAR_2->data = VAR_5;
    }
    FUNC_2(VAR_2->ptr, VAR_3, VAR_4);
    VAR_2->ptr += VAR_4;

    return VAR_1;
}
