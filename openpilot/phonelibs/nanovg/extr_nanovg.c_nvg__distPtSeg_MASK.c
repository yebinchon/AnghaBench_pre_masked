
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0, float VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
 float VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 VAR_6 = VAR_4-VAR_2;
 VAR_7 = VAR_5-VAR_3;
 VAR_8 = VAR_0-VAR_2;
 VAR_9 = VAR_1-VAR_3;
 VAR_10 = VAR_6*VAR_6 + VAR_7*VAR_7;
 VAR_11 = VAR_6*VAR_8 + VAR_7*VAR_9;
 if (VAR_10 > 0) VAR_11 /= VAR_10;
 if (VAR_11 < 0) VAR_11 = 0;
 else if (VAR_11 > 1) VAR_11 = 1;
 VAR_8 = VAR_2 + VAR_11*VAR_6 - VAR_0;
 VAR_9 = VAR_3 + VAR_11*VAR_7 - VAR_1;
 return VAR_8*VAR_8 + VAR_9*VAR_9;
}
