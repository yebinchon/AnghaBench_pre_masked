
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct compressor_data {int sidechain_check_time; int sidechain_update_mutex; int * weak_sidechain; scalar_t__ sidechain_name; } ;
typedef int obs_weak_source_t ;
typedef int obs_source_t ;


 int FUNC_0 (float) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,struct compressor_data*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_11 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_12(void *VAR_1, float VAR_2)
{
 struct compressor_data *VAR_3 = VAR_1;
 char *VAR_4 = ((void*)0);

 FUNC_9(&VAR_3->sidechain_update_mutex);

 if (VAR_3->sidechain_name && !VAR_3->weak_sidechain) {
  uint64_t VAR_5 = FUNC_8();

  if (VAR_5 - VAR_3->sidechain_check_time > 3000000000) {
   VAR_4 = FUNC_2(VAR_3->sidechain_name);
   VAR_3->sidechain_check_time = VAR_5;
  }
 }

 FUNC_10(&VAR_3->sidechain_update_mutex);

 if (VAR_4) {
  obs_source_t *VAR_6 =
   VAR_4 && *VAR_4 ? FUNC_3(VAR_4)
           : ((void*)0);
  obs_weak_source_t *VAR_7 =
   VAR_6 ? FUNC_5(VAR_6)
      : ((void*)0);

  FUNC_9(&VAR_3->sidechain_update_mutex);

  if (VAR_3->sidechain_name &&
      FUNC_11(VAR_3->sidechain_name, VAR_4) == 0) {
   VAR_3->weak_sidechain = VAR_7;
   VAR_7 = ((void*)0);
  }

  FUNC_10(&VAR_3->sidechain_update_mutex);

  if (VAR_6) {
   FUNC_4(
    VAR_6, VAR_0, VAR_3);

   FUNC_7(VAR_7);
   FUNC_6(VAR_6);
  }

  FUNC_1(VAR_4);
 }

 FUNC_0(VAR_2);
}
