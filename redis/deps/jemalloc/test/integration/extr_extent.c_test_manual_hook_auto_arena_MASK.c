
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hooks_mib ;
typedef int extent_hooks_t ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,void*,size_t*,int *,int ) ;
 int FUNC_4 (size_t*,size_t,void*,size_t*,void*,size_t) ;
 int FUNC_5 (char*,size_t*,size_t*) ;

__attribute__((used)) static void
FUNC_6(void) {
 unsigned VAR_1;
 size_t VAR_2, VAR_3, VAR_4;
 size_t VAR_5[3];
 size_t VAR_6;
 extent_hooks_t *VAR_7, *VAR_8;

 FUNC_2();

 VAR_4 = sizeof(unsigned);

 FUNC_1(FUNC_3("opt.narenas", (void *)&VAR_1, &VAR_4, ((void*)0), 0),
     0, "Unexpected mallctl() failure");
 if (VAR_1 == 1) {
  return;
 }


 VAR_6 = sizeof(VAR_5)/sizeof(size_t);
 FUNC_1(FUNC_5("arena.0.extent_hooks", VAR_5,
     &VAR_6), 0, "Unexpected mallctlnametomib() failure");
 VAR_5[1] = 1;
 VAR_2 = sizeof(extent_hooks_t *);
 VAR_7 = &VAR_0;
 VAR_3 = sizeof(extent_hooks_t *);
 FUNC_1(FUNC_4(VAR_5, VAR_6, (void *)&VAR_8,
     &VAR_2, (void *)&VAR_7, VAR_3), 0,
     "Unexpected extent_hooks error");
 static bool VAR_9 = 0;
 if (VAR_8 != &VAR_0) {
  FUNC_0(VAR_9, 0,
      "Expected auto arena 1 created only once.");
  VAR_9 = 1;
 }
}
