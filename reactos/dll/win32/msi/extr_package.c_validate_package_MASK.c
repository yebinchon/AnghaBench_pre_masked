
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {scalar_t__ platform; int version; size_t num_langids; int * langids; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int LANGID ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static UINT FUNC_5( MSIPACKAGE *VAR_12 )
{
    UINT VAR_13;

    if (VAR_12->platform == VAR_7)
        return VAR_2;

    if (VAR_12->platform == VAR_6)
        return VAR_2;

    if (VAR_12->platform == VAR_8)
    {
        if (!VAR_10 && !VAR_11)
            return VAR_2;
        if (VAR_12->version < 200)
            return VAR_1;
    }
    if (!VAR_12->num_langids)
    {
        return VAR_3;
    }
    for (VAR_13 = 0; VAR_13 < VAR_12->num_langids; VAR_13++)
    {
        LANGID VAR_14 = VAR_12->langids[VAR_13];

        if (FUNC_3( VAR_14 ) == VAR_4)
        {
            VAR_14 = FUNC_2( FUNC_3( FUNC_0() ), FUNC_4( VAR_14 ) );
        }
        if (FUNC_4( VAR_14 ) == VAR_9)
        {
            VAR_14 = FUNC_2( FUNC_3( VAR_14 ), FUNC_4( FUNC_0() ) );
        }
        if (FUNC_1( VAR_14, VAR_5 ))
            return VAR_3;
    }
    return VAR_0;
}
