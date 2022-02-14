
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct parser {int pool; TYPE_3__* head; } ;
struct attribute {char* value; } ;
struct TYPE_4__ {struct attribute* atts; } ;
struct TYPE_5__ {TYPE_1__ d; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef TYPE_3__ fz_xml ;
typedef int fz_context ;


 char* FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,char*) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_0, struct parser *VAR_1, char *VAR_2, char *VAR_3)
{
 fz_xml *VAR_4 = VAR_1->head;
 struct attribute *VAR_5 = VAR_4->u.d.atts;
 char *VAR_6;
 int VAR_7;


 VAR_6 = VAR_5->value = FUNC_0(VAR_0, VAR_1->pool, VAR_3 - VAR_2 + 1);
 while (VAR_2 < VAR_3) {
  if (*VAR_2 == '&') {
   VAR_2 += FUNC_2(&VAR_7, VAR_2);
   VAR_6 += FUNC_1(VAR_6, VAR_7);
  }
  else {
   *VAR_6++ = *VAR_2++;
  }
 }
 *VAR_6 = 0;
}
