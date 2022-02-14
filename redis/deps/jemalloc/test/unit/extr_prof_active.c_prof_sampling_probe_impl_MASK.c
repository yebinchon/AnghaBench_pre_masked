
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (int ,size_t,char*,char const*,int) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(bool VAR_0, const char *VAR_1, int VAR_2) {
 void *VAR_3;
 size_t VAR_4 = VAR_0 ? 1 : 0;

 FUNC_1(FUNC_4(), 0, "%s():%d: Expected 0 backtraces", VAR_1,
     VAR_2);
 VAR_3 = FUNC_3(1, 0);
 FUNC_0(VAR_3, "Unexpected mallocx() failure");
 FUNC_1(FUNC_4(), VAR_4,
     "%s():%d: Unexpected backtrace count", VAR_1, VAR_2);
 FUNC_2(VAR_3, 0);
}
