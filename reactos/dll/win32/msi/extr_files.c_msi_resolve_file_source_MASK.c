
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int * File; int LongName; int ShortName; TYPE_1__* Component; scalar_t__ IsCompressed; } ;
struct TYPE_4__ {int Directory; } ;
typedef int MSIPACKAGE ;
typedef TYPE_2__ MSIFILE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int ,int *) ;

WCHAR *FUNC_6( MSIPACKAGE *VAR_1, MSIFILE *VAR_2 )
{
    WCHAR *VAR_3, *VAR_4;

    FUNC_1("Working to resolve source of file %s\n", FUNC_2(VAR_2->File));

    if (VAR_2->IsCompressed) return ((void*)0);

    VAR_3 = FUNC_5( VAR_1, VAR_2->Component->Directory, ((void*)0) );
    VAR_4 = FUNC_3( 2, VAR_3, VAR_2->ShortName );

    if (VAR_2->LongName && FUNC_0( VAR_4 ) == VAR_0)
    {
        FUNC_4( VAR_4 );
        VAR_4 = FUNC_3( 2, VAR_3, VAR_2->LongName );
    }
    FUNC_4( VAR_3 );
    FUNC_1("file %s source resolves to %s\n", FUNC_2(VAR_2->File), FUNC_2(VAR_4));
    return VAR_4;
}
