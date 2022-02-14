
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* renumber_map; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int,int *) ;
 int * FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int *,scalar_t__,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static void FUNC_13(fz_context *VAR_1, pdf_document *VAR_2, pdf_write_state *VAR_3, pdf_obj *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_12(VAR_1, VAR_2);

 if (FUNC_8(VAR_1, VAR_4))
 {
  int VAR_7 = FUNC_5(VAR_1, VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  {
   pdf_obj *VAR_8 = FUNC_3(VAR_1, VAR_4, VAR_5);
   pdf_obj *VAR_9 = FUNC_4(VAR_1, VAR_4, VAR_5);
   if (FUNC_9(VAR_1, VAR_9))
   {
    int VAR_10 = FUNC_11(VAR_1, VAR_9);
    if (VAR_10 >= VAR_6 || VAR_10 <= 0 || VAR_3->renumber_map[VAR_10] == 0)
     VAR_9 = VAR_0;
    else
     VAR_9 = FUNC_10(VAR_1, VAR_2, VAR_3->renumber_map[VAR_10], 0);
    FUNC_6(VAR_1, VAR_4, VAR_8, VAR_9);
   }
   else
   {
    FUNC_13(VAR_1, VAR_2, VAR_3, VAR_9);
   }
  }
 }

 else if (FUNC_7(VAR_1, VAR_4))
 {
  int VAR_11 = FUNC_1(VAR_1, VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_11; VAR_5++)
  {
   pdf_obj *VAR_12 = FUNC_0(VAR_1, VAR_4, VAR_5);
   if (FUNC_9(VAR_1, VAR_12))
   {
    int VAR_13 = FUNC_11(VAR_1, VAR_12);
    if (VAR_13 >= VAR_6 || VAR_13 <= 0 || VAR_3->renumber_map[VAR_13] == 0)
     VAR_12 = VAR_0;
    else
     VAR_12 = FUNC_10(VAR_1, VAR_2, VAR_3->renumber_map[VAR_13], 0);
    FUNC_2(VAR_1, VAR_4, VAR_5, VAR_12);
   }
   else
   {
    FUNC_13(VAR_1, VAR_2, VAR_3, VAR_12);
   }
  }
 }
}
