
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2 (void * VAR_0, char * VAR_1, int VAR_2) {
    int VAR_3;

    VAR_3 = FUNC_0((int) (ptrdiff_t) VAR_0, &VAR_1[0], VAR_2);
    if (VAR_3 < 0) FUNC_1(0, "read()");
    return(VAR_3);
}
