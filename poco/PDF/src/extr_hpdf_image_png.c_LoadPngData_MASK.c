
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int * png_structp ;
typedef int png_rw_ptr ;
typedef int * png_infop ;
typedef int png_bytep ;
struct TYPE_19__ {scalar_t__ error_no; } ;
struct TYPE_17__ {int obj_class; } ;
struct TYPE_18__ {TYPE_3__* error; int after_write_fn; int before_write_fn; int mmgr; int stream; TYPE_1__ header; } ;
typedef scalar_t__ HPDF_Xref ;
typedef int HPDF_UINT ;
typedef scalar_t__ HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Dict ;
typedef scalar_t__ HPDF_BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *,int *) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int *,int *,int ,int ,int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int *,int *,int ) ;
 int * FUNC_15 (int *) ;
 int * FUNC_16 (int ,TYPE_3__*,int ,int ) ;
 int FUNC_17 (int **,int **,int *) ;
 int FUNC_18 (int *,int *,int*,int*,int*,int*,int *,int *,int *) ;
 scalar_t__ FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *,int *,int*,int *) ;
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,void*,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static HPDF_STATUS
FUNC_27 (HPDF_Dict VAR_17,
              HPDF_Xref VAR_18,
              HPDF_Stream VAR_19,
              HPDF_BOOL VAR_20)

