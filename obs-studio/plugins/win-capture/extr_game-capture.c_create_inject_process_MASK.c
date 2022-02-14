
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char wchar_t ;
struct game_capture {int injector_process; int process_id; int thread_id; } ;
typedef int si ;
struct TYPE_6__ {int hProcess; int hThread; int member_0; } ;
struct TYPE_5__ {int cb; int member_0; } ;
typedef TYPE_1__ STARTUPINFO ;
typedef TYPE_2__ PROCESS_INFORMATION ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int *,int *,int,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char const*,int ,char**) ;
 int FUNC_7 (char*,int,char*,char*,char*,unsigned long,int ) ;
 int FUNC_8 (struct game_capture*) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static inline bool FUNC_10(struct game_capture *VAR_1,
      const char *VAR_2,
      const char *VAR_3)
{
 wchar_t *VAR_4 = FUNC_5(4096 * sizeof(wchar_t));
 wchar_t *VAR_5;
 wchar_t *VAR_6;
 bool VAR_7 = FUNC_8(VAR_1);
 PROCESS_INFORMATION VAR_8 = {0};
 STARTUPINFO VAR_9 = {0};
 bool VAR_10 = 0;

 FUNC_6(VAR_2, 0, &VAR_5);
 FUNC_6(VAR_3, 0, &VAR_6);

 VAR_9.cb = sizeof(VAR_9);

 FUNC_7(VAR_4, 4096, L"\"%s\" \"%s\" %lu %lu", VAR_5,
   VAR_6, (unsigned long)VAR_7,
   VAR_7 ? VAR_1->thread_id : VAR_1->process_id);

 VAR_10 = !!FUNC_1(VAR_5, VAR_4, ((void*)0), ((void*)0),
       0, VAR_0, ((void*)0), ((void*)0), &VAR_9,
       &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_8.hThread);
  VAR_1->injector_process = VAR_8.hProcess;
 } else {
  FUNC_9("Failed to create inject helper process: %lu",
       FUNC_2());
 }

 FUNC_4(VAR_4);
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 return VAR_10;
}
