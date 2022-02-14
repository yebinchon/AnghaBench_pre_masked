
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ofs_list; int* gen_list; scalar_t__* use_list; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;
typedef int fz_buffer ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, pdf_write_state *VAR_2, pdf_obj *VAR_3, fz_buffer *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_0, VAR_3, VAR_5);
 FUNC_1(VAR_0, VAR_3, VAR_6 - VAR_5);
 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++)
 {
  FUNC_0(VAR_0, VAR_4, VAR_2->use_list[VAR_7] ? 1 : 0);
  FUNC_0(VAR_0, VAR_4, VAR_2->ofs_list[VAR_7]>>24);
  FUNC_0(VAR_0, VAR_4, VAR_2->ofs_list[VAR_7]>>16);
  FUNC_0(VAR_0, VAR_4, VAR_2->ofs_list[VAR_7]>>8);
  FUNC_0(VAR_0, VAR_4, VAR_2->ofs_list[VAR_7]);
  FUNC_0(VAR_0, VAR_4, VAR_2->gen_list[VAR_7]);
 }
}
