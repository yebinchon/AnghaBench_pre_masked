
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ioinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;

__attribute__((used)) static inline ioinfo* FUNC_0(int VAR_4)
{
    ioinfo *VAR_5 = ((void*)0);
    if(VAR_4>=0 && VAR_4<VAR_1)
        VAR_5 = VAR_3[VAR_4/VAR_0];
    if(!VAR_5)
        return &VAR_2;

    return VAR_5 + (VAR_4%VAR_0);
}
