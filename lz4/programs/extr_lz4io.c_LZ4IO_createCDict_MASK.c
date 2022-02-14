
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int useDictionary; } ;
typedef TYPE_1__ LZ4IO_prefs_t ;
typedef int LZ4F_CDict ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (void*,size_t) ;
 void* FUNC_2 (TYPE_1__* const,size_t*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static LZ4F_CDict* FUNC_4(LZ4IO_prefs_t* const VAR_0) {
    size_t VAR_1;
    void* VAR_2;
    LZ4F_CDict* VAR_3;
    if (!VAR_0->useDictionary) {
        return ((void*)0);
    }
    VAR_2 = FUNC_2(VAR_0, &VAR_1);
    if (!VAR_2) FUNC_0(25, "Dictionary error : could not create dictionary");
    VAR_3 = FUNC_1(VAR_2, VAR_1);
    FUNC_3(VAR_2);
    return VAR_3;
}
