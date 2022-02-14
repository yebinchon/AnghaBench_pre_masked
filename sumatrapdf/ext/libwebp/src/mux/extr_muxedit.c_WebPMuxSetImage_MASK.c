
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_6__ {int * images_; } ;
typedef TYPE_1__ WebPMux ;
struct TYPE_7__ {scalar_t__ size; int * bytes; } ;
typedef TYPE_2__ WebPData ;


 int FUNC_0 (int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*,int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

WebPMuxError FUNC_5(WebPMux* VAR_3, const WebPData* VAR_4,
                             int VAR_5) {
  WebPMuxImage VAR_6;
  WebPMuxError VAR_7;


  if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_4->bytes == ((void*)0) ||
      VAR_4->size > VAR_0) {
    return VAR_1;
  }

  if (VAR_3->images_ != ((void*)0)) {

    FUNC_0(&VAR_3->images_);
  }

  FUNC_1(&VAR_6);
  VAR_7 = FUNC_4(VAR_4, VAR_5, &VAR_6);
  if (VAR_7 != VAR_2) goto Err;


  VAR_7 = FUNC_2(&VAR_6, &VAR_3->images_);
  if (VAR_7 != VAR_2) goto Err;


  return VAR_2;

 Err:
  FUNC_3(&VAR_6);
  return VAR_7;
}
