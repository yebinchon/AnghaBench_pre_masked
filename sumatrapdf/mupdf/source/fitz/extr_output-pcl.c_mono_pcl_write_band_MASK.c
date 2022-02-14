
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int features; } ;
struct TYPE_4__ {int w; int yres; int * out; } ;
struct TYPE_5__ {int num_blank_lines; unsigned char* prev; unsigned char* mode2buf; unsigned char* mode3buf; scalar_t__ top_of_page; TYPE_3__ options; TYPE_1__ super; } ;
typedef TYPE_2__ mono_pcl_band_writer ;
typedef TYPE_3__ fz_pcl_options ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int *,int *,unsigned char const*,int) ;
 int FUNC_1 (int *,int *,char*,int) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,unsigned char const*,unsigned char*,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_9, fz_band_writer *VAR_10, int VAR_11, int VAR_12, int VAR_13, const unsigned char *VAR_14)
{
 mono_pcl_band_writer *VAR_15 = (mono_pcl_band_writer *)VAR_10;
 fz_output *VAR_16 = VAR_15->super.out;
 int VAR_17 = VAR_15->super.w;
 int VAR_18 = VAR_15->super.yres;
 const unsigned char *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;
 int VAR_24 = -1;
 unsigned char *VAR_25 = ((void*)0);
 unsigned char *VAR_26 = ((void*)0);
 unsigned char *VAR_27 = ((void*)0);
 int VAR_28;
 const fz_pcl_options *VAR_29;

 if (!VAR_16)
  return;

 VAR_23 = VAR_15->num_blank_lines;
 VAR_21 = ~0 << (-VAR_17 & 7);
 VAR_22 = (VAR_17 + 7)/8;
 VAR_25 = VAR_15->prev;
 VAR_26 = VAR_15->mode2buf;
 VAR_27 = VAR_15->mode3buf;
 VAR_29 = &VAR_15->options;


 for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++, VAR_14 += VAR_11)
 {
  const unsigned char *VAR_30 = VAR_14 + VAR_22;

  if ((VAR_30[-1] & VAR_21) == 0)
  {
   VAR_30--;
   while (VAR_30 > VAR_14 && VAR_30[-1] == 0)
    VAR_30--;
  }
  if (VAR_30 == VAR_14)
  {

   VAR_23++;
   continue;
  }



  if (VAR_15->top_of_page)
  {
   VAR_15->top_of_page = 0;

   if (VAR_29->features & VAR_2)
   {
    if (VAR_23 > 0)
     FUNC_1(VAR_9, VAR_16, "\033*p+%dY", VAR_23);

    FUNC_2(VAR_9, VAR_16, "\033*r1A");
   }
   else if (VAR_29->features & VAR_4)
   {

    FUNC_2(VAR_9, VAR_16, "\033*r1A");
    for (; VAR_23; VAR_23--)
     FUNC_2(VAR_9, VAR_16, "\033*b0W");
   }
   else
   {

    FUNC_2(VAR_9, VAR_16, "\033*r1A");
    for (; VAR_23; VAR_23--)
     FUNC_2(VAR_9, VAR_16, "\033*bW");
   }
  }


  else if (VAR_23 != 0)
  {
   if ((VAR_23 < VAR_0 && VAR_24 != 3) ||
     !(VAR_29->features & VAR_2))
   {
    int VAR_31 = ((VAR_29->features & VAR_4) && !(VAR_29->features & VAR_2));
    if (VAR_31 && VAR_24 != 2)
    {

     FUNC_2(VAR_9, VAR_16, VAR_6);
     VAR_24 = 2;
    }
    if (VAR_29->features & VAR_4)
    {

     FUNC_2(VAR_9, VAR_16, "\033*b1Y");
     VAR_23--;
    }
    if (VAR_31)
    {
     for (; VAR_23; VAR_23--)
      FUNC_2(VAR_9, VAR_16, "\033*b0W");
    }
    else
    {
     for (; VAR_23; VAR_23--)
      FUNC_2(VAR_9, VAR_16, "\033*bW");
    }
   }
   else if (VAR_29->features & VAR_1)
    FUNC_1(VAR_9, VAR_16, "\033*p+%dY", VAR_23 * VAR_18);
   else
    FUNC_1(VAR_9, VAR_16, "\033*b%dY", VAR_23);

   FUNC_3(VAR_25, 0, VAR_22);
  }
  VAR_23 = 0;


  if (VAR_29->features & VAR_4)
  {



   int VAR_32 = FUNC_5(VAR_27, VAR_14, VAR_25, VAR_22);
   int VAR_33 = FUNC_4(VAR_26, VAR_14, VAR_22);
   int VAR_34 = (VAR_24 == 3 ? 0 : VAR_7);
   int VAR_35 = (VAR_24 == 2 ? 0 : VAR_8);

   if (VAR_32 + VAR_34 < VAR_33 + VAR_35)
   {
    if (VAR_24 != 3)
     FUNC_2(VAR_9, VAR_16, VAR_5);
    VAR_24 = 3;
    VAR_19 = (unsigned char *)VAR_27;
    VAR_28 = VAR_32;
   }
   else
   {
    if (VAR_24 != 2)
     FUNC_2(VAR_9, VAR_16, VAR_6);
    VAR_24 = 2;
    VAR_19 = (unsigned char *)VAR_26;
    VAR_28 = VAR_33;
   }
  }
  else if (VAR_29->features & VAR_3)
  {
   VAR_19 = VAR_26;
   VAR_28 = FUNC_4(VAR_26, VAR_14, VAR_22);
  }
  else
  {
   VAR_19 = VAR_14;
   VAR_28 = VAR_22;
  }


  FUNC_1(VAR_9, VAR_16, "\033*b%dW", VAR_28);
  FUNC_0(VAR_9, VAR_16, VAR_19, VAR_28);
 }

 VAR_15->num_blank_lines = VAR_23;
}
