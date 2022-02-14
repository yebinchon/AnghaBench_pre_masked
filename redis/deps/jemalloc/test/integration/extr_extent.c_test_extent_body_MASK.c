
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int purge_mib ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int,int,char*) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (void*,char*) ;
 int FUNC_4 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (void*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*,void*,size_t*,int *,int ) ;
 int FUNC_7 (size_t*,size_t,int *,int *,int *,int ) ;
 int FUNC_8 (char*,size_t*,size_t*) ;
 void* FUNC_9 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t FUNC_10 (void*,size_t,int ,int) ;

__attribute__((used)) static void
FUNC_11(unsigned VAR_14) {
 void *VAR_15;
 size_t VAR_16, VAR_17, VAR_18, VAR_19;
 size_t VAR_20[3];
 size_t VAR_21;
 int VAR_22;
 bool VAR_23, VAR_24, VAR_25;

 VAR_22 = FUNC_0(VAR_14) | VAR_0;


 VAR_19 = sizeof(size_t);
 FUNC_2(FUNC_6("arenas.lextent.0.size", (void *)&VAR_16, &VAR_19, ((void*)0),
     0), 0, "Unexpected arenas.lextent.0.size failure");
 FUNC_2(FUNC_6("arenas.lextent.1.size", (void *)&VAR_17, &VAR_19, ((void*)0),
     0), 0, "Unexpected arenas.lextent.1.size failure");
 FUNC_2(FUNC_6("arenas.lextent.2.size", (void *)&VAR_18, &VAR_19, ((void*)0),
     0), 0, "Unexpected arenas.lextent.2.size failure");


 VAR_21 = sizeof(VAR_20)/sizeof(size_t);
 FUNC_2(FUNC_8("arena.0.purge", VAR_20, &VAR_21),
     0, "Unexpected mallctlnametomib() failure");
 VAR_20[1] = (size_t)VAR_14;
 VAR_1 = 0;
 VAR_11 = 1;
 VAR_12 = 0;
 VAR_13 = 0;
 VAR_15 = FUNC_9(VAR_16 * 2, VAR_22);
 FUNC_3(VAR_15, "Unexpected mallocx() error");
 FUNC_4(VAR_1, "Expected alloc call");
 VAR_2 = 0;
 VAR_3 = 0;
 VAR_9 = 0;
 VAR_8 = 0;
 VAR_4 = 0;
 VAR_23 = (FUNC_10(VAR_15, VAR_16, 0, VAR_22) == VAR_16);
 FUNC_2(FUNC_7(VAR_20, VAR_21, ((void*)0), ((void*)0), ((void*)0), 0),
     0, "Unexpected arena.%u.purge error", VAR_14);
 if (VAR_23) {
  FUNC_4(VAR_2, "Expected dalloc call");
  FUNC_4(VAR_3, "Expected decommit call");
  FUNC_4(VAR_9 || VAR_8,
      "Expected purge");
 }
 FUNC_4(VAR_4, "Expected split call");
 FUNC_5(VAR_15, VAR_22);
 VAR_12 = 1;


 VAR_12 = 0;
 VAR_13 = 1;
 VAR_15 = FUNC_9(VAR_16 * 2, VAR_22);
 FUNC_3(VAR_15, "Unexpected mallocx() error");
 VAR_6 = 0;
 VAR_5 = 0;
 VAR_4 = 0;
 VAR_10 = 0;
 VAR_7 = 0;
 VAR_24 = (FUNC_10(VAR_15, VAR_16, 0, VAR_22) == VAR_16);
 FUNC_2(FUNC_7(VAR_20, VAR_21, ((void*)0), ((void*)0), ((void*)0), 0),
     0, "Unexpected arena.%u.purge error", VAR_14);
 if (VAR_24) {
  FUNC_4(VAR_10, "Expected split");
 }
 VAR_25 = (FUNC_10(VAR_15, VAR_16 * 2, 0, VAR_22) == VAR_16 * 2);
 if (VAR_10) {
  FUNC_1(VAR_6, VAR_5,
      "Expected decommit/commit match");
 }
 if (VAR_24 && VAR_25) {
  FUNC_4(VAR_7, "Expected merge");
 }
 FUNC_5(VAR_15, VAR_22);
 VAR_12 = 1;
 VAR_13 = 0;


 VAR_15 = FUNC_9(42, VAR_22);
 FUNC_3(VAR_15, "Unexpected mallocx() error");
 FUNC_5(VAR_15, VAR_22);
}
