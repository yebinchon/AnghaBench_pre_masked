
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WebPMuxError ;
struct TYPE_6__ {int loop_count; int bgcolor; } ;
typedef TYPE_1__ WebPMuxAnimParams ;
typedef int WebPMux ;
struct TYPE_7__ {scalar_t__ size; scalar_t__ bytes; } ;
typedef TYPE_2__ WebPData ;
struct TYPE_8__ {scalar_t__ size; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int const*,int ,int,TYPE_2__*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;

WebPMuxError FUNC_3(const WebPMux* VAR_6,
                                       WebPMuxAnimParams* VAR_7) {
  WebPData VAR_8;
  WebPMuxError VAR_9;

  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) return VAR_3;

  VAR_9 = FUNC_2(VAR_6, VAR_0, 1, &VAR_8);
  if (VAR_9 != VAR_4) return VAR_9;
  if (VAR_8.size < VAR_5[VAR_1].size) return VAR_2;
  VAR_7->bgcolor = FUNC_1(VAR_8.bytes);
  VAR_7->loop_count = FUNC_0(VAR_8.bytes + 4);

  return VAR_4;
}
