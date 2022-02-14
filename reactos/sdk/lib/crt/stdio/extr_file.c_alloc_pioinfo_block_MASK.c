
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int handle; } ;
typedef TYPE_1__ ioinfo ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void**,TYPE_1__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int * VAR_7 ;
 int * FUNC_2 () ;
 TYPE_1__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static inline BOOL FUNC_5(int VAR_8)
{
    ioinfo *VAR_9;
    int VAR_10;

    if(VAR_8<0 || VAR_8>=VAR_5)
    {
        *FUNC_2() = VAR_0;
        return VAR_2;
    }

    VAR_9 = FUNC_3(VAR_4, sizeof(ioinfo));
    if(!VAR_9)
    {
        FUNC_1(":out of memory!\n");
        *FUNC_2() = VAR_1;
        return VAR_2;
    }
    for(VAR_10=0; VAR_10<VAR_4; VAR_10++)
        VAR_9[VAR_10].handle = VAR_3;
    if(FUNC_0((void**)&VAR_7[VAR_8/VAR_4], VAR_9, ((void*)0)))
        FUNC_4(VAR_9);
    return VAR_6;
}
