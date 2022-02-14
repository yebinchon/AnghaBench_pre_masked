
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* footer; int * footers; } ;
typedef TYPE_2__ printTableContent ;
struct TYPE_5__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__* const,char const*) ;

void
FUNC_3(printTableContent *const VAR_0, const char *VAR_1)
{
 if (VAR_0->footers != ((void*)0))
 {
  FUNC_0(VAR_0->footer->data);
  VAR_0->footer->data = FUNC_1(VAR_1);
 }
 else
  FUNC_2(VAR_0, VAR_1);
}
