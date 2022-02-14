
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float duration; } ;
struct TYPE_6__ {int transitions_enabled; scalar_t__ duration; scalar_t__ in_transit; TYPE_5__ transition; int * new_image; int * old_image; int * image; int ctx; int imgh; int imgw; scalar_t__ start_time; } ;
typedef TYPE_1__ pdfapp_t ;
typedef scalar_t__ clock_t ;


 float VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int *,int *,int,TYPE_5__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(pdfapp_t *VAR_1)
{
 clock_t VAR_2;
 float VAR_3;
 int VAR_4;

 VAR_1->transitions_enabled = 1;
 if (!VAR_1->in_transit)
  return;
 VAR_2 = FUNC_0();
 VAR_3 = (float)(VAR_2 - VAR_1->start_time) / VAR_0;
 VAR_4 = VAR_3 * 256 / VAR_1->transition.duration;
 if (VAR_4 >= 256)
 {

  FUNC_1(VAR_1->ctx, VAR_1->image);
  VAR_1->image = VAR_1->new_image;
  VAR_1->new_image = ((void*)0);
  VAR_1->imgw = FUNC_4(VAR_1->ctx, VAR_1->image);
  VAR_1->imgh = FUNC_3(VAR_1->ctx, VAR_1->image);
  FUNC_1(VAR_1->ctx, VAR_1->old_image);
  VAR_1->old_image = ((void*)0);
  if (VAR_1->duration != 0)
   FUNC_5(VAR_1, VAR_1->duration);
 }
 else
  FUNC_2(VAR_1->ctx, VAR_1->image, VAR_1->old_image, VAR_1->new_image, VAR_4, &VAR_1->transition);
 FUNC_6(VAR_1);
 if (VAR_4 >= 256)
 {

  VAR_1->in_transit = 0;
 }
}
