
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2(BYTE VAR_19, BYTE VAR_20, unsigned int *VAR_21)
{
    if ((VAR_19 == VAR_7 || VAR_19 == VAR_8) && !VAR_20)
        *VAR_21 = VAR_15;
    else if (VAR_19 == VAR_4 && !VAR_20)
        *VAR_21 = VAR_12;
    else if (VAR_19 == VAR_3 && !VAR_20)
        *VAR_21 = VAR_11;
    else if (VAR_19 == VAR_6 && !VAR_20)
        *VAR_21 = VAR_14;
    else if (VAR_19 == VAR_9 && !VAR_20)
        *VAR_21 = VAR_16;
    else if (VAR_19 == VAR_5 && !VAR_20)
        *VAR_21 = VAR_13;
    else if (VAR_19 == VAR_5 && VAR_20 == 1)
        *VAR_21 = VAR_17;
    else if (VAR_19 == VAR_10 && VAR_20 < VAR_2)
        *VAR_21 = VAR_18 + VAR_20;
    else
    {
        FUNC_0("Unsupported input stream [usage=%s, usage_idx=%u].\n", FUNC_1(VAR_19), VAR_20);
        *VAR_21 = ~0u;
        return VAR_0;
    }

    return VAR_1;
}
