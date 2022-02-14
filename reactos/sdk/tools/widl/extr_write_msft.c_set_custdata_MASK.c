
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ** typelib_segment_data; } ;
typedef TYPE_1__ msft_typelib_t ;
struct TYPE_10__ {int hreftype; int next_hash; int guid; } ;
typedef int * REFGUID ;
typedef TYPE_2__ MSFT_GuidEntry ;
typedef int HRESULT ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,size_t,int,int ) ;
 int FUNC_2 (TYPE_1__*,int*,int,int) ;
 int FUNC_3 (TYPE_1__*,int*,void const*) ;

__attribute__((used)) static HRESULT FUNC_4(msft_typelib_t *VAR_3, REFGUID VAR_4,
                            int VAR_5, const void *VAR_6, int *VAR_7)
{
    MSFT_GuidEntry VAR_8;
    int VAR_9;
    int VAR_10;
    int *VAR_11;
    int VAR_12;

    VAR_8.guid = *VAR_4;

    VAR_8.hreftype = -1;
    VAR_8.next_hash = -1;

    VAR_9 = FUNC_0(VAR_3, &VAR_8);
    if(VAR_5 == VAR_2)
        FUNC_3(VAR_3, &VAR_12, VAR_6);
    else
        FUNC_2(VAR_3, &VAR_12, VAR_5, *(int*)VAR_6);

    VAR_10 = FUNC_1(VAR_3, VAR_0, 12, 0);

    VAR_11 = (int *)&VAR_3->typelib_segment_data[VAR_0][VAR_10];
    VAR_11[0] = VAR_9;
    VAR_11[1] = VAR_12;
    VAR_11[2] = *VAR_7;
    *VAR_7 = VAR_10;

    return VAR_1;
}
