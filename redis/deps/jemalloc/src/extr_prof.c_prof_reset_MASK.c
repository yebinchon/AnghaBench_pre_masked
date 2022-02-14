
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int tsd_t ;
typedef int prof_tdata_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_2 ;
 int * FUNC_4 (int *,int *,int ,void*) ;
 int * FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

void
FUNC_7(tsd_t *VAR_5, size_t VAR_6) {
 prof_tdata_t *VAR_7;

 FUNC_0(VAR_6 < (sizeof(uint64_t) << 3));

 FUNC_1(FUNC_6(VAR_5), &VAR_1);
 FUNC_1(FUNC_6(VAR_5), &VAR_4);

 VAR_0 = VAR_6;

 VAR_7 = ((void*)0);
 do {
  prof_tdata_t *VAR_8 = FUNC_4(&VAR_3, VAR_7,
      VAR_2, (void *)VAR_5);
  if (VAR_8 != ((void*)0)) {
   VAR_7 = FUNC_5(&VAR_3, VAR_8);
   FUNC_3(VAR_5, VAR_8, 0);
  } else {
   VAR_7 = ((void*)0);
  }
 } while (VAR_7 != ((void*)0));

 FUNC_2(FUNC_6(VAR_5), &VAR_4);
 FUNC_2(FUNC_6(VAR_5), &VAR_1);
}
