
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0 ( char *VAR_1, int VAR_2, int VAR_3 )
{
    char VAR_4, *VAR_5;
    int VAR_6;
    for ( VAR_4 = VAR_0, VAR_5 = VAR_1; VAR_4 < VAR_0 + VAR_3; VAR_4++, VAR_5 += VAR_2 )
    {
        for ( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++ )
            if ( VAR_5[VAR_6] != VAR_4 ) return VAR_6;
    }
    return -1;
}
