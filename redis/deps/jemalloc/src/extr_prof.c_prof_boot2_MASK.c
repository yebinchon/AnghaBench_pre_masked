
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;
typedef int malloc_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int ,int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ,int ) ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_7 (int *,char*,int ,int ) ;
 int VAR_19 ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 char* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int * VAR_43 ;
 int FUNC_9 (int *) ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_10 (int *) ;

bool
FUNC_11(tsd_t *VAR_46) {
 FUNC_5(VAR_16);

 if (VAR_24) {
  unsigned VAR_47;

  VAR_18 = VAR_23;

  VAR_30 = VAR_25;
  if (FUNC_7(&VAR_31, "prof_active",
      VAR_4, VAR_19)) {
   return 1;
  }

  VAR_39 = VAR_27;
  if (FUNC_7(&VAR_38, "prof_gdump",
      VAR_9, VAR_19)) {
   return 1;
  }

  VAR_40 = VAR_29;
  if (FUNC_7(&VAR_41,
      "prof_thread_active_init",
      VAR_13,
      VAR_19)) {
   return 1;
  }

  if (FUNC_6(VAR_46, &VAR_14, VAR_1, VAR_33,
      VAR_34)) {
   return 1;
  }
  if (FUNC_7(&VAR_15, "prof_bt2gctx",
      VAR_5, VAR_19)) {
   return 1;
  }

  FUNC_9(&VAR_44);
  if (FUNC_7(&VAR_45, "prof_tdatas",
      VAR_12, VAR_19)) {
   return 1;
  }

  VAR_20 = 0;
  if (FUNC_7(&VAR_21, "prof_next_thr_uid",
      VAR_10, VAR_19)) {
   return 1;
  }

  if (FUNC_7(&VAR_36, "prof_dump_seq",
      VAR_7, VAR_19)) {
   return 1;
  }
  if (FUNC_7(&VAR_35, "prof_dump",
      VAR_6, VAR_19)) {
   return 1;
  }

  if (VAR_26 && VAR_28[0] != '\0' &&
      FUNC_2(VAR_37) != 0) {
   FUNC_8("<jemalloc>: Error in atexit()\n");
   if (VAR_22) {
    FUNC_1();
   }
  }

  VAR_17 = (malloc_mutex_t *)FUNC_4(FUNC_10(VAR_46),
      FUNC_3(), VAR_2 * sizeof(malloc_mutex_t),
      VAR_0);
  if (VAR_17 == ((void*)0)) {
   return 1;
  }
  for (VAR_47 = 0; VAR_47 < VAR_2; VAR_47++) {
   if (FUNC_7(&VAR_17[VAR_47], "prof_gctx",
       VAR_8,
       VAR_19)) {
    return 1;
   }
  }

  VAR_43 = (malloc_mutex_t *)FUNC_4(FUNC_10(VAR_46),
      FUNC_3(), VAR_3 * sizeof(malloc_mutex_t),
      VAR_0);
  if (VAR_43 == ((void*)0)) {
   return 1;
  }
  for (VAR_47 = 0; VAR_47 < VAR_3; VAR_47++) {
   if (FUNC_7(&VAR_43[VAR_47], "prof_tdata",
       VAR_11,
       VAR_19)) {
    return 1;
   }
  }
 }
 VAR_32 = 1;

 return 0;
}
