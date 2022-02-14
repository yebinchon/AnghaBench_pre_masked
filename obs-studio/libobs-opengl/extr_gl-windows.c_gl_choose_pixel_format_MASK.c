
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_init_data {int zsformat; int format; } ;
struct darray {int array; } ;
typedef int UINT ;
typedef int HDC ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
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
 int FUNC_1 (struct darray*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct darray*) ;
 int FUNC_4 (struct darray*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int *,int,int*,int *) ;

__attribute__((used)) static int FUNC_9(HDC VAR_12, const struct gs_init_data *VAR_13)
{
 struct darray VAR_14;
 int VAR_15 = FUNC_5(VAR_13->format);
 int VAR_16 = FUNC_6(VAR_13->zsformat);
 int VAR_17 = FUNC_7(VAR_13->zsformat);
 UINT VAR_18;
 BOOL VAR_19;
 int VAR_20;

 if (!VAR_15) {
  FUNC_2(VAR_1, "gl_init_pixel_format: color format not "
    "supported");
  return 0;
 }

 FUNC_4(&VAR_14);
 FUNC_1(&VAR_14, VAR_6, VAR_0);
 FUNC_1(&VAR_14, VAR_10, VAR_0);
 FUNC_1(&VAR_14, VAR_2, VAR_7);
 FUNC_1(&VAR_14, VAR_5, VAR_0);
 FUNC_1(&VAR_14, VAR_8, VAR_11);
 FUNC_1(&VAR_14, VAR_3, VAR_15);
 FUNC_1(&VAR_14, VAR_4, VAR_16);
 FUNC_1(&VAR_14, VAR_9, VAR_17);
 FUNC_1(&VAR_14, 0, 0);

 VAR_19 = FUNC_8(VAR_12, VAR_14.array, ((void*)0), 1, &VAR_20,
       &VAR_18);
 if (!VAR_19 || !VAR_18) {
  FUNC_2(VAR_1, "wglChoosePixelFormatARB failed, %lu",
       FUNC_0());
  VAR_20 = 0;
 }

 FUNC_3(&VAR_14);

 return VAR_20;
}
