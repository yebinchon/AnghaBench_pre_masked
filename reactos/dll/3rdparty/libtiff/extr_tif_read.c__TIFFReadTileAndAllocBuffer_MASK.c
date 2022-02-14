
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int uint16 ;
typedef int tmsize_t ;
typedef int TIFF ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,void**,int ,int ) ;

tmsize_t
FUNC_4(TIFF* VAR_0,
                            void **VAR_1, tmsize_t VAR_2,
                            uint32 VAR_3, uint32 VAR_4, uint32 VAR_5, uint16 VAR_6)
{
    if (!FUNC_0(VAR_0, 1) || !FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6))
            return ((tmsize_t)(-1));
    return (FUNC_3(VAR_0,
                                               FUNC_2(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6),
                                               VAR_1, VAR_2,
                                               (tmsize_t)(-1)));
}
