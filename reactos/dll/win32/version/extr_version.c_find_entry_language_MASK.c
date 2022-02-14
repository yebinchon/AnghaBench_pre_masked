
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_2__ {int CurrentLocale; } ;
typedef int IMAGE_RESOURCE_DIRECTORY ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_6 (int const*,int ,void const*) ;
 int const* FUNC_7 (int const*,void const*) ;
 int FUNC_8 (int *,int,int ) ;

__attribute__((used)) static const IMAGE_RESOURCE_DIRECTORY *FUNC_9( const IMAGE_RESOURCE_DIRECTORY *VAR_5,
                                                            const void *VAR_6, DWORD VAR_7 )
{
    const IMAGE_RESOURCE_DIRECTORY *VAR_8;
    WORD VAR_9[9];
    int VAR_10, VAR_11 = 0;

    if (VAR_7 & VAR_0)
    {

        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_3( VAR_2, VAR_4 ) );
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_2( FUNC_4()->CurrentLocale ) );
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_1() );
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_3( FUNC_5(FUNC_1()), VAR_4 ));
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_3( FUNC_5(FUNC_1()), VAR_3 ));
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_0() );
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_3( FUNC_5(FUNC_0()), VAR_4 ));
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_3( FUNC_5(FUNC_0()), VAR_3 ));
        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_3( VAR_1, VAR_3 ) );
    }
    else
    {

        VAR_11 = FUNC_8( VAR_9, VAR_11, FUNC_3( VAR_1, VAR_3 ) );
    }

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) if ((VAR_8 = FUNC_6( VAR_5, VAR_9[VAR_10], VAR_6 ))) return VAR_8;
    return FUNC_7( VAR_5, VAR_6 );
}
