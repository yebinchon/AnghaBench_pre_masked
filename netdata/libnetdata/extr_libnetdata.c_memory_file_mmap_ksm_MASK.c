
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (void*,size_t,int) ;
 int FUNC_4 (char const*,size_t) ;
 void* FUNC_5 (int *,size_t,int,int,int,int ) ;
 int FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (int,void*,size_t) ;

__attribute__((used)) static void *FUNC_8(const char *VAR_8, size_t VAR_9, int VAR_10) {

    static int VAR_11 = 1, VAR_12 = 1;

    int VAR_13 = -1;
    if(VAR_8) {
        VAR_13 = FUNC_4(VAR_8, VAR_9);
        if(VAR_13 == -1) return VAR_4;
    }

    void *VAR_14 = FUNC_5(((void*)0), VAR_9, VAR_5 | VAR_6, VAR_10 | VAR_3, -1, 0);
    if (VAR_14 != VAR_4) {



        if(VAR_13 != -1) {
            if (FUNC_2(VAR_13, 0, VAR_7) == 0) {
                if (FUNC_7(VAR_13, VAR_14, VAR_9) != (ssize_t) VAR_9)
                    FUNC_1("Cannot read from file '%s'", VAR_8);
            }
            else FUNC_1("Cannot seek to beginning of file '%s'.", VAR_8);
        }


        if (FUNC_3(VAR_14, VAR_9, VAR_2 | VAR_0) != 0 && VAR_11) {
            FUNC_1("Cannot advise the kernel about the memory usage (MADV_SEQUENTIAL|MADV_DONTFORK) of file '%s'.", VAR_8);
            VAR_11--;
        }

        if (FUNC_3(VAR_14, VAR_9, VAR_1) != 0 && VAR_12) {
            FUNC_1("Cannot advise the kernel about the memory usage (MADV_MERGEABLE) of file '%s'.", VAR_8);
            VAR_12--;
        }
    }

    if(VAR_13 != -1)
        FUNC_0(VAR_13);

    return VAR_14;
}
