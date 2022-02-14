
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_output ;
typedef int fz_context ;
struct TYPE_4__ {int * out; } ;
struct TYPE_5__ {unsigned char* linebuf; unsigned char* compbuf; unsigned char* compbuf2; TYPE_1__ super; } ;
typedef TYPE_2__ color_pcl_band_writer ;


 int FUNC_0 (unsigned char*,unsigned char*,unsigned char*,int,int ) ;
 int FUNC_1 (int *,int *,unsigned char*,int*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *,unsigned char*,int) ;
 int FUNC_4 (int *,int *,char*,int) ;
 int FUNC_5 (int *,int *,char*) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int) ;
 scalar_t__ FUNC_7 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_0, color_pcl_band_writer *VAR_1, const unsigned char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 fz_output *VAR_6 = VAR_1->super.out;
 int VAR_7 = VAR_3 * 3;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 unsigned char *VAR_11 = VAR_1->linebuf + VAR_3 * 3;
 unsigned char *VAR_12 = VAR_1->linebuf;
 unsigned char *VAR_13 = VAR_1->compbuf;
 unsigned char *VAR_14 = VAR_1->compbuf2;

 while (VAR_10 < VAR_4)
 {

  int VAR_15;
  do
  {
   VAR_15 = 0;
   while (VAR_15 < 32767 && VAR_10 < VAR_4)
   {
    if (!FUNC_6(VAR_12, VAR_2, VAR_3))
     break;
    VAR_15++;
    VAR_10++;
   }

   if (VAR_15)
   {
    FUNC_1(VAR_0, VAR_6, VAR_13, &VAR_9, 3);
    VAR_13[VAR_9++] = 4;
    VAR_13[VAR_9++] = VAR_15>>8;
    VAR_13[VAR_9++] = VAR_15 & 0xFF;
    VAR_8 = 0;
   }
  }
  while (VAR_15 == 32767);

  if (VAR_10 == VAR_4)
   break;


  if (VAR_8 && FUNC_7(VAR_12, VAR_11, VAR_7) == 0)
  {
   int VAR_16 = 1;
   VAR_2 += VAR_5;
   VAR_10++;
   while (VAR_16 < 32767 && VAR_10 < VAR_4)
   {
    if (FUNC_7(VAR_2-VAR_5, VAR_2, VAR_7) != 0)
     break;
    VAR_16++;
    VAR_2 += VAR_5;
    VAR_10++;
   }
   FUNC_1(VAR_0, VAR_6, VAR_13, &VAR_9, 3);
   VAR_13[VAR_9++] = 5;
   VAR_13[VAR_9++] = VAR_16>>8;
   VAR_13[VAR_9++] = VAR_16 & 0xFF;
  }
  else
  {
   unsigned char *VAR_17;
   int VAR_18 = 0;


   if (VAR_8)
    VAR_18 = FUNC_0(VAR_12, VAR_11, VAR_14, VAR_7, FUNC_2(VAR_7-1, 32767-3));

   if (VAR_18 > 0)
   {

    FUNC_1(VAR_0, VAR_6, VAR_13, &VAR_9, VAR_18+3);
    VAR_13[VAR_9++] = 3;
    VAR_13[VAR_9++] = VAR_18>>8;
    VAR_13[VAR_9++] = VAR_18 & 0xFF;
    FUNC_8(&VAR_13[VAR_9], VAR_14, VAR_18);
    VAR_9 += VAR_18;
   }
   else
   {
    FUNC_1(VAR_0, VAR_6, VAR_13, &VAR_9, 3 + VAR_7);






    VAR_13[VAR_9++] = 0;
    VAR_13[VAR_9++] = VAR_7>>8;
    VAR_13[VAR_9++] = VAR_7 & 0xFF;
    FUNC_8(&VAR_13[VAR_9], VAR_12, VAR_7);
    VAR_9 += VAR_7;
    VAR_8 = 1;
   }


   VAR_17 = VAR_11; VAR_11 = VAR_12; VAR_12 = VAR_17;
   VAR_2 += VAR_5;
   VAR_10++;
  }
 }

 if (VAR_9) {
  FUNC_4(VAR_0, VAR_6, "\033*b%dW", VAR_9);
  FUNC_3(VAR_0, VAR_6, VAR_13, VAR_9);
 }


 FUNC_5(VAR_0, VAR_6, "\033*rC");
}
