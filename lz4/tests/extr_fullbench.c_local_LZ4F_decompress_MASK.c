
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (int ,char*,size_t*,char const*,size_t*,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(const char* VAR_1, char* VAR_2, int VAR_3, int VAR_4)
{
    size_t VAR_5 = (size_t)VAR_3;
    size_t VAR_6 = (size_t)VAR_4;
    size_t VAR_7;
    FUNC_2(VAR_3 >= 0);
    FUNC_2(VAR_4 >= 0);
    VAR_7 = FUNC_1(VAR_0, VAR_2, &VAR_6, VAR_1, &VAR_5, ((void*)0));
    if (VAR_7!=0) { FUNC_0("Error decompressing frame : unfinished frame \n"); FUNC_3(8); }
    if (VAR_5 != (size_t)VAR_3) { FUNC_0("Error decompressing frame : read size incorrect \n"); FUNC_3(9); }
    return (int)VAR_6;
}
