
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ fz_colorspace ;
typedef int fz_color_convert_fn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_0 (int *,int ,char*) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;

fz_color_convert_fn *
FUNC_1(fz_context *VAR_23, fz_colorspace *VAR_24, fz_colorspace *VAR_25)
{
 int VAR_26 = VAR_24->type;
 int VAR_27 = VAR_25->type;

 if (VAR_26 == VAR_2)
 {
  if (VAR_27 == VAR_2) return VAR_13;
  if (VAR_27 == VAR_4) return VAR_14;
  if (VAR_27 == VAR_0) return VAR_14;
  if (VAR_27 == VAR_1) return VAR_12;
 }

 else if (VAR_26 == VAR_4)
 {
  if (VAR_27 == VAR_2) return VAR_21;
  if (VAR_27 == VAR_4) return VAR_22;
  if (VAR_27 == VAR_0) return VAR_19;
  if (VAR_27 == VAR_1) return VAR_20;
 }

 else if (VAR_26 == VAR_0)
 {
  if (VAR_27 == VAR_2) return VAR_7;
  if (VAR_27 == VAR_4) return VAR_19;
  if (VAR_27 == VAR_0) return VAR_22;
  if (VAR_27 == VAR_1) return VAR_6;
 }

 else if (VAR_26 == VAR_1)
 {
  if (VAR_27 == VAR_2) return VAR_10;
  if (VAR_27 == VAR_4) return VAR_11;
  if (VAR_27 == VAR_0) return VAR_8;
  if (VAR_27 == VAR_1) return VAR_9;
 }

 else if (VAR_26 == VAR_3)
 {
  if (VAR_27 == VAR_2) return VAR_17;
  if (VAR_27 == VAR_4) return VAR_18;
  if (VAR_27 == VAR_0) return VAR_15;
  if (VAR_27 == VAR_1) return VAR_16;
 }

 FUNC_0(VAR_23, VAR_5, "cannot find color converter");
}
