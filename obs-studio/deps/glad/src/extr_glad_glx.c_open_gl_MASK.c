
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PFNGLXGETPROCADDRESSPROC_PRIVATE ;
typedef int NAMES ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static
int FUNC_2(void) {
    static const char *VAR_4[] = {"libGL.so.1", "libGL.so"};


    unsigned int VAR_5 = 0;
    for(VAR_5 = 0; VAR_5 < (sizeof(VAR_4) / sizeof(VAR_4[0])); VAR_5++) {
        VAR_3 = FUNC_0(VAR_4[VAR_5], VAR_1 | VAR_0);

        if(VAR_3 != ((void*)0)) {



            VAR_2 = (PFNGLXGETPROCADDRESSPROC_PRIVATE)FUNC_1(VAR_3,
                "glXGetProcAddressARB");
            return VAR_2 != ((void*)0);

        }
    }

    return 0;
}
