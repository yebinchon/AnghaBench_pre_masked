
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ofs_list; int* gen_list; int out; scalar_t__* use_list; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, pdf_write_state *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, VAR_1->out, "%d %d\n", VAR_2, VAR_3 - VAR_2);
 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++)
 {
  if (VAR_1->use_list[VAR_4])
   FUNC_0(VAR_0, VAR_1->out, "%010lu %05d n \n", VAR_1->ofs_list[VAR_4], VAR_1->gen_list[VAR_4]);
  else
   FUNC_0(VAR_0, VAR_1->out, "%010lu %05d f \n", VAR_1->ofs_list[VAR_4], VAR_1->gen_list[VAR_4]);
 }
}
