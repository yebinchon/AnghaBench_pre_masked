
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int muzzy_decay_ms ;
typedef int mib ;
typedef int dirty_decay_ms ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,void*,size_t*,int *,int ) ;
 int FUNC_2 (size_t*,size_t,int *,int *,void*,int) ;
 int FUNC_3 (char*,size_t*,size_t*) ;

__attribute__((used)) static unsigned
FUNC_4(ssize_t VAR_0, ssize_t VAR_1) {
 unsigned VAR_2;
 size_t VAR_3 = sizeof(unsigned);
 FUNC_0(FUNC_1("arenas.create", (void *)&VAR_2, &VAR_3, ((void*)0), 0),
     0, "Unexpected mallctl() failure");
 size_t VAR_4[3];
 size_t VAR_5 = sizeof(VAR_4)/sizeof(size_t);

 FUNC_0(FUNC_3("arena.0.dirty_decay_ms", VAR_4, &VAR_5),
     0, "Unexpected mallctlnametomib() failure");
 VAR_4[1] = (size_t)VAR_2;
 FUNC_0(FUNC_2(VAR_4, VAR_5, ((void*)0), ((void*)0),
     (void *)&VAR_0, sizeof(VAR_0)), 0,
     "Unexpected mallctlbymib() failure");

 FUNC_0(FUNC_3("arena.0.muzzy_decay_ms", VAR_4, &VAR_5),
     0, "Unexpected mallctlnametomib() failure");
 VAR_4[1] = (size_t)VAR_2;
 FUNC_0(FUNC_2(VAR_4, VAR_5, ((void*)0), ((void*)0),
     (void *)&VAR_1, sizeof(VAR_1)), 0,
     "Unexpected mallctlbymib() failure");

 return VAR_2;
}
