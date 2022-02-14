
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ start; int len; TYPE_5__* table; int * next; } ;
typedef TYPE_1__ pdf_xref_subsec ;
struct TYPE_9__ {int num_objects; TYPE_1__* subsec; } ;
typedef TYPE_2__ pdf_xref ;
struct TYPE_10__ {size_t xref_base; int max_xref_len; TYPE_2__* xref_sections; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;
struct TYPE_11__ {int * obj; int * stm_buf; scalar_t__ stm_ofs; scalar_t__ num; scalar_t__ gen; scalar_t__ ofs; scalar_t__ type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*,int) ;
 TYPE_5__* FUNC_2 (int *,TYPE_5__*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_1, pdf_document *VAR_2, int VAR_3)
{
 int VAR_4;
 pdf_xref *VAR_5 = &VAR_2->xref_sections[VAR_2->xref_base];
 pdf_xref_subsec *VAR_6;

 FUNC_0(VAR_5 != ((void*)0));
 VAR_6 = VAR_5->subsec;
 FUNC_0(VAR_6->next == ((void*)0) && VAR_6->start == 0 && VAR_6->len == VAR_5->num_objects);
 FUNC_0(VAR_3 > VAR_5->num_objects);

 VAR_6->table = FUNC_2(VAR_1, VAR_6->table, VAR_3, VAR_0);
 for (VAR_4 = VAR_5->num_objects; VAR_4 < VAR_3; VAR_4++)
 {
  VAR_6->table[VAR_4].type = 0;
  VAR_6->table[VAR_4].ofs = 0;
  VAR_6->table[VAR_4].gen = 0;
  VAR_6->table[VAR_4].num = 0;
  VAR_6->table[VAR_4].stm_ofs = 0;
  VAR_6->table[VAR_4].stm_buf = ((void*)0);
  VAR_6->table[VAR_4].obj = ((void*)0);
 }
 VAR_5->num_objects = VAR_3;
 VAR_6->len = VAR_3;
 if (VAR_2->max_xref_len < VAR_3)
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
