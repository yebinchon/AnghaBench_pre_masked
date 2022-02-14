
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int srcRGB; int dstRGB; int srcAlpha; int dstAlpha; } ;
typedef TYPE_1__ NVGcompositeOperationState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static NVGcompositeOperationState FUNC_0(int VAR_17)
{
 int VAR_18, VAR_19;

 if (VAR_17 == VAR_13)
 {
  VAR_18 = VAR_8;
  VAR_19 = VAR_10;
 }
 else if (VAR_17 == VAR_11)
 {
  VAR_18 = VAR_6;
  VAR_19 = VAR_16;
 }
 else if (VAR_17 == VAR_12)
 {
  VAR_18 = VAR_9;
  VAR_19 = VAR_16;
 }
 else if (VAR_17 == VAR_0)
 {
  VAR_18 = VAR_6;
  VAR_19 = VAR_10;
 }
 else if (VAR_17 == VAR_5)
 {
  VAR_18 = VAR_9;
  VAR_19 = VAR_8;
 }
 else if (VAR_17 == VAR_3)
 {
  VAR_18 = VAR_16;
  VAR_19 = VAR_14;
 }
 else if (VAR_17 == VAR_4)
 {
  VAR_18 = VAR_16;
  VAR_19 = VAR_10;
 }
 else if (VAR_17 == VAR_2)
 {
  VAR_18 = VAR_9;
  VAR_19 = VAR_14;
 }
 else if (VAR_17 == VAR_7)
 {
  VAR_18 = VAR_8;
  VAR_19 = VAR_8;
 }
 else if (VAR_17 == VAR_1)
 {
  VAR_18 = VAR_8;
  VAR_19 = VAR_16;
 }
 else if (VAR_17 == VAR_15)
 {
  VAR_18 = VAR_9;
  VAR_19 = VAR_10;
 }

 NVGcompositeOperationState VAR_20;
 VAR_20.srcRGB = VAR_18;
 VAR_20.dstRGB = VAR_19;
 VAR_20.srcAlpha = VAR_18;
 VAR_20.dstAlpha = VAR_19;
 return VAR_20;
}
