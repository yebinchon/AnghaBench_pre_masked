
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_len; TYPE_3__* page_object_lists; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int fz_context ;
struct TYPE_6__ {int len; int * page; } ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,TYPE_3__**,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_write_state *VAR_1, int VAR_2, int VAR_3)
{
 FUNC_2(VAR_0, &VAR_1->page_object_lists, VAR_2+1);
 if (VAR_3 >= VAR_1->list_len)
  FUNC_0(VAR_0, VAR_1, VAR_3);
 if (VAR_1->page_object_lists->len < VAR_2+1)
  VAR_1->page_object_lists->len = VAR_2+1;
 FUNC_1(VAR_0, &VAR_1->page_object_lists->page[VAR_2], VAR_3);
}
