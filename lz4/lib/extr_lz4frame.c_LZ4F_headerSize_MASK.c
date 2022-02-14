
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (void const*) ;
 int const VAR_6 ;
 size_t FUNC_1 (int ) ;
 size_t VAR_7 ;

size_t FUNC_2(const void* VAR_8, size_t VAR_9)
{
    if (VAR_8 == ((void*)0)) return FUNC_1(VAR_2);


    if (VAR_9 < VAR_5)
        return FUNC_1(VAR_0);


    if ((FUNC_0(VAR_8) & 0xFFFFFFF0U) == VAR_4)
        return 8;



    if (FUNC_0(VAR_8) != VAR_3)
        return FUNC_1(VAR_1);



    { BYTE const VAR_10 = ((const BYTE*)VAR_8)[4];
        U32 const VAR_11 = (VAR_10>>3) & VAR_6;
        U32 const VAR_12 = VAR_10 & VAR_6;
        return VAR_7 + (VAR_11?8:0) + (VAR_12?4:0);
    }
}
