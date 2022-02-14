
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1( const char *VAR_0, char *VAR_1)
{
    unsigned int VAR_2,VAR_3 ;
    for(VAR_2=0,VAR_3=0;VAR_2<=FUNC_0(VAR_0);VAR_2++,VAR_3++)
        if((VAR_1[VAR_3]=VAR_0[VAR_2])=='\t') {
            VAR_1[VAR_3++]='\\';
            VAR_1[VAR_3]='t';
        }
}
