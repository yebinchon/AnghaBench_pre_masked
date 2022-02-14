
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_2__ {int executable; } ;
struct game_capture {TYPE_1__ config; int process_id; } ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char const*,int ,int **) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static inline bool FUNC_8(struct game_capture *VAR_2,
          const char *VAR_3)
{
 wchar_t VAR_4[VAR_0];
 wchar_t *VAR_5;
 wchar_t *VAR_6;
 HANDLE VAR_7;
 int VAR_8;

 FUNC_6(VAR_3, 0, &VAR_5);
 if (!VAR_5) {
  FUNC_7("hook_direct: could not convert string");
  return 0;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_0);
 FUNC_3(VAR_5);

 if (VAR_6 == ((void*)0)) {
  FUNC_7("hook_direct: could not make absolute path");
  return 0;
 }

 VAR_7 = FUNC_5(VAR_1, 0, VAR_2->process_id);
 if (!VAR_7) {
  FUNC_7("hook_direct: could not open process: %s (%lu)",
       VAR_2->config.executable, FUNC_1());
  return 0;
 }

 VAR_8 = FUNC_4(VAR_7, VAR_4);
 FUNC_0(VAR_7);

 if (VAR_8 != 0) {
  FUNC_7("hook_direct: inject failed: %d", VAR_8);
  return 0;
 }

 return 1;
}
