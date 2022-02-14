
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WebPMuxError ;
typedef int WebPMuxAnimParams ;
typedef int WebPMux ;
struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ WebPData ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const* const,int *) ;
 scalar_t__ FUNC_5 (int const* const,int ,TYPE_1__*) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ,TYPE_1__*,int) ;
 int * VAR_2 ;

__attribute__((used)) static WebPMux* FUNC_9(const WebPMux* const VAR_3) {
  WebPMux* VAR_4 = FUNC_6();
  WebPMuxAnimParams VAR_5;
  WebPMuxError VAR_6;
  int VAR_7;
  int VAR_8 = 1;

  if (VAR_4 == ((void*)0)) return ((void*)0);

  VAR_6 = FUNC_4(VAR_3, &VAR_5);
  if (VAR_6 == VAR_1) {
    VAR_6 = FUNC_7(VAR_4, &VAR_5);
    if (VAR_6 != VAR_1) {
      FUNC_1("Error (%s) handling animation params.\n",
                  FUNC_2(VAR_6), VAR_0);
    }
  } else {

  }

  for (VAR_7 = 1; VAR_7 <= 3; ++VAR_7) {
    WebPData VAR_9;
    VAR_6 = FUNC_5(VAR_3, VAR_2[VAR_7], &VAR_9);
    if (VAR_6 == VAR_1 && VAR_9.size > 0) {
      VAR_6 = FUNC_8(VAR_4, VAR_2[VAR_7], &VAR_9, 1);
      if (VAR_6 != VAR_1) {
        FUNC_0("Error transferring metadata in DuplicateMux().", VAR_0);
      }
    }
  }

 End:
  if (!VAR_8) {
    FUNC_3(VAR_4);
    VAR_4 = ((void*)0);
  }
  return VAR_4;
}
