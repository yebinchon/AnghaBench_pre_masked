
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct game_capture {int retrying; void** texture_mutexes; } ;
typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (struct game_capture*,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static inline bool FUNC_4(struct game_capture *VAR_2)
{
 VAR_2->texture_mutexes[0] = FUNC_2(VAR_2, VAR_0);
 VAR_2->texture_mutexes[1] = FUNC_2(VAR_2, VAR_1);

 if (!VAR_2->texture_mutexes[0] || !VAR_2->texture_mutexes[1]) {
  DWORD VAR_3 = FUNC_0();
  if (VAR_3 == 2) {
   if (!VAR_2->retrying) {
    VAR_2->retrying = 2;
    FUNC_1("hook not loaded yet, retrying..");
   }
  } else {
   FUNC_3("failed to open texture mutexes: %lu",
        FUNC_0());
  }
  return 0;
 }

 return 1;
}
