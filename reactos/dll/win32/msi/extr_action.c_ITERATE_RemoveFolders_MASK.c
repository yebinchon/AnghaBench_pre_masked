
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {scalar_t__ Action; } ;
struct TYPE_10__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIPACKAGE ;
typedef int MSIFOLDER ;
typedef TYPE_2__ MSICOMPONENT ;
typedef int * LPVOID ;
typedef int LPCWSTR ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static UINT FUNC_13( MSIRECORD *VAR_3, LPVOID VAR_4 )
{
    MSIPACKAGE *VAR_5 = VAR_4;
    LPCWSTR VAR_6, VAR_7, VAR_8;
    MSIRECORD *VAR_9;
    MSIFOLDER *VAR_10;
    MSICOMPONENT *VAR_11;

    VAR_7 = FUNC_3(VAR_3, 2);
    if (!VAR_7)
        return VAR_0;

    VAR_11 = FUNC_8(VAR_5, VAR_7);
    if (!VAR_11)
        return VAR_0;

    VAR_11->Action = FUNC_7( VAR_5, VAR_11 );
    if (VAR_11->Action != VAR_2)
    {
        FUNC_5("component not scheduled for removal %s\n", FUNC_6(VAR_7));
        return VAR_0;
    }

    VAR_6 = FUNC_3( VAR_3, 1 );
    if (!VAR_6)
    {
        FUNC_0("Unable to get folder id\n");
        return VAR_0;
    }

    VAR_8 = FUNC_10( VAR_5, VAR_6 );
    if (!VAR_8)
    {
        FUNC_0("Unable to resolve folder %s\n", FUNC_6(VAR_6));
        return VAR_0;
    }
    FUNC_5("folder is %s\n", FUNC_6(VAR_8));

    VAR_9 = FUNC_1( 1 );
    FUNC_4( VAR_9, 1, VAR_6 );
    FUNC_2(VAR_5, VAR_1, VAR_9);
    FUNC_11( &VAR_9->hdr );

    VAR_10 = FUNC_9( VAR_5, VAR_6 );
    FUNC_12( VAR_10 );
    return VAR_0;
}
