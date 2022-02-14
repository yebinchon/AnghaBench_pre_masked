
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* first_char; } ;
typedef TYPE_1__ fz_stext_line ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ fz_stext_char ;



__attribute__((used)) static int FUNC_0(fz_stext_line *VAR_0)
{
 fz_stext_char *VAR_1;
 int VAR_2 = 0;
 for (VAR_1 = VAR_0->first_char; VAR_1; VAR_1 = VAR_1->next)
  ++VAR_2;
 return VAR_2;
}
