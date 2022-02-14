
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * page; } ;
typedef TYPE_1__ page_objects_list ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, page_objects_list *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->len;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
 {
  FUNC_1(VAR_0, VAR_1->page[VAR_2]);
  FUNC_0(VAR_0, VAR_1->page[VAR_2]);
 }
}
