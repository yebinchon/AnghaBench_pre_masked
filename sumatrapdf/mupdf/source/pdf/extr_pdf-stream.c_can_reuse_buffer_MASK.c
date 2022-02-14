
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int obj; int stm_buf; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef int pdf_obj ;
typedef int fz_context ;
struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_2__ fz_compression_params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *,TYPE_2__*) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;

__attribute__((used)) static int
FUNC_8(fz_context *VAR_5, pdf_xref_entry *VAR_6, fz_compression_params *VAR_7)
{
 pdf_obj *VAR_8;
 pdf_obj *VAR_9;

 if (!VAR_6 || !VAR_6->obj || !VAR_6->stm_buf)
  return 0;

 if (VAR_7)
  VAR_7->type = VAR_3;

 VAR_8 = FUNC_4(VAR_5, VAR_6->obj, FUNC_0(VAR_4), FUNC_0(VAR_2));

 if (!VAR_8)
  return 1;

 VAR_9 = FUNC_4(VAR_5, VAR_6->obj, FUNC_0(VAR_1), FUNC_0(VAR_0));
 if (FUNC_5(VAR_5, VAR_8))
 {
  int VAR_10 = FUNC_3(VAR_5, VAR_8);


  if (VAR_10 == 0)
   return 1;

  if (VAR_10 != 1)
   return 0;
  VAR_9 = FUNC_2(VAR_5, VAR_9, 0);
 }
 if (FUNC_7(VAR_5, VAR_8))
  return 1;
 if (!FUNC_6(VAR_5, VAR_8))
  return 0;



 if (!VAR_7)
  return 0;

 FUNC_1(VAR_5, VAR_8, VAR_9, VAR_7);

 return (VAR_7->type == VAR_3) ? 0 : 1;
}
