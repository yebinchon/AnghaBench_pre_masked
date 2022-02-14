
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int pos; } ;
struct mime_header_encoder_data {int status1; size_t linehead; size_t firstindent; size_t encnamelen; TYPE_1__* block_filter; TYPE_3__ tmpdev; TYPE_3__ outdev; int lwsplen; int lwsp; } ;
struct TYPE_10__ {int (* filter_function ) (int,TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(int VAR_0, void *VAR_1)
{
 static int VAR_2[256] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0, 1, 0, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
 };

 size_t VAR_3;
 struct mime_header_encoder_data *VAR_4 = (struct mime_header_encoder_data *)VAR_1;

 switch (VAR_4->status1) {
 case 11:
  (*VAR_4->block_filter->filter_function)(VAR_0, VAR_4->block_filter);
  break;

 default:
  if (VAR_0 <= 0x00ff && !VAR_2[(VAR_0 & 0xff)]) {
   FUNC_2(VAR_0, &VAR_4->tmpdev);
   VAR_4->status1 = 1;
  } else if (VAR_4->status1 == 0 && VAR_0 == 0x20) {
   FUNC_2(VAR_0, &VAR_4->tmpdev);
  } else {
   if (VAR_4->tmpdev.pos < 74 && VAR_0 == 0x20) {
    VAR_3 = VAR_4->outdev.pos - VAR_4->linehead + VAR_4->tmpdev.pos + VAR_4->firstindent;
    if (VAR_3 > 74) {
     FUNC_4(&VAR_4->outdev, VAR_4->lwsp, VAR_4->lwsplen);
     VAR_4->linehead = VAR_4->outdev.pos;
     VAR_4->firstindent = 0;
    } else if (VAR_4->outdev.pos > 0) {
     FUNC_2(0x20, &VAR_4->outdev);
    }
    FUNC_1(&VAR_4->outdev, &VAR_4->tmpdev);
    FUNC_3(&VAR_4->tmpdev);
    VAR_4->status1 = 0;
   } else {
    VAR_3 = VAR_4->outdev.pos - VAR_4->linehead + VAR_4->encnamelen + VAR_4->firstindent;
    if (VAR_3 > 60) {
     FUNC_4(&VAR_4->outdev, VAR_4->lwsp, VAR_4->lwsplen);
     VAR_4->linehead = VAR_4->outdev.pos;
     VAR_4->firstindent = 0;
    } else if (VAR_4->outdev.pos > 0) {
     FUNC_2(0x20, &VAR_4->outdev);
    }
    FUNC_0(VAR_4->block_filter, &VAR_4->tmpdev);
    FUNC_3(&VAR_4->tmpdev);
    (*VAR_4->block_filter->filter_function)(VAR_0, VAR_4->block_filter);
    VAR_4->status1 = 11;
   }
  }
  break;
 }

 return VAR_0;
}
