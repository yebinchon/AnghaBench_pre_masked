
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int num_streams_allocated; int * streams; } ;
typedef int MSISTREAM ;
typedef TYPE_1__ MSIDATABASE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static BOOL FUNC_2( MSIDATABASE *VAR_2, UINT VAR_3 )
{
    if (!VAR_2->num_streams_allocated)
    {
        if (!(VAR_2->streams = FUNC_0( VAR_3 * sizeof(MSISTREAM) ))) return VAR_0;
        VAR_2->num_streams_allocated = VAR_3;
        return VAR_1;
    }
    while (VAR_3 >= VAR_2->num_streams_allocated)
    {
        MSISTREAM *VAR_4;
        UINT VAR_5 = VAR_2->num_streams_allocated * 2;
        if (!(VAR_4 = FUNC_1( VAR_2->streams, VAR_5 * sizeof(MSISTREAM) ))) return VAR_0;
        VAR_2->streams = VAR_4;
        VAR_2->num_streams_allocated = VAR_5;
    }
    return VAR_1;
}
