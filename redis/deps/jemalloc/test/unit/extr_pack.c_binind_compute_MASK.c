
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int size ;
typedef int nbins ;
typedef int mib ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,void*,size_t*,int *,int ) ;
 int FUNC_2 (size_t*,size_t,void*,size_t*,int *,int ) ;
 int FUNC_3 (char*,size_t*,size_t*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static unsigned
FUNC_5(void) {
 size_t VAR_1;
 unsigned VAR_2, VAR_3;

 VAR_1 = sizeof(VAR_2);
 FUNC_0(FUNC_1("arenas.nbins", (void *)&VAR_2, &VAR_1, ((void*)0), 0), 0,
     "Unexpected mallctl failure");

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  size_t VAR_4[4];
  size_t VAR_5 = sizeof(VAR_4)/sizeof(size_t);
  size_t VAR_6;

  FUNC_0(FUNC_3("arenas.bin.0.size", VAR_4,
      &VAR_5), 0, "Unexpected mallctlnametomb failure");
  VAR_4[2] = (size_t)VAR_3;

  VAR_1 = sizeof(VAR_6);
  FUNC_0(FUNC_2(VAR_4, VAR_5, (void *)&VAR_6, &VAR_1, ((void*)0),
      0), 0, "Unexpected mallctlbymib failure");
  if (VAR_6 == VAR_0) {
   return VAR_3;
  }
 }

 FUNC_4("Unable to compute nregs_per_run");
 return 0;
}
