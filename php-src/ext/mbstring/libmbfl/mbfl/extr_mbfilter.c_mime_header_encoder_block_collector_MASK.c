
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {size_t pos; } ;
struct mime_header_encoder_data {int status2; size_t prevpos; size_t linehead; size_t firstindent; char* lwsp; int lwsplen; char* encname; int encnamelen; TYPE_1__* conv2_filter; TYPE_9__ outdev; TYPE_1__* encod_filter; TYPE_1__* encod_filter_backup; TYPE_1__* conv2_filter_backup; } ;
struct TYPE_12__ {int (* filter_function ) (int,TYPE_1__*) ;int (* filter_flush ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_9__*,char*,int) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (int,TYPE_1__*) ;
 int FUNC_9 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(int VAR_0, void *VAR_1)
{
 size_t VAR_2;
 struct mime_header_encoder_data *VAR_3 = (struct mime_header_encoder_data *)VAR_1;

 switch (VAR_3->status2) {
 case 1:
  VAR_3->prevpos = VAR_3->outdev.pos;
  FUNC_0(VAR_3->conv2_filter, VAR_3->conv2_filter_backup);
  FUNC_0(VAR_3->encod_filter, VAR_3->encod_filter_backup);
  (*VAR_3->conv2_filter->filter_function)(VAR_0, VAR_3->conv2_filter);
  (*VAR_3->conv2_filter->filter_flush)(VAR_3->conv2_filter);
  (*VAR_3->encod_filter->filter_flush)(VAR_3->encod_filter);
  VAR_2 = VAR_3->outdev.pos - VAR_3->linehead + VAR_3->firstindent;
  VAR_3->outdev.pos = VAR_3->prevpos;
  FUNC_0(VAR_3->conv2_filter_backup, VAR_3->conv2_filter);
  FUNC_0(VAR_3->encod_filter_backup, VAR_3->encod_filter);
  if (VAR_2 >= 74) {
   (*VAR_3->conv2_filter->filter_flush)(VAR_3->conv2_filter);
   (*VAR_3->encod_filter->filter_flush)(VAR_3->encod_filter);
   FUNC_1(&VAR_3->outdev, "\x3f\x3d", 2);
   FUNC_1(&VAR_3->outdev, VAR_3->lwsp, VAR_3->lwsplen);
   VAR_3->linehead = VAR_3->outdev.pos;
   VAR_3->firstindent = 0;
   FUNC_1(&VAR_3->outdev, VAR_3->encname, VAR_3->encnamelen);
   VAR_0 = (*VAR_3->conv2_filter->filter_function)(VAR_0, VAR_3->conv2_filter);
  } else {
   VAR_0 = (*VAR_3->conv2_filter->filter_function)(VAR_0, VAR_3->conv2_filter);
  }
  break;

 default:
  FUNC_1(&VAR_3->outdev, VAR_3->encname, VAR_3->encnamelen);
  VAR_0 = (*VAR_3->conv2_filter->filter_function)(VAR_0, VAR_3->conv2_filter);
  VAR_3->status2 = 1;
  break;
 }

 return VAR_0;
}
