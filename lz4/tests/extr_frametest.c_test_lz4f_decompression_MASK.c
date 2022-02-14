
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ o_scenario_e ;
typedef int U64 ;
typedef int U32 ;
typedef int LZ4F_dctx ;


 int FUNC_0 (int * const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void* const) ;
 void* FUNC_3 (size_t const) ;
 scalar_t__ const VAR_0 ;
 size_t FUNC_4 (void const*,size_t,void* const,size_t const,scalar_t__ const,void const*,size_t,int ,int * const,int * const,int ,int ) ;

size_t FUNC_5(const void* VAR_1, size_t VAR_2,
                               const void* VAR_3, size_t VAR_4,
                               U64 VAR_5,
                               U32* const VAR_6,
                               LZ4F_dctx* const VAR_7,
                               U32 VAR_8, U32 VAR_9)
{
    o_scenario_e const VAR_10 = (o_scenario_e)(FUNC_0(VAR_6) % 3);

    size_t const VAR_11 = (VAR_10 == VAR_0) ?
                               (VAR_4 * 2) + 128 :
                               VAR_4;
    size_t VAR_12;
    void* const VAR_13 = FUNC_3(VAR_11);
    FUNC_1(VAR_13 != ((void*)0));

    VAR_12 = FUNC_4(VAR_1, VAR_2,
                                     VAR_13, VAR_11, VAR_10,
                                     VAR_3, VAR_4,
                                     VAR_5,
                                     VAR_6,
                                     VAR_7,
                                     VAR_8, VAR_9);

    FUNC_2(VAR_13);
    return VAR_12;
}
