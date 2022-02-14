
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int internal_donotuse; } ;
typedef TYPE_1__ LZ4_streamHC_t ;
typedef int BYTE ;


 int FUNC_0 (int *,char const*,char*,int*,int,int,int ) ;
 int FUNC_1 (int *,int const*) ;
 TYPE_1__* FUNC_2 (void*,int) ;
 int FUNC_3 (TYPE_1__* const,int) ;
 int VAR_0 ;

int FUNC_4(void* VAR_1, const char* VAR_2, char* VAR_3, int* VAR_4, int VAR_5, int VAR_6)
{
    LZ4_streamHC_t* const VAR_7 = FUNC_2(VAR_1, sizeof(*VAR_7));
    if (VAR_7==((void*)0)) return 0;
    FUNC_1(&VAR_7->internal_donotuse, (const BYTE*) VAR_2);
    FUNC_3(VAR_7, VAR_6);
    return FUNC_0(&VAR_7->internal_donotuse, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_0);
}
