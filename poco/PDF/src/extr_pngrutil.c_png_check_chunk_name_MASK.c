
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_structp ;
typedef int * png_bytep ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,char*) ;

void
FUNC_3(png_structp VAR_0, png_bytep VAR_1)
{
   FUNC_2(1, "in png_check_chunk_name\n");
   if (FUNC_0(VAR_1[0]) || FUNC_0(VAR_1[1]) ||
       FUNC_0(VAR_1[2]) || FUNC_0(VAR_1[3]))
   {
      FUNC_1(VAR_0, "invalid chunk type");
   }
}
