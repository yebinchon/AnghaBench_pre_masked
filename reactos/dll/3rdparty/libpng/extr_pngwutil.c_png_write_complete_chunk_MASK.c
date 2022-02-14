
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_uint_32 ;
typedef int * png_structrp ;
typedef int png_const_bytep ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(png_structrp VAR_1, png_uint_32 VAR_2,
    png_const_bytep VAR_3, size_t VAR_4)
{
   if (VAR_1 == ((void*)0))
      return;


   if (VAR_4 > VAR_0)
      FUNC_0(VAR_1, "length exceeds PNG maximum");

   FUNC_3(VAR_1, VAR_2, (png_uint_32)VAR_4);
   FUNC_1(VAR_1, VAR_3, VAR_4);
   FUNC_2(VAR_1);
}
