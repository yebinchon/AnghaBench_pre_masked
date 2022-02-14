
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int img_; int alpha_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_12__ {int * bytes; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_13__ {int tag; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int const,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__ const* const,TYPE_2__*,TYPE_2__*,int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__* const) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static WebPMuxError FUNC_3(
    const WebPData* const VAR_6, int VAR_7, WebPMuxImage* const VAR_8) {
  int VAR_9 = 0;
  WebPData VAR_10, VAR_11;
  WebPMuxError VAR_12 = FUNC_1(VAR_6, &VAR_10, &VAR_11, &VAR_9);
  const int VAR_13 =
      VAR_9 ? VAR_5[VAR_2].tag : VAR_5[VAR_1].tag;
  if (VAR_12 != VAR_4) return VAR_12;
  if (VAR_11.bytes != ((void*)0)) {
    VAR_12 = FUNC_0(&VAR_11, VAR_7, VAR_5[VAR_0].tag,
                             &VAR_8->alpha_);
    if (VAR_12 != VAR_4) return VAR_12;
  }
  VAR_12 = FUNC_0(&VAR_10, VAR_7, VAR_13, &VAR_8->img_);
  if (VAR_12 != VAR_4) return VAR_12;
  return FUNC_2(VAR_8) ? VAR_4 : VAR_3;
}
