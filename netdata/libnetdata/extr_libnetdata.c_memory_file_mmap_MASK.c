
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (void*,size_t,int) ;
 int FUNC_3 (char const*,size_t) ;
 void* FUNC_4 (int *,size_t,int,int,int,int ) ;
 int FUNC_5 (size_t) ;

__attribute__((used)) static void *FUNC_6(const char *VAR_7, size_t VAR_8, int VAR_9) {

    static int VAR_10 = 1;

    int VAR_11 = -1;
    if(VAR_7) {
        VAR_11 = FUNC_3(VAR_7, VAR_8);
        if(VAR_11 == -1) return VAR_3;
    }

    void *VAR_12 = FUNC_4(((void*)0), VAR_8, VAR_5 | VAR_6, VAR_9, VAR_11, 0);
    if (VAR_12 != VAR_3) {



        int VAR_13 = VAR_1 | VAR_0;
        if (VAR_9 & VAR_4) VAR_13 |= VAR_2;

        if (FUNC_2(VAR_12, VAR_8, VAR_13) != 0 && VAR_10) {
            FUNC_1("Cannot advise the kernel about shared memory usage.");
            VAR_10--;
        }
    }

    if(VAR_11 != -1)
        FUNC_0(VAR_11);

    return VAR_12;
}
