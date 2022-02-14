
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_13__ {int * globals; } ;
struct TYPE_12__ {int predictor; int columns; int colors; int bpc; int early_change; } ;
struct TYPE_11__ {int predictor; int columns; int colors; int bpc; } ;
struct TYPE_10__ {int color_transform; } ;
struct TYPE_9__ {int k; int end_of_line; int encoded_byte_align; int columns; int rows; int end_of_block; int black_is_1; } ;
struct TYPE_14__ {TYPE_5__ jbig2; TYPE_4__ lzw; TYPE_3__ flate; TYPE_2__ jpeg; TYPE_1__ fax; } ;
struct TYPE_15__ {TYPE_6__ u; int type; } ;
typedef TYPE_7__ fz_compression_params ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_31, pdf_obj *VAR_32, pdf_obj *VAR_33, fz_compression_params *VAR_34)
{
 int VAR_35 = FUNC_3(VAR_31, VAR_33, FUNC_0(VAR_27));
 pdf_obj *VAR_36 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_6));
 int VAR_37 = FUNC_8(VAR_31, VAR_36);
 int VAR_38 = FUNC_3(VAR_31, VAR_33, FUNC_0(VAR_5));
 int VAR_39 = FUNC_3(VAR_31, VAR_33, FUNC_0(VAR_0));

 VAR_34->type = VAR_18;

 if (FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_3)) || FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_2)))
 {
  pdf_obj *VAR_40 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_24));
  pdf_obj *VAR_41 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_12));
  pdf_obj *VAR_42 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_10));
  pdf_obj *VAR_43 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_29));
  pdf_obj *VAR_44 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_11));
  pdf_obj *VAR_45 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_1));

  VAR_34->type = VAR_13;
  VAR_34->u.fax.k = (VAR_40 ? FUNC_8(VAR_31, VAR_40) : 0);
  VAR_34->u.fax.end_of_line = (VAR_41 ? FUNC_7(VAR_31, VAR_41) : 0);
  VAR_34->u.fax.encoded_byte_align = (VAR_42 ? FUNC_7(VAR_31, VAR_42) : 0);
  VAR_34->u.fax.columns = (VAR_36 ? VAR_37 : 1728);
  VAR_34->u.fax.rows = (VAR_43 ? FUNC_8(VAR_31, VAR_43) : 0);
  VAR_34->u.fax.end_of_block = (VAR_44 ? FUNC_7(VAR_31, VAR_44) : 1);
  VAR_34->u.fax.black_is_1 = (VAR_45 ? FUNC_7(VAR_31, VAR_45) : 0);
 }
 else if (FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_8)) || FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_7)))
 {
  pdf_obj *VAR_46 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_4));

  VAR_34->type = VAR_16;
  VAR_34->u.jpeg.color_transform = (VAR_46 ? FUNC_8(VAR_31, VAR_46) : -1);
 }
 else if (FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_30)) || FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_28)))
 {
  VAR_34->type = VAR_19;
 }
 else if (FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_21)) || FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_20)))
 {
  VAR_34->type = VAR_14;
  VAR_34->u.flate.predictor = VAR_35;
  VAR_34->u.flate.columns = VAR_37;
  VAR_34->u.flate.colors = VAR_38;
  VAR_34->u.flate.bpc = VAR_39;
 }
 else if (FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_26)) || FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_25)))
 {
  pdf_obj *VAR_47 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_9));

  VAR_34->type = VAR_17;
  VAR_34->u.lzw.predictor = VAR_35;
  VAR_34->u.lzw.columns = VAR_37;
  VAR_34->u.lzw.colors = VAR_38;
  VAR_34->u.lzw.bpc = VAR_39;
  VAR_34->u.lzw.early_change = (VAR_47 ? FUNC_8(VAR_31, VAR_47) : 1);
 }
 else if (FUNC_6(VAR_31, VAR_32, FUNC_0(VAR_22)))
 {
  pdf_obj *VAR_48 = FUNC_2(VAR_31, VAR_33, FUNC_0(VAR_23));

  VAR_34->type = VAR_15;
  VAR_34->u.jbig2.globals = ((void*)0);
  if (VAR_48)
  {
   if (!FUNC_4(VAR_31, VAR_48))
    FUNC_1(VAR_31, "jbig2 globals is not a stream, skipping globals");
   else
    VAR_34->u.jbig2.globals = FUNC_5(VAR_31, VAR_48);
  }
 }
}
