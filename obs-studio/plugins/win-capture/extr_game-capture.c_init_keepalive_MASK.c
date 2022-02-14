
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct game_capture {int keepalive_mutex; int process_id; } ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int,char*,int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static inline bool FUNC_4(struct game_capture *VAR_1)
{
 wchar_t VAR_2[64];
 FUNC_2(VAR_2, 64, L"%s%lu", VAR_0,
     VAR_1->process_id);

 VAR_1->keepalive_mutex = FUNC_0(((void*)0), 0, VAR_2);
 if (!VAR_1->keepalive_mutex) {
  FUNC_3("Failed to create keepalive mutex: %lu", FUNC_1());
  return 0;
 }

 return 1;
}
