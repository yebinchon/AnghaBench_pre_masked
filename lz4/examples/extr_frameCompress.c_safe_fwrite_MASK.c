
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 size_t FUNC_4 (void*,size_t,size_t,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(void* VAR_1, size_t VAR_2, size_t VAR_3, FILE* VAR_4)
{
    size_t const VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
    size_t const VAR_6 = VAR_2 * VAR_3;
    if (VAR_3>0) FUNC_0(VAR_6 / VAR_3 == VAR_2);
    if (VAR_5 < VAR_6) {
        if (FUNC_2(VAR_4))
            FUNC_3(VAR_0, "Write failed \n");
        else
            FUNC_3(VAR_0, "Write too short \n");
        FUNC_1(1);
    }
}
