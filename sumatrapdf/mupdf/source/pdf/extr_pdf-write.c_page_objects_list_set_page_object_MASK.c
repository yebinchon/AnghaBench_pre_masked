
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int list_len; TYPE_4__* page_object_lists; } ;
typedef TYPE_2__ pdf_write_state ;
typedef int fz_context ;
struct TYPE_8__ {TYPE_1__** page; } ;
struct TYPE_6__ {int page_object_number; } ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_4__**,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_write_state *VAR_1, int VAR_2, int VAR_3)
{
 FUNC_1(VAR_0, &VAR_1->page_object_lists, VAR_2+1);
 if (VAR_3 >= VAR_1->list_len)
  FUNC_0(VAR_0, VAR_1, VAR_3);
 VAR_1->page_object_lists->page[VAR_2]->page_object_number = VAR_3;
}
