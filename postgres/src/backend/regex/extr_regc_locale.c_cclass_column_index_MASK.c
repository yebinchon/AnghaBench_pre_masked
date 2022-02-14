
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colormap {int* classbits; } ;
typedef scalar_t__ chr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(struct colormap *VAR_14, chr VAR_15)
{
 int VAR_16 = 0;


 FUNC_0(VAR_15 > VAR_13);





 if (VAR_14->classbits[VAR_8] && FUNC_6(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_8];
 if (VAR_14->classbits[VAR_0] && FUNC_1(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_0];
 if (VAR_14->classbits[VAR_1] && FUNC_2(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_1];
 FUNC_0(VAR_14->classbits[VAR_2] == 0);
 FUNC_0(VAR_14->classbits[VAR_3] == 0);
 FUNC_0(VAR_14->classbits[VAR_4] == 0);
 if (VAR_14->classbits[VAR_5] && FUNC_3(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_5];
 if (VAR_14->classbits[VAR_9] && FUNC_7(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_9];
 FUNC_0(VAR_14->classbits[VAR_12] == 0);
 if (VAR_14->classbits[VAR_10] && FUNC_8(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_10];
 if (VAR_14->classbits[VAR_7] && FUNC_5(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_7];
 if (VAR_14->classbits[VAR_11] && FUNC_9(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_11];
 if (VAR_14->classbits[VAR_6] && FUNC_4(VAR_15))
  VAR_16 |= VAR_14->classbits[VAR_6];

 return VAR_16;
}
