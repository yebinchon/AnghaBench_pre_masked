
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ff_decoder {double start_pts; double predicted_pts; TYPE_2__* codec; TYPE_1__* stream; scalar_t__ first_frame; } ;
typedef double int64_t ;
struct TYPE_9__ {long double repeat_pict; } ;
struct TYPE_8__ {int time_base; } ;
struct TYPE_7__ {int time_base; } ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (TYPE_3__*) ;
 double FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,char*) ;
 double FUNC_3 (int ) ;

double FUNC_4(struct ff_decoder *VAR_2,
                                      AVFrame *VAR_3)
{


 double VAR_4;
 int64_t VAR_5;
 double VAR_6;




 VAR_5 = FUNC_0(VAR_3);

 if (VAR_5 != VAR_1) {

  if (VAR_5 < VAR_2->start_pts) {
   if (VAR_2->first_frame) {
    VAR_5 = VAR_2->start_pts;
   } else {
    FUNC_2(((void*)0), VAR_0,
           "multiple pts < "
           "start_pts; setting start pts "
           "to 0");
    VAR_2->start_pts = 0;
   }
  }

  VAR_5 -= VAR_2->start_pts;



  VAR_6 = VAR_5 * FUNC_3(VAR_2->stream->time_base);
  VAR_2->predicted_pts = VAR_6;
 } else {
  VAR_6 = VAR_2->predicted_pts;
 }



 VAR_4 = FUNC_1(VAR_3) *
                         FUNC_3(VAR_2->codec->time_base);

 VAR_4 +=
         VAR_3->repeat_pict / (1.0L / VAR_4);

 VAR_2->predicted_pts += VAR_4;

 return VAR_6;
}
