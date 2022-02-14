
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ png_uint_32 ;
typedef int png_structp ;
typedef scalar_t__ png_size_t ;
typedef char* png_charp ;
typedef int png_bytep ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char**) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__) ;

void
FUNC_8(png_structp VAR_2, png_charp VAR_3, png_charp VAR_4,
   png_size_t VAR_5)
{



   png_size_t VAR_6;
   png_charp VAR_7;

   FUNC_1(1, "in png_write_tEXt\n");
   if (VAR_3 == ((void*)0) || (VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_7))==0)
   {
      FUNC_4(VAR_2, "Empty keyword in tEXt chunk");
      return;
   }

   if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
      VAR_5 = 0;
   else
      VAR_5 = FUNC_3(VAR_4);


   FUNC_7(VAR_2, VAR_1, (png_uint_32)VAR_6+VAR_5+1);






   FUNC_5(VAR_2, (png_bytep)VAR_7, VAR_6 + 1);
   if (VAR_5)
      FUNC_5(VAR_2, (png_bytep)VAR_4, VAR_5);

   FUNC_6(VAR_2);
   FUNC_2(VAR_2, VAR_7);
}
