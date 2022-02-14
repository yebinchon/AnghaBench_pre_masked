
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef int png_structp ;
typedef scalar_t__ png_size_t ;
typedef char* png_charp ;
typedef int png_bytep ;
typedef char png_byte ;
struct TYPE_4__ {scalar_t__ input_len; int * input; int * output_ptr; scalar_t__ max_output_ptr; scalar_t__ num_output_ptr; } ;
typedef TYPE_1__ compression_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,char**) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*,scalar_t__,int,TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (int ,char*,char*,scalar_t__) ;
 int VAR_2 ;

void
FUNC_11(png_structp VAR_3, png_charp VAR_4, png_charp VAR_5,
   png_size_t VAR_6, int VAR_7)
{



   png_size_t VAR_8;
   char VAR_9[1];
   png_charp VAR_10;
   compression_state VAR_11;

   FUNC_1(1, "in png_write_zTXt\n");

   VAR_11.num_output_ptr = 0;
   VAR_11.max_output_ptr = 0;
   VAR_11.output_ptr = ((void*)0);
   VAR_11.input = ((void*)0);
   VAR_11.input_len = 0;

   if (VAR_4 == ((void*)0) || (VAR_8 = FUNC_0(VAR_3, VAR_4, &VAR_10))==0)
   {
      FUNC_5(VAR_3, "Empty keyword in zTXt chunk");
      return;
   }

   if (VAR_5 == ((void*)0) || *VAR_5 == '\0' || VAR_7==VAR_0)
   {
      FUNC_10(VAR_3, VAR_10, VAR_5, (png_size_t)0);
      FUNC_2(VAR_3, VAR_10);
      return;
   }

   VAR_6 = FUNC_3(VAR_5);


   VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_6, VAR_7,
       &VAR_11);


   FUNC_8(VAR_3, VAR_2, (png_uint_32)
      (VAR_8+VAR_6+2));

   FUNC_6(VAR_3, (png_bytep)VAR_10, VAR_8 + 1);
   FUNC_2(VAR_3, VAR_10);

   VAR_9[0] = (png_byte)VAR_7;

   FUNC_6(VAR_3, (png_bytep)VAR_9, (png_size_t)1);

   FUNC_9(VAR_3, &VAR_11);


   FUNC_7(VAR_3);
}
