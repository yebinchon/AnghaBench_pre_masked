
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char*) ;
 void* FUNC_1 (size_t,int) ;

__attribute__((used)) static void *
FUNC_2(size_t VAR_0, int VAR_1) {
 void *VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2, "Unexpected mallocx() failure");
 return VAR_2;
}
