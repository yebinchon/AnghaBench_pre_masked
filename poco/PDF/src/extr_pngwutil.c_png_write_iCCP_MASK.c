
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef int png_structp ;
typedef int png_size_t ;
typedef int* png_charp ;
typedef int* png_bytep ;
struct TYPE_4__ {scalar_t__ input_len; int * input; int * output_ptr; scalar_t__ max_output_ptr; scalar_t__ num_output_ptr; } ;
typedef TYPE_1__ compression_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int**) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int*,int,int,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,TYPE_1__*) ;

void
FUNC_9(png_structp VAR_3, png_charp VAR_4, int VAR_5,
   png_charp VAR_6, int VAR_7)
{



   png_size_t VAR_8;
   png_charp VAR_9;
   compression_state VAR_10;
   int VAR_11 = 0;

   FUNC_1(1, "in png_write_iCCP\n");

   VAR_10.num_output_ptr = 0;
   VAR_10.max_output_ptr = 0;
   VAR_10.output_ptr = ((void*)0);
   VAR_10.input = ((void*)0);
   VAR_10.input_len = 0;

   if (VAR_4 == ((void*)0) || (VAR_8 = FUNC_0(VAR_3, VAR_4,
      &VAR_9)) == 0)
   {
      FUNC_4(VAR_3, "Empty keyword in iCCP chunk");
      return;
   }

   if (VAR_5 != VAR_0)
      FUNC_4(VAR_3, "Unknown compression type in iCCP chunk");

   if (VAR_6 == ((void*)0))
      VAR_7 = 0;

   if (VAR_7 > 3)
      VAR_11 =
          ((*( (png_bytep)VAR_6 ))<<24) |
          ((*( (png_bytep)VAR_6+1))<<16) |
          ((*( (png_bytep)VAR_6+2))<< 8) |
          ((*( (png_bytep)VAR_6+3)) );

   if (VAR_7 < VAR_11)
     {
        FUNC_4(VAR_3,
          "Embedded profile length too large in iCCP chunk");
        return;
     }

   if (VAR_7 > VAR_11)
     {
        FUNC_4(VAR_3,
          "Truncating profile to actual length in iCCP chunk");
        VAR_7 = VAR_11;
     }

   if (VAR_7)
       VAR_7 = FUNC_3(VAR_3, VAR_6, (png_size_t)VAR_7,
          VAR_0, &VAR_10);


   FUNC_7(VAR_3, VAR_2,
          (png_uint_32)VAR_8+VAR_7+2);
   VAR_9[VAR_8+1]=0x00;
   FUNC_5(VAR_3, (png_bytep)VAR_9, VAR_8 + 2);

   if (VAR_7)
      FUNC_8(VAR_3, &VAR_10);

   FUNC_6(VAR_3);
   FUNC_2(VAR_3, VAR_9);
}
