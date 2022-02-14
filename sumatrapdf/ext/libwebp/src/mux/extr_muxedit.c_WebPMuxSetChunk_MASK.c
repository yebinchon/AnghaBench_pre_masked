
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ WebPMuxError ;
typedef int WebPMux ;
struct TYPE_4__ {scalar_t__ size; int * bytes; } ;
typedef TYPE_1__ WebPData ;


 int FUNC_0 (char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__ const*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

WebPMuxError FUNC_3(WebPMux* VAR_4, const char VAR_5[4],
                             const WebPData* VAR_6, int VAR_7) {
  uint32_t VAR_8;
  WebPMuxError VAR_9;
  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0) ||
      VAR_6->bytes == ((void*)0) || VAR_6->size > VAR_0) {
    return VAR_1;
  }
  VAR_8 = FUNC_0(VAR_5);


  VAR_9 = FUNC_1(VAR_4, VAR_8);
  if (VAR_9 != VAR_3 && VAR_9 != VAR_2) return VAR_9;


  return FUNC_2(VAR_4, VAR_8, VAR_6, VAR_7);
}
