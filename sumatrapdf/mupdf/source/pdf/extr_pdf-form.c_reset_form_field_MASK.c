
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_4__ {int dirty; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;




 int VAR_4 ;
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(fz_context *VAR_5, pdf_document *VAR_6, pdf_obj *VAR_7)
{







 pdf_obj *VAR_8 = FUNC_2(VAR_5, VAR_7, FUNC_0(VAR_1));
 pdf_obj *VAR_9 = FUNC_2(VAR_5, VAR_7, FUNC_0(VAR_2));

 if (VAR_8)
  FUNC_4(VAR_5, VAR_7, FUNC_0(VAR_4), VAR_8);
 else
  FUNC_1(VAR_5, VAR_7, FUNC_0(VAR_4));

 if (VAR_9 == ((void*)0))
 {




  switch (FUNC_7(VAR_5, VAR_7))
  {
  case 130:
  case 129:
   {
    pdf_obj *VAR_10 = FUNC_3(VAR_5, VAR_7, FUNC_0(VAR_4));
    if (!VAR_10)
     VAR_10 = FUNC_0(VAR_3);
    FUNC_4(VAR_5, VAR_7, FUNC_0(VAR_0), VAR_10);
   }
   FUNC_6(VAR_5, VAR_7);
   break;

  case 131:
  case 128:

   break;

  default:
   FUNC_6(VAR_5, VAR_7);
   break;
  }
 }

 if (FUNC_5(VAR_5, VAR_6, VAR_7))
  VAR_6->dirty = 1;
}
