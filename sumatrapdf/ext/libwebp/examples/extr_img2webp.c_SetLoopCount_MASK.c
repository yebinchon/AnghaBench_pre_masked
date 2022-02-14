
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_4__ {int loop_count; } ;
typedef TYPE_1__ WebPMuxAnimParams ;
typedef int WebPMux ;
typedef int WebPData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int * const) ;
 scalar_t__ FUNC_1 (int * const,int * const) ;
 int * FUNC_2 (int * const,int) ;
 int FUNC_3 (int * const) ;
 scalar_t__ FUNC_4 (int * const,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int * const,int*) ;
 scalar_t__ FUNC_6 (int * const,TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(int VAR_3, WebPData* const VAR_4) {
  int VAR_5 = 1;
  WebPMuxError VAR_6;
  uint32_t VAR_7;
  WebPMuxAnimParams VAR_8;
  WebPMux* const VAR_9 = FUNC_2(VAR_4, 1);
  if (VAR_9 == ((void*)0)) return 0;

  VAR_6 = FUNC_5(VAR_9, &VAR_7);
  VAR_5 = (VAR_6 == VAR_1);
  if (!VAR_5 || !(VAR_7 & VAR_0)) goto End;

  VAR_6 = FUNC_4(VAR_9, &VAR_8);
  VAR_5 = (VAR_6 == VAR_1);
  if (VAR_5) {
    VAR_8.loop_count = VAR_3;
    VAR_6 = FUNC_6(VAR_9, &VAR_8);
    VAR_5 = (VAR_6 == VAR_1);
  }
  if (VAR_5) {
    FUNC_0(VAR_4);
    VAR_6 = FUNC_1(VAR_9, VAR_4);
    VAR_5 = (VAR_6 == VAR_1);
  }

 End:
  FUNC_3(VAR_9);
  if (!VAR_5) {
    FUNC_7(VAR_2, "Error during loop-count setting\n");
  }
  return VAR_5;
}
