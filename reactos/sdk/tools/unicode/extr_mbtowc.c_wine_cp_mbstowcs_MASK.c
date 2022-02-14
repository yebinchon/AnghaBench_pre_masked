
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int char_size; } ;
union cptable {int dbcs; int sbcs; TYPE_1__ info; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char const*,int) ;
 scalar_t__ FUNC_1 (int *,int,unsigned char const*,int) ;
 int FUNC_2 (int *,unsigned char const*,int,int *,int) ;
 int FUNC_3 (int *,unsigned char const*,int,int *,int) ;
 int FUNC_4 (int *,int,unsigned char const*,int,int *,int) ;
 int FUNC_5 (int *,int,unsigned char const*,int,int *,int) ;

int FUNC_6( const union cptable *VAR_2, int VAR_3,
                      const char *VAR_4, int VAR_5,
                      WCHAR *VAR_6, int VAR_7 )
{
    const unsigned char *VAR_8 = (const unsigned char*) VAR_4;

    if (VAR_2->info.char_size == 1)
    {
        if (VAR_3 & VAR_1)
        {
            if (FUNC_1( &VAR_2->sbcs, VAR_3, VAR_8, VAR_5 )) return -2;
        }
        if (!(VAR_3 & VAR_0))
        {
            if (!VAR_7) return VAR_5;
            return FUNC_4( &VAR_2->sbcs, VAR_3, VAR_8, VAR_5, VAR_6, VAR_7 );
        }
        return FUNC_5( &VAR_2->sbcs, VAR_3, VAR_8, VAR_5, VAR_6, VAR_7 );
    }
    else
    {
        if (VAR_3 & VAR_1)
        {
            if (FUNC_0( &VAR_2->dbcs, VAR_8, VAR_5 )) return -2;
        }
        if (!(VAR_3 & VAR_0))
            return FUNC_2( &VAR_2->dbcs, VAR_8, VAR_5, VAR_6, VAR_7 );
        else
            return FUNC_3( &VAR_2->dbcs, VAR_8, VAR_5, VAR_6, VAR_7 );
    }
}
