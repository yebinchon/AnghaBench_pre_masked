
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {struct TYPE_5__* data; int shared; int refs; } ;
typedef TYPE_1__ fz_buffer ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_0, fz_buffer *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {
  if (!VAR_1->shared)
   FUNC_1(VAR_0, VAR_1->data);
  FUNC_1(VAR_0, VAR_1);
 }
}
