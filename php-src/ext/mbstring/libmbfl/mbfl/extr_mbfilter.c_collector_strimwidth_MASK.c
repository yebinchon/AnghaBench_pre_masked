
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pos; } ;
struct collector_strimwidth_data {int status; int outwidth; int width; int outchar; TYPE_2__* decoder; int decoder_backup; TYPE_1__ device; int endpos; int from; } ;
struct TYPE_7__ {int (* filter_function ) (int,TYPE_2__*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int,TYPE_2__*) ;
 int FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 (int,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(int VAR_0, void* VAR_1)
{
 struct collector_strimwidth_data *VAR_2 = (struct collector_strimwidth_data*)VAR_1;

 switch (VAR_2->status) {
 case 10:
  (*VAR_2->decoder->filter_function)(VAR_0, VAR_2->decoder);
  break;
 default:
  if (VAR_2->outchar >= VAR_2->from) {
   VAR_2->outwidth += (FUNC_0(VAR_0) ? 2: 1);

   if (VAR_2->outwidth > VAR_2->width) {
    if (VAR_2->status == 0) {
     VAR_2->endpos = VAR_2->device.pos;
     FUNC_1(VAR_2->decoder, VAR_2->decoder_backup);
    }
    VAR_2->status++;
    (*VAR_2->decoder->filter_function)(VAR_0, VAR_2->decoder);
    VAR_0 = -1;
   } else {
    (*VAR_2->decoder->filter_function)(VAR_0, VAR_2->decoder);
   }
  }
  VAR_2->outchar++;
  break;
 }

 return VAR_0;
}
