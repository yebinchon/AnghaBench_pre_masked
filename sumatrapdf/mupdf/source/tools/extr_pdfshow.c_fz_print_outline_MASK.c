
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_output ;
struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* down; int uri; int title; scalar_t__ is_open; } ;
typedef TYPE_1__ fz_outline ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char) ;
 int FUNC_1 (int *,int *,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_output *VAR_1, fz_outline *VAR_2, int VAR_3)
{
 int VAR_4;
 while (VAR_2)
 {
  if (VAR_2->down)
   FUNC_0(VAR_0, VAR_1, VAR_2->is_open ? '-' : '+');
  else
   FUNC_0(VAR_0, VAR_1, '|');

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_0(VAR_0, VAR_1, '\t');
  FUNC_1(VAR_0, VAR_1, "%q\t%s\n", VAR_2->title, VAR_2->uri);
  if (VAR_2->down)
   FUNC_2(VAR_0, VAR_1, VAR_2->down, VAR_3 + 1);
  VAR_2 = VAR_2->next;
 }
}