{
 HPDF_STATUS VAR_21 = VAR_3;
 png_uint_32 VAR_22, VAR_23;
 int VAR_24, VAR_25;
 png_structp VAR_26 = ((void*)0);
 png_infop VAR_27 = ((void*)0);

 FUNC_8 ((" HPDF_Image_LoadPngImage\n"));


 VAR_26 = FUNC_16 (VAR_12,
   VAR_17->error, VAR_15, VAR_15);

 if (VAR_26 == ((void*)0)) {
  FUNC_9 (VAR_17->error, VAR_0, 0);
  return VAR_0;
 }


 VAR_27 = FUNC_15 (VAR_26);

 if (VAR_27 == ((void*)0)) {
  FUNC_9 (VAR_17->error, VAR_0, 0);
  goto Exit;
 }

 FUNC_25 (VAR_26, VAR_5);
 FUNC_24 (VAR_26, (void *)VAR_19, (png_rw_ptr)&VAR_16);


 FUNC_22(VAR_26, VAR_27);
 if (VAR_17->error->error_no != VAR_3) {
  goto Exit;
 }

 FUNC_18(VAR_26, VAR_27, &VAR_22, &VAR_23, &VAR_24, &VAR_25, ((void*)0), ((void*)0), ((void*)0));


 if (VAR_24 == 16) {
  FUNC_26(VAR_26);
 }

 FUNC_23(VAR_26, VAR_27);
 if (VAR_17->error->error_no != VAR_3) {
  goto Exit;
 }


 if (VAR_18 && VAR_9 & VAR_25) {
  png_bytep VAR_28;
  int VAR_29;
  HPDF_Dict VAR_30;
  png_bytep VAR_31;

  if (!FUNC_21(VAR_26, VAR_27, VAR_10) ||
   !FUNC_20(VAR_26, VAR_27, &VAR_28, &VAR_29, ((void*)0))) {
   goto no_transparent_color_in_palette;
  }

  VAR_30 = FUNC_1 (VAR_17->mmgr, VAR_18);
  if (!VAR_30) {
   VAR_21 = VAR_0;
   goto Exit;
  }

  VAR_30->header.obj_class |= VAR_4;
  VAR_21 = FUNC_3 (VAR_30, "Type", "XObject");
  VAR_21 += FUNC_3 (VAR_30, "Subtype", "Image");
  VAR_21 += FUNC_4 (VAR_30, "Width", (HPDF_UINT)VAR_22);
  VAR_21 += FUNC_4 (VAR_30, "Height", (HPDF_UINT)VAR_23);
  VAR_21 += FUNC_3 (VAR_30, "ColorSpace", "DeviceGray");
  VAR_21 += FUNC_4 (VAR_30, "BitsPerComponent", (HPDF_UINT)VAR_24);

  if (VAR_21 != VAR_3) {
   FUNC_5(VAR_30);
   VAR_21 = VAR_2;
   goto Exit;
  }

  VAR_31 = FUNC_7(VAR_17->mmgr, VAR_22 * VAR_23);
  if (!VAR_31) {
   FUNC_5(VAR_30);
   VAR_21 = VAR_0;
   goto Exit;
  }

  if (FUNC_13(VAR_17, VAR_26, VAR_27, VAR_31, VAR_28, VAR_29) != VAR_3) {
   FUNC_6(VAR_17->mmgr, VAR_31);
   FUNC_5(VAR_30);
   VAR_21 = VAR_2;
   goto Exit;
  }

  if (FUNC_10(VAR_30->stream, VAR_31, VAR_22 * VAR_23) != VAR_3) {
   FUNC_6(VAR_17->mmgr, VAR_31);
   FUNC_5(VAR_30);
   VAR_21 = VAR_1;
   goto Exit;
  }
  FUNC_6(VAR_17->mmgr, VAR_31);


  VAR_21 += FUNC_0(VAR_17, VAR_26, VAR_27);
  VAR_21 += FUNC_4 (VAR_17, "Width", (HPDF_UINT)VAR_22);
  VAR_21 += FUNC_4 (VAR_17, "Height", (HPDF_UINT)VAR_23);
  VAR_21 += FUNC_4 (VAR_17, "BitsPerComponent", (HPDF_UINT)VAR_24);
  VAR_21 += FUNC_2 (VAR_17, "SMask", VAR_30);

  FUNC_17(&VAR_26, &VAR_27, ((void*)0));
  return VAR_3;
 }

no_transparent_color_in_palette:



 if (VAR_18 && VAR_6 & VAR_25) {
  HPDF_Dict VAR_32;
  png_bytep VAR_33;

  VAR_32 = FUNC_1 (VAR_17->mmgr, VAR_18);
  if (!VAR_32) {
   VAR_21 = VAR_0;
   goto Exit;
  }

  VAR_32->header.obj_class |= VAR_4;
  VAR_21 = FUNC_3 (VAR_32, "Type", "XObject");
  VAR_21 += FUNC_3 (VAR_32, "Subtype", "Image");
  VAR_21 += FUNC_4 (VAR_32, "Width", (HPDF_UINT)VAR_22);
  VAR_21 += FUNC_4 (VAR_32, "Height", (HPDF_UINT)VAR_23);
  VAR_21 += FUNC_3 (VAR_32, "ColorSpace", "DeviceGray");
  VAR_21 += FUNC_4 (VAR_32, "BitsPerComponent", (HPDF_UINT)VAR_24);

  if (VAR_21 != VAR_3) {
   FUNC_5(VAR_32);
   VAR_21 = VAR_2;
   goto Exit;
  }

  VAR_33 = FUNC_7(VAR_17->mmgr, VAR_22 * VAR_23);
  if (!VAR_33) {
   FUNC_5(VAR_32);
   VAR_21 = VAR_0;
   goto Exit;
  }

  if (FUNC_14(VAR_17, VAR_26, VAR_27, VAR_33) != VAR_3) {
   FUNC_6(VAR_17->mmgr, VAR_33);
   FUNC_5(VAR_32);
   VAR_21 = VAR_2;
   goto Exit;
  }

  if (FUNC_10(VAR_32->stream, VAR_33, VAR_22 * VAR_23) != VAR_3) {
   FUNC_6(VAR_17->mmgr, VAR_33);
   FUNC_5(VAR_32);
   VAR_21 = VAR_1;
   goto Exit;
  }
  FUNC_6(VAR_17->mmgr, VAR_33);

  if (VAR_25 == VAR_8) {
   VAR_21 += FUNC_3 (VAR_17, "ColorSpace", "DeviceGray");
  } else {
   VAR_21 += FUNC_3 (VAR_17, "ColorSpace", "DeviceRGB");
  }
  VAR_21 += FUNC_4 (VAR_17, "Width", (HPDF_UINT)VAR_22);
  VAR_21 += FUNC_4 (VAR_17, "Height", (HPDF_UINT)VAR_23);
  VAR_21 += FUNC_4 (VAR_17, "BitsPerComponent", (HPDF_UINT)VAR_24);
  VAR_21 += FUNC_2 (VAR_17, "SMask", VAR_32);

  FUNC_17(&VAR_26, &VAR_27, ((void*)0));
  return VAR_3;
 }




 if (VAR_25 == VAR_9)
  VAR_21 = FUNC_0(VAR_17, VAR_26, VAR_27);
 else if (VAR_25 == VAR_7)
  VAR_21 = FUNC_3 (VAR_17, "ColorSpace", "DeviceGray");
 else
  VAR_21 = FUNC_3 (VAR_17, "ColorSpace", "DeviceRGB");

 if (VAR_21 != VAR_3)
  goto Exit;





 if (VAR_20) {
  VAR_17->before_write_fn = VAR_14;
  VAR_17->after_write_fn = VAR_13;
 } else {
  if (FUNC_19(VAR_26, VAR_27) != VAR_11)
   VAR_21 = FUNC_12(VAR_17, VAR_26, VAR_27);
  else
   VAR_21 = FUNC_11(VAR_17, VAR_26, VAR_27);

  if (VAR_21 != VAR_3)
   goto Exit;
 }


 if (FUNC_4 (VAR_17, "Width", (HPDF_UINT)VAR_22)
   != VAR_3)
  goto Exit;

 if (FUNC_4 (VAR_17, "Height", (HPDF_UINT)VAR_23)
   != VAR_3)
  goto Exit;

 if (FUNC_4 (VAR_17, "BitsPerComponent",
    (HPDF_UINT)VAR_24) != VAR_3)
  goto Exit;


 FUNC_17(&VAR_26, &VAR_27, ((void*)0));

 return VAR_3;

Exit:
 FUNC_17(&VAR_26, &VAR_27, ((void*)0));

 if (VAR_21 != VAR_3) {
  return VAR_21;
 }
 return VAR_17->error->error_no;
}
