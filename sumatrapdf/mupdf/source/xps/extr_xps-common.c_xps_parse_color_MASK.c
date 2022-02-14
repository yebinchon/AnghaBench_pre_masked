
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 float FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *,char*,...) ;
 float FUNC_7 (float) ;
 int FUNC_8 (char*,char*,float*,float*,float*,...) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char*) ;
 int FUNC_12 (char) ;

void
FUNC_13(fz_context *VAR_1, xps_document *VAR_2, char *VAR_3, char *VAR_4,
  fz_colorspace **VAR_5, float *VAR_6)
{
 char *VAR_7;
 int VAR_8, VAR_9;
 char VAR_10[1024];
 char *VAR_11;

 *VAR_5 = FUNC_4(VAR_1);

 VAR_6[0] = 1;
 VAR_6[1] = 0;
 VAR_6[2] = 0;
 VAR_6[3] = 0;

 if (VAR_4[0] == '#')
 {
  if (FUNC_10(VAR_4) == 9)
  {
   VAR_6[0] = FUNC_12(VAR_4[1]) * 16 + FUNC_12(VAR_4[2]);
   VAR_6[1] = FUNC_12(VAR_4[3]) * 16 + FUNC_12(VAR_4[4]);
   VAR_6[2] = FUNC_12(VAR_4[5]) * 16 + FUNC_12(VAR_4[6]);
   VAR_6[3] = FUNC_12(VAR_4[7]) * 16 + FUNC_12(VAR_4[8]);
  }
  else
  {
   VAR_6[0] = 255;
   VAR_6[1] = FUNC_12(VAR_4[1]) * 16 + FUNC_12(VAR_4[2]);
   VAR_6[2] = FUNC_12(VAR_4[3]) * 16 + FUNC_12(VAR_4[4]);
   VAR_6[3] = FUNC_12(VAR_4[5]) * 16 + FUNC_12(VAR_4[6]);
  }

  VAR_6[0] /= 255;
  VAR_6[1] /= 255;
  VAR_6[2] /= 255;
  VAR_6[3] /= 255;
 }

 else if (VAR_4[0] == 's' && VAR_4[1] == 'c' && VAR_4[2] == '#')
 {
  if (FUNC_0(VAR_4) == 2)
   FUNC_8(VAR_4, "sc#%g,%g,%g", VAR_6 + 1, VAR_6 + 2, VAR_6 + 3);
  if (FUNC_0(VAR_4) == 3)
   FUNC_8(VAR_4, "sc#%g,%g,%g,%g", VAR_6, VAR_6 + 1, VAR_6 + 2, VAR_6 + 3);


  VAR_6[1] = FUNC_7(VAR_6[1]);
  VAR_6[2] = FUNC_7(VAR_6[2]);
  VAR_6[3] = FUNC_7(VAR_6[3]);
 }

 else if (FUNC_11(VAR_4, "ContextColor ") == VAR_4)
 {

  FUNC_5(VAR_10, VAR_4, sizeof VAR_10);

  VAR_11 = FUNC_9(VAR_10, ' ');
  if (!VAR_11)
  {
   FUNC_6(VAR_1, "cannot find icc profile uri in '%s'", VAR_4);
   return;
  }

  *VAR_11++ = 0;
  VAR_7 = FUNC_9(VAR_11, ' ');
  if (!VAR_7)
  {
   FUNC_6(VAR_1, "cannot find component values in '%s'", VAR_11);
   return;
  }

  *VAR_7++ = 0;
  VAR_9 = FUNC_0(VAR_7) + 1;
  if (VAR_9 > VAR_0)
  {
   FUNC_6(VAR_1, "ignoring %d color components (max %d allowed)", VAR_9 - VAR_0, VAR_0);
   VAR_9 = VAR_0;
  }
  VAR_8 = 0;
  while (VAR_8 < VAR_9)
  {
   VAR_6[VAR_8++] = FUNC_1(VAR_7);
   VAR_7 = FUNC_9(VAR_7, ',');
   if (!VAR_7)
    break;
   VAR_7 ++;
   if (*VAR_7 == ' ')
    VAR_7 ++;
  }
  while (VAR_8 < VAR_9)
  {
   VAR_6[VAR_8++] = 0;
  }


  switch (VAR_9)
  {
  case 2: *VAR_5 = FUNC_3(VAR_1); break;
  case 4: *VAR_5 = FUNC_4(VAR_1); break;
  case 5: *VAR_5 = FUNC_2(VAR_1); break;
  default: *VAR_5 = FUNC_3(VAR_1); break;
  }
 }
}
