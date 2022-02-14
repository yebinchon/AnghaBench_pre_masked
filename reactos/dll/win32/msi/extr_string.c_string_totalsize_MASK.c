
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t maxcount; int codepage; TYPE_1__* strings; } ;
typedef TYPE_2__ string_table ;
typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ len; scalar_t__ data; scalar_t__ persistent_refcount; scalar_t__ nonpersistent_refcount; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,size_t,...) ;
 size_t FUNC_2 (int ,int ,scalar_t__,scalar_t__,int *,int ,int *,int *) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4( const string_table *VAR_0, UINT *VAR_1, UINT *VAR_2 )
{
    UINT VAR_3, VAR_4, VAR_5;

    if( VAR_0->strings[0].data || VAR_0->strings[0].persistent_refcount || VAR_0->strings[0].nonpersistent_refcount)
        FUNC_0("oops. element 0 has a string\n");

    *VAR_2 = 4;
    *VAR_1 = 0;
    VAR_5 = 0;
    for( VAR_3=1; VAR_3<VAR_0->maxcount; VAR_3++ )
    {
        if( !VAR_0->strings[VAR_3].persistent_refcount )
        {
            FUNC_1("[%u] nonpersistent = %s\n", VAR_3, FUNC_3(VAR_0->strings[VAR_3].data, VAR_0->strings[VAR_3].len));
            (*VAR_2) += 4;
        }
        else if( VAR_0->strings[VAR_3].data )
        {
            FUNC_1("[%u] = %s\n", VAR_3, FUNC_3(VAR_0->strings[VAR_3].data, VAR_0->strings[VAR_3].len));
            VAR_4 = FUNC_2( VAR_0->codepage, 0, VAR_0->strings[VAR_3].data, VAR_0->strings[VAR_3].len + 1,
                                       ((void*)0), 0, ((void*)0), ((void*)0));
            if( VAR_4 )
                VAR_4--;
            (*VAR_1) += VAR_4;
            if (VAR_4>0xffff)
                (*VAR_2) += 4;
            (*VAR_2) += VAR_5 + 4;
            VAR_5 = 0;
        }
        else
            VAR_5 += 4;
    }
    FUNC_1("data %u pool %u codepage %x\n", *VAR_1, *VAR_2, VAR_0->codepage );
}
