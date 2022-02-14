
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t num_gstates; TYPE_1__* gstates; } ;
typedef TYPE_2__ pdf_device ;
struct TYPE_10__ {int (* on_pop ) (int *,TYPE_2__*,void*) ;int buf; void* on_pop_arg; } ;
typedef TYPE_3__ gstate ;
typedef int fz_context ;
struct TYPE_8__ {int buf; int stroke_state; } ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*,void*) ;

__attribute__((used)) static void *
FUNC_5(fz_context *VAR_0, pdf_device *VAR_1)
{
 gstate *VAR_2 = FUNC_0(VAR_1);
 void *VAR_3 = VAR_2->on_pop_arg;

 FUNC_1(VAR_0, VAR_2->buf, "Q\n");
 if (VAR_2->on_pop)
  VAR_2->on_pop(VAR_0, VAR_1, VAR_3);
 VAR_1->num_gstates--;
 FUNC_3(VAR_0, VAR_1->gstates[VAR_1->num_gstates].stroke_state);
 FUNC_2(VAR_0, VAR_1->gstates[VAR_1->num_gstates].buf);
 return VAR_3;
}
