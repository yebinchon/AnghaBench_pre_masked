
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {int file_size; } ;
typedef TYPE_1__ pdf_document ;
struct TYPE_6__ {int offset; int length; } ;
typedef TYPE_2__ fz_range ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int ,int ,int *) ;

int FUNC_5(fz_context *VAR_3, pdf_document *VAR_4, pdf_obj *VAR_5, fz_range *VAR_6)
{
 pdf_obj *VAR_7 = FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_2), FUNC_0(VAR_0), ((void*)0));
 int VAR_8, VAR_9 = FUNC_3(VAR_3, VAR_7)/2;

 if (VAR_6)
 {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  {
   int VAR_10 = FUNC_2(VAR_3, VAR_7, 2*VAR_8);
   int VAR_11 = FUNC_2(VAR_3, VAR_7, 2*VAR_8+1);

   if (VAR_10 < 0 || VAR_10 > VAR_4->file_size)
    FUNC_1(VAR_3, VAR_1, "offset of signature byte range outside of file");
   else if (VAR_11 < 0)
    FUNC_1(VAR_3, VAR_1, "length of signature byte range negative");
   else if (VAR_10 + VAR_11 > VAR_4->file_size)
    FUNC_1(VAR_3, VAR_1, "signature byte range extends past end of file");

   VAR_6[VAR_8].offset = VAR_10;
   VAR_6[VAR_8].length = VAR_11;
  }
 }

 return VAR_9;
}
