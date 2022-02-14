
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {scalar_t__ nb_fields; scalar_t__ alloc_fields; struct field* fields; } ;
struct field {int const* text; } ;
typedef int WCHAR ;


 struct field* FUNC_0 (struct field*,scalar_t__*,int) ;

__attribute__((used)) static struct field *FUNC_1( struct inf_file *VAR_0, const WCHAR *VAR_1 )
{
    struct field *VAR_2;

    if (VAR_0->nb_fields >= VAR_0->alloc_fields)
    {
        if (!(VAR_0->fields = FUNC_0( VAR_0->fields, &VAR_0->alloc_fields,
                                         sizeof(VAR_0->fields[0]) ))) return ((void*)0);
    }
    VAR_2 = &VAR_0->fields[VAR_0->nb_fields++];
    VAR_2->text = VAR_1;
    return VAR_2;
}
