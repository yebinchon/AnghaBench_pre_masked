
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int,int*,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,int *,int *,int,int*,int *) ;

__attribute__((used)) static int FUNC_6(fz_context *VAR_4, pdf_document *VAR_5, pdf_obj *VAR_6, int VAR_7, int *VAR_8, pdf_obj *VAR_9, pdf_obj **VAR_10, pdf_obj **VAR_11)
{
 pdf_obj *VAR_12 = ((void*)0);
 pdf_obj *VAR_13 = ((void*)0);
 pdf_obj *VAR_14;
 int VAR_15 = 0;

 for (VAR_14 = VAR_6; VAR_14 != ((void*)0); )
 {
  int VAR_16;



  VAR_16 = FUNC_5(VAR_4, VAR_5, VAR_14, VAR_7, VAR_8, VAR_9);

  if (!FUNC_1(VAR_4, VAR_14, VAR_7, VAR_8, VAR_9))
  {
   if (VAR_16 == 0)
   {


    pdf_obj *VAR_17 = FUNC_3(VAR_4, VAR_14, FUNC_0(VAR_2));
    if (VAR_17 == ((void*)0))
    {

     if (VAR_12 != ((void*)0))
      FUNC_2(VAR_4, VAR_12, FUNC_0(VAR_2));
    }
    else if (VAR_12 != ((void*)0))
    {
     FUNC_4(VAR_4, VAR_12, FUNC_0(VAR_2), VAR_17);
     FUNC_4(VAR_4, VAR_17, FUNC_0(VAR_3), VAR_12);
    }
    else
    {
     FUNC_2(VAR_4, VAR_17, FUNC_0(VAR_3));
    }
    VAR_14 = VAR_17;
   }
   else
   {

    FUNC_2(VAR_4, VAR_14, FUNC_0(VAR_1));
    FUNC_2(VAR_4, VAR_14, FUNC_0(VAR_0));
    VAR_14 = FUNC_3(VAR_4, VAR_14, FUNC_0(VAR_2));
   }
  }
  else
  {

   if (VAR_13 == ((void*)0))
    VAR_13 = VAR_14;
   VAR_12 = VAR_14;
   VAR_14 = FUNC_3(VAR_4, VAR_14, FUNC_0(VAR_2));
   VAR_15++;
  }
 }

 *VAR_10 = VAR_13;
 *VAR_11 = VAR_12;

 return VAR_15;
}
