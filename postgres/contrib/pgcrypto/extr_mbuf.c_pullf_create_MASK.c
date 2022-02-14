
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int buflen; scalar_t__ pos; int * buf; struct TYPE_9__* src; void* priv; TYPE_1__ const* op; } ;
struct TYPE_8__ {int (* init ) (void**,void*,TYPE_2__*) ;} ;
typedef TYPE_1__ PullFilterOps ;
typedef TYPE_2__ PullFilter ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void**,void*,TYPE_2__*) ;

int
FUNC_3(PullFilter **VAR_0, const PullFilterOps *VAR_1, void *VAR_2, PullFilter *VAR_3)
{
 PullFilter *VAR_4;
 void *VAR_5;
 int VAR_6;

 if (VAR_1->init != ((void*)0))
 {
  VAR_6 = VAR_1->init(&VAR_5, VAR_2, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }
 else
 {
  VAR_5 = VAR_2;
  VAR_6 = 0;
 }

 VAR_4 = FUNC_1(sizeof(*VAR_4));
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->buflen = VAR_6;
 VAR_4->op = VAR_1;
 VAR_4->priv = VAR_5;
 VAR_4->src = VAR_3;
 if (VAR_4->buflen > 0)
 {
  VAR_4->buf = FUNC_1(VAR_4->buflen);
  VAR_4->pos = 0;
 }
 else
 {
  VAR_4->buf = ((void*)0);
  VAR_4->pos = 0;
 }
 *VAR_0 = VAR_4;
 return 0;
}
