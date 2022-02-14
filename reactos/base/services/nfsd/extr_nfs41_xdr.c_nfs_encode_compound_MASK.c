
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {int (* encode ) (int *,TYPE_3__*) ;} ;
typedef TYPE_1__ op_table_entry ;
struct TYPE_6__ {unsigned char* tag; size_t minorversion; size_t argarray_count; TYPE_3__* argarray; int tag_len; } ;
typedef TYPE_2__ nfs41_compound_args ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_7__ {size_t op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,char**,int *,int ) ;
 int FUNC_3 (int *,size_t*) ;

bool_t FUNC_4(
    XDR *VAR_3,
    caddr_t *VAR_4)
{
    unsigned char *VAR_5;

    nfs41_compound_args *VAR_6 = (nfs41_compound_args*)VAR_4;
    uint32_t VAR_7;
    const op_table_entry *VAR_8;

    VAR_5 = VAR_6->tag;
    if (!FUNC_2(VAR_3, (char **)&VAR_5, &VAR_6->tag_len, VAR_1))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_6->minorversion))
        return VAR_0;

    if (!FUNC_3(VAR_3, &VAR_6->argarray_count))
        return VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_6->argarray_count; VAR_7++)
    {
        VAR_8 = FUNC_0(VAR_6->argarray[VAR_7].op);
        if (VAR_8 == ((void*)0) || VAR_8->encode == ((void*)0))
            return VAR_0;

        if (!FUNC_3(VAR_3, &VAR_6->argarray[VAR_7].op))
            return VAR_0;
        if (!VAR_8->encode(VAR_3, &VAR_6->argarray[VAR_7]))
            return VAR_0;
    }
    return VAR_2;
}
