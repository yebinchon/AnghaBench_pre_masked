
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2 (void * VAR_0) {
    int VAR_1;
    VAR_1 = FUNC_0((int) (ptrdiff_t) VAR_0);
    if (VAR_1 < 0) FUNC_1(0, "close()");
    return(VAR_1);
}
