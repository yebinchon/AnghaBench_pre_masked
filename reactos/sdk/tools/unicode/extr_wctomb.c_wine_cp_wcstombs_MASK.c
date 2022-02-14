
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int char_size; } ;
union cptable {int dbcs; int sbcs; TYPE_1__ info; } ;
typedef int WCHAR ;


 int FUNC_0 (int *,int,int const*,int,char const*,int*) ;
 int FUNC_1 (int *,int,int const*,int,int*) ;
 int FUNC_2 (int *,int const*,int,char*,int) ;
 int FUNC_3 (int *,int,int const*,int,char*,int,char const*,int*) ;
 int FUNC_4 (int *,int const*,int,char*,int) ;
 int FUNC_5 (int *,int,int const*,int,char*,int,char const*,int*) ;

int FUNC_6( const union cptable *VAR_0, int VAR_1,
                      const WCHAR *VAR_2, int VAR_3,
                      char *VAR_4, int VAR_5, const char *VAR_6, int *VAR_7 )
{
    if (VAR_0->info.char_size == 1)
    {
        if (VAR_1 || VAR_6 || VAR_7)
        {
            if (!VAR_5) return FUNC_1( &VAR_0->sbcs, VAR_1, VAR_2, VAR_3, VAR_7 );
            return FUNC_5( &VAR_0->sbcs, VAR_1, VAR_2, VAR_3,
                                       VAR_4, VAR_5, VAR_6, VAR_7 );
        }
        if (!VAR_5) return VAR_3;
        return FUNC_4( &VAR_0->sbcs, VAR_2, VAR_3, VAR_4, VAR_5 );
    }
    else
    {
        if (!VAR_5) return FUNC_0( &VAR_0->dbcs, VAR_1, VAR_2, VAR_3, VAR_6, VAR_7 );
        if (VAR_1 || VAR_6 || VAR_7)
            return FUNC_3( &VAR_0->dbcs, VAR_1, VAR_2, VAR_3,
                                       VAR_4, VAR_5, VAR_6, VAR_7 );
        return FUNC_2( &VAR_0->dbcs, VAR_2, VAR_3, VAR_4, VAR_5 );
    }
}
