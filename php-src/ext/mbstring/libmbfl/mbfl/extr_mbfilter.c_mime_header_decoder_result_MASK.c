
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mime_header_decoder_data {int status; int outdev; int tmpdev; TYPE_1__* conv2_filter; TYPE_2__* conv1_filter; TYPE_3__* deco_filter; } ;
typedef int mbfl_string ;
struct TYPE_7__ {int (* filter_flush ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int (* filter_flush ) (TYPE_2__*) ;} ;
struct TYPE_5__ {int (* filter_flush ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;

mbfl_string *
FUNC_6(struct mime_header_decoder_data *VAR_0, mbfl_string *VAR_1)
{
 switch (VAR_0->status) {
 case 1:
 case 2:
 case 3:
 case 4:
 case 7:
 case 8:
 case 9:
  FUNC_0(VAR_0->conv1_filter, &VAR_0->tmpdev);
  break;
 case 5:
 case 6:
  (*VAR_0->deco_filter->filter_flush)(VAR_0->deco_filter);
  (*VAR_0->conv1_filter->filter_flush)(VAR_0->conv1_filter);
  break;
 }
 (*VAR_0->conv2_filter->filter_flush)(VAR_0->conv2_filter);
 FUNC_1(&VAR_0->tmpdev);
 VAR_0->status = 0;

 return FUNC_2(&VAR_0->outdev, VAR_1);
}
