
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HUF_DTable ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (void*,size_t,int const*,size_t,int *,int ) ;
 scalar_t__ FUNC_2 (size_t const) ;
 size_t FUNC_3 (int *,void const*,size_t,void*,size_t) ;
 int VAR_0 ;

size_t FUNC_4(HUF_DTable* VAR_1, void* VAR_2, size_t VAR_3,
                                   const void* VAR_4, size_t VAR_5,
                                   void* VAR_6, size_t VAR_7)
{
    const BYTE* VAR_8 = (const BYTE*) VAR_4;

    size_t const VAR_9 = FUNC_3(VAR_1, VAR_4, VAR_5,
                                               VAR_6, VAR_7);
    if (FUNC_2(VAR_9)) return VAR_9;
    if (VAR_9 >= VAR_5) return FUNC_0(VAR_0);
    VAR_8 += VAR_9; VAR_5 -= VAR_9;

    return FUNC_1(VAR_2, VAR_3, VAR_8, VAR_5, VAR_1, 0);
}
