
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 void* VAR_2 ;
 void* VAR_3 ;
 unsigned long FUNC_1 () ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (char*,...) ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* FUNC_3 (char*) ;
 void* VAR_14 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 unsigned long* VAR_32 ;
 unsigned long* VAR_33 ;
 unsigned long* VAR_34 ;
 unsigned long* VAR_35 ;
 unsigned long* VAR_36 ;
 unsigned long* VAR_37 ;
 void* VAR_38 ;

int FUNC_11(void)
{
    VAR_2 = FUNC_3("cache");
    VAR_12 = FUNC_3("rss");
    VAR_13 = FUNC_3("rss_huge");
    VAR_7 = FUNC_3("mapped_file");
    VAR_38 = FUNC_3("writeback");
    VAR_3 = FUNC_3("dirty");
    VAR_14 = FUNC_3("swap");
    VAR_10 = FUNC_3("pgpgin");
    VAR_11 = FUNC_3("pgpgout");
    VAR_8 = FUNC_3("pgfault");
    VAR_9 = FUNC_3("pgmajfault");
    VAR_5 = FUNC_3("inactive_anon");
    VAR_0 = FUNC_3("active_anon");
    VAR_6 = FUNC_3("inactive_file");
    VAR_1 = FUNC_3("active_file");
    VAR_31 = FUNC_3("unevictable");
    VAR_4 = FUNC_3("hierarchical_memory_limit");
    VAR_17 = FUNC_3("total_cache");
    VAR_26 = FUNC_3("total_rss");
    VAR_27 = FUNC_3("total_rss_huge");
    VAR_21 = FUNC_3("total_mapped_file");
    VAR_30 = FUNC_3("total_writeback");
    VAR_18 = FUNC_3("total_dirty");
    VAR_28 = FUNC_3("total_swap");
    VAR_24 = FUNC_3("total_pgpgin");
    VAR_25 = FUNC_3("total_pgpgout");
    VAR_22 = FUNC_3("total_pgfault");
    VAR_23 = FUNC_3("total_pgmajfault");
    VAR_19 = FUNC_3("total_inactive_anon");
    VAR_15 = FUNC_3("total_active_anon");
    VAR_20 = FUNC_3("total_inactive_file");
    VAR_16 = FUNC_3("total_active_file");
    VAR_29 = FUNC_3("total_unevictable");

  unsigned long VAR_39, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0, VAR_43 = 0, VAR_44 = 0, VAR_45 = 0, VAR_46;
  unsigned long VAR_47 = 1000000;


  FUNC_0();
  for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_4();
  VAR_40 = FUNC_1();

  FUNC_0();
  for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_4();
  VAR_40 = FUNC_1();

  FUNC_0();
  for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_5();
  VAR_41 = FUNC_1();

  FUNC_0();
  for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_6();
  VAR_42 = FUNC_1();

  FUNC_0();
  for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_7();
  VAR_43 = FUNC_1();

  FUNC_0();
  for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_8();
  VAR_44 = FUNC_1();

    FUNC_0();
    for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_9();
    VAR_45 = FUNC_1();

    FUNC_0();
    for(VAR_39 = 0; VAR_39 <= VAR_47 ;VAR_39++) FUNC_10();
    VAR_46 = FUNC_1();

    for(VAR_39 = 0; VAR_39 < 11 ; VAR_39++)
    FUNC_2("value %lu: %llu %llu %llu %llu %llu %llu\n", VAR_39, VAR_32[VAR_39], VAR_33[VAR_39], VAR_34[VAR_39], VAR_35[VAR_39], VAR_36[VAR_39], VAR_37[VAR_39]);

  FUNC_2("\n\nRESULTS\n");
  FUNC_2("test1() in %lu usecs: if-else-if-else-if, simple strcmp() with system strtoull().\n"
         "test2() in %lu usecs: inline simple_hash() if-else-if-else-if, with system strtoull().\n"
         "test3() in %lu usecs: statement expression simple_hash(), system strtoull().\n"
         "test4() in %lu usecs: inline simple_hash(), if-continue checks, system strtoull().\n"
         "test5() in %lu usecs: inline simple_hash(), if-else-if-else-if, custom strtoull() (netdata default prior to ARL).\n"
         "test6() in %lu usecs: adaptive re-sortable list, system strtoull() (wow!)\n"
         "test7() in %lu usecs: adaptive re-sortable list, custom strtoull() (wow!)\n"
         , VAR_40
         , VAR_41
         , VAR_42
         , VAR_43
         , VAR_44
         , VAR_45
         , VAR_46
         );

}
