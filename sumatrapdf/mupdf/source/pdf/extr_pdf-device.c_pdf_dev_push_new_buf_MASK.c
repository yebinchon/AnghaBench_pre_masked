
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int num_gstates; int max_gstates; TYPE_5__* gstates; } ;
typedef TYPE_1__ pdf_device ;
typedef int fz_context ;
typedef int fz_buffer ;
struct TYPE_10__ {void (* on_pop ) (int *,TYPE_1__*,void*) ;int * buf; void* on_pop_arg; int stroke_state; } ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 TYPE_5__* FUNC_3 (int *,TYPE_5__*,int,int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, pdf_device *VAR_2, fz_buffer *VAR_3, void (*VAR_4)(fz_context*,pdf_device*,void*), void *VAR_5)
{
 if (VAR_2->num_gstates == VAR_2->max_gstates)
 {
  int VAR_6 = VAR_2->max_gstates*2;
  VAR_2->gstates = FUNC_3(VAR_1, VAR_2->gstates, VAR_6, VAR_0);
  VAR_2->max_gstates = VAR_6;
 }
 FUNC_4(&VAR_2->gstates[VAR_2->num_gstates], &VAR_2->gstates[VAR_2->num_gstates-1], sizeof(*VAR_2->gstates));
 FUNC_2(VAR_1, VAR_2->gstates[VAR_2->num_gstates].stroke_state);
 if (VAR_3)
  VAR_2->gstates[VAR_2->num_gstates].buf = VAR_3;
 else
  FUNC_1(VAR_1, VAR_2->gstates[VAR_2->num_gstates].buf);
 VAR_2->gstates[VAR_2->num_gstates].on_pop = VAR_4;
 VAR_2->gstates[VAR_2->num_gstates].on_pop_arg = VAR_5;
 FUNC_0(VAR_1, VAR_2->gstates[VAR_2->num_gstates].buf, "q\n");
 VAR_2->num_gstates++;
}
