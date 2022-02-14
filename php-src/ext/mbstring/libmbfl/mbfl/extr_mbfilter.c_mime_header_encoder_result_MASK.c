
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pos; } ;
struct TYPE_12__ {int pos; } ;
struct mime_header_encoder_data {int status1; int linehead; char* lwsp; int lwsplen; TYPE_3__ outdev; scalar_t__ status2; scalar_t__ prevpos; TYPE_5__ tmpdev; TYPE_1__* encod_filter; TYPE_2__* conv2_filter; } ;
typedef int mbfl_string ;
struct TYPE_10__ {int (* filter_flush ) (TYPE_2__*) ;} ;
struct TYPE_9__ {int (* filter_flush ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (int,TYPE_3__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int * FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;

mbfl_string *
FUNC_7(struct mime_header_encoder_data *VAR_0, mbfl_string *VAR_1)
{
 if (VAR_0->status1 >= 10) {
  (*VAR_0->conv2_filter->filter_flush)(VAR_0->conv2_filter);
  (*VAR_0->encod_filter->filter_flush)(VAR_0->encod_filter);
  FUNC_4(&VAR_0->outdev, "\x3f\x3d", 2);
 } else if (VAR_0->tmpdev.pos > 0) {
  if (VAR_0->outdev.pos > 0) {
   if ((VAR_0->outdev.pos - VAR_0->linehead + VAR_0->tmpdev.pos) > 74) {
    FUNC_4(&VAR_0->outdev, VAR_0->lwsp, VAR_0->lwsplen);
   } else {
    FUNC_1(0x20, &VAR_0->outdev);
   }
  }
  FUNC_0(&VAR_0->outdev, &VAR_0->tmpdev);
 }
 FUNC_2(&VAR_0->tmpdev);
 VAR_0->prevpos = 0;
 VAR_0->linehead = 0;
 VAR_0->status1 = 0;
 VAR_0->status2 = 0;

 return FUNC_3(&VAR_0->outdev, VAR_1);
}
