
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chunk_entry {scalar_t__ size; } ;
typedef scalar_t__ WCHAR ;
typedef scalar_t__ ULONG ;
typedef int IStream ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__*,size_t,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (scalar_t__,scalar_t__) ;

HRESULT FUNC_3(IStream *VAR_2, const struct chunk_entry *VAR_3, WCHAR *VAR_4,
        ULONG VAR_5)
{
    ULONG VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_2, VAR_4, FUNC_2(VAR_3->size, VAR_5), &VAR_6);
    if (FUNC_0(VAR_7))
        return VAR_7;


    VAR_4[FUNC_2(VAR_6, VAR_5 - 1)] = 0;

    if (VAR_6 < VAR_3->size)
        return VAR_0;
    return VAR_1;
}
