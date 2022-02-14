
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_separations; char** name; } ;
typedef TYPE_1__ fz_separations ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,float*,int *,float*,int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (float*,int ,int) ;
 int FUNC_8 (char const*,char const*) ;

void
FUNC_9(fz_context *VAR_1,
 fz_colorspace *VAR_2, const float *VAR_3,
 fz_separations *VAR_4, fz_colorspace *VAR_5, float *VAR_6,
 fz_color_params VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 float VAR_15[VAR_0];
 int VAR_16 = 0;

 FUNC_0(VAR_5 && VAR_2 && VAR_6 && VAR_3);
 FUNC_0(FUNC_2(VAR_1, VAR_2));

 VAR_11 = FUNC_4(VAR_1, VAR_5);
 VAR_12 = (VAR_4 == ((void*)0) ? 0: VAR_4->num_separations);
 VAR_13 = VAR_11 + VAR_12;

 VAR_8 = 0;
 if (!FUNC_3(VAR_1, VAR_5))
  for (; VAR_8 < VAR_11; VAR_8++)
   VAR_6[VAR_8] = 1;
 for (; VAR_8 < VAR_13; VAR_8++)
  VAR_6[VAR_8] = 0;

 VAR_10 = FUNC_4(VAR_1, VAR_2);
 VAR_14 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
 {
  const char *VAR_17 = FUNC_1(VAR_1, VAR_2, VAR_8);

  if (VAR_17 == ((void*)0))
   continue;
  if (VAR_8 == 0 && !FUNC_8(VAR_17, "All"))
  {

   if (VAR_10 != 1)
    FUNC_6(VAR_1, "All found in DeviceN space");
   for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
    VAR_6[VAR_8] = VAR_3[0];
   break;
  }
  if (!FUNC_8(VAR_17, "None"))
   continue;



  for (VAR_9 = VAR_14; VAR_9 < VAR_12; VAR_9++)
  {
   const char *VAR_18 = VAR_4->name[VAR_9];
   if (VAR_18 && !FUNC_8(VAR_17, VAR_18))
    goto found_sep;
  }
  for (VAR_9 = 0; VAR_9 < VAR_14; VAR_9++)
  {
   const char *VAR_19 = VAR_4->name[VAR_9];
   if (VAR_19 && !FUNC_8(VAR_17, VAR_19))
    goto found_sep;
  }
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
  {
   const char *VAR_20 = FUNC_1(VAR_1, VAR_5, VAR_9);
   if (VAR_20 && !FUNC_8(VAR_17, VAR_20))
    goto found_process;
  }
  if (0) {
found_sep:
   VAR_6[VAR_9+VAR_11] = VAR_3[VAR_8];
   VAR_14 = VAR_9+1;
  }
  else if (0)
  {
found_process:
   VAR_6[VAR_9] += VAR_3[VAR_8];
  }
  else
  {
   if (VAR_16 == 0)
   {
    FUNC_7(VAR_15, 0, sizeof(float) * VAR_10);
    VAR_16 = 1;
   }
   VAR_15[VAR_8] = VAR_3[VAR_8];
  }
 }

 if (VAR_16)
 {

  float VAR_21[VAR_0];
  FUNC_5(VAR_1, VAR_2, VAR_15, VAR_5, VAR_21, ((void*)0), VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++)
   VAR_6[VAR_8] += VAR_21[VAR_8];
 }
}
