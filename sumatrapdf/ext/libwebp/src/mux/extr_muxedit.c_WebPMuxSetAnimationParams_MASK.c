
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_6__ {int loop_count; int bgcolor; } ;
typedef TYPE_1__ WebPMuxAnimParams ;
typedef int WebPMux ;
struct TYPE_7__ {int member_1; int * member_0; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_8__ {int tag; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__ const*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;

WebPMuxError FUNC_4(WebPMux* VAR_7,
                                       const WebPMuxAnimParams* VAR_8) {
  WebPMuxError VAR_9;
  uint8_t VAR_10[VAR_0];
  const WebPData VAR_11 = { VAR_10, &VAR_0 };

  if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) return VAR_3;
  if (VAR_8->loop_count < 0 || VAR_8->loop_count >= VAR_2) {
    return VAR_3;
  }


  VAR_9 = FUNC_0(VAR_7, VAR_6[VAR_1].tag);
  if (VAR_9 != VAR_5 && VAR_9 != VAR_4) return VAR_9;


  FUNC_3(VAR_10, VAR_8->bgcolor);
  FUNC_2(VAR_10 + 4, VAR_8->loop_count);
  return FUNC_1(VAR_7, VAR_6[VAR_1].tag, &VAR_11, 1);
}
