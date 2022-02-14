
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef int HUF_DTable ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int *,void*,size_t,void const*,size_t) ;
 size_t FUNC_2 (int *,void*,size_t,void const*,size_t) ;
 scalar_t__ FUNC_3 (size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (void*,void const*,size_t) ;
 int FUNC_5 (void*,int const,size_t) ;

size_t FUNC_6 (HUF_DTable* VAR_2, void* VAR_3, size_t VAR_4, const void* VAR_5, size_t VAR_6)
{

    if (VAR_4 == 0) return FUNC_0(VAR_1);
    if (VAR_6 > VAR_4) return FUNC_0(VAR_0);
    if (VAR_6 == VAR_4) { FUNC_4(VAR_3, VAR_5, VAR_4); return VAR_4; }
    if (VAR_6 == 1) { FUNC_5(VAR_3, *(const BYTE*)VAR_5, VAR_4); return VAR_4; }

    { U32 const VAR_7 = FUNC_3(VAR_4, VAR_6);
        return VAR_7 ? FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6) :
                        FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6) ;
    }
}
