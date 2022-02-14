
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t mutex_prof_arena_ind_t ;
typedef int emitter_t ;
typedef int emitter_row_t ;
typedef int emitter_col_t ;


 char** VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,char*,int *,int *,int *) ;
 int FUNC_6 (unsigned int,size_t,char const*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_7(emitter_t *VAR_4, unsigned VAR_5) {
 emitter_row_t VAR_6;
 emitter_col_t VAR_7;
 emitter_col_t VAR_8[VAR_3];
 emitter_col_t VAR_9[VAR_2];

 FUNC_2(&VAR_6);
 FUNC_5(&VAR_6, "", &VAR_7, VAR_8, VAR_9);

 FUNC_0(VAR_4, "mutexes");
 FUNC_3(VAR_4, &VAR_6);

 for (mutex_prof_arena_ind_t VAR_10 = 0; VAR_10 < VAR_1;
     VAR_10++) {
  const char *VAR_11 = VAR_0[VAR_10];
  FUNC_0(VAR_4, VAR_11);
  FUNC_6(VAR_5, VAR_10, VAR_11, &VAR_7, VAR_8,
      VAR_9);
  FUNC_4(VAR_4, &VAR_6, VAR_8, VAR_9);
  FUNC_1(VAR_4);
 }
 FUNC_1(VAR_4);
}
