
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sds ;
typedef int rax ;


 int VAR_0 ;
 void* FUNC_0 (int *,unsigned char*,int ) ;
 int FUNC_1 (int *,unsigned char*,int ,void*,int *) ;
 int * FUNC_2 () ;
 void* VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

unsigned long FUNC_8(const char *VAR_2) {
    static rax *VAR_3 = ((void*)0);
    static unsigned long VAR_4 = 0;

    sds VAR_5 = FUNC_5(VAR_2);
    FUNC_6(VAR_5);
    if (VAR_3 == ((void*)0)) VAR_3 = FUNC_2();
    void *VAR_6 = FUNC_0(VAR_3,(unsigned char*)VAR_5,FUNC_4(VAR_5));
    if (VAR_6 != VAR_1) {
        FUNC_3(VAR_5);
        return (unsigned long)VAR_6;
    }
    FUNC_1(VAR_3,(unsigned char*)VAR_5,FUNC_7(VAR_5),
              (void*)VAR_4,((void*)0));
    FUNC_3(VAR_5);
    unsigned long VAR_7 = VAR_4;
    VAR_4++;
    if (VAR_4 == VAR_0-1) VAR_4++;
    return VAR_7;
}
