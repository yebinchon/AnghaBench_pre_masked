
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codeview_type_parse {size_t num; void const* table; int* offset; } ;
typedef size_t DWORD ;


 size_t VAR_0 ;

__attribute__((used)) static inline const void* FUNC_0(const struct codeview_type_parse* VAR_1, DWORD VAR_2)
{
    if (VAR_2 < VAR_0) return ((void*)0);
    VAR_2 -= VAR_0;
    return (VAR_2 >= VAR_1->num) ? ((void*)0) : (VAR_1->table + VAR_1->offset[VAR_2]);
}
