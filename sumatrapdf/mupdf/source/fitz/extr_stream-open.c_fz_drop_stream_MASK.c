
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; int (* drop ) (int *,int ) ;int refs; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(fz_context *VAR_0, fz_stream *VAR_1)
{
 if (FUNC_0(VAR_0, VAR_1, &VAR_1->refs))
 {
  if (VAR_1->drop)
   VAR_1->drop(VAR_0, VAR_1->state);
  FUNC_1(VAR_0, VAR_1);
 }
}
