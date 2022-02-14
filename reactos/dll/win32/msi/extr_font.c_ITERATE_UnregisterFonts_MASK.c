
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_18__ {scalar_t__ Action; int Component; } ;
struct TYPE_17__ {int TargetPath; TYPE_1__* Component; } ;
struct TYPE_16__ {int hdr; } ;
struct TYPE_15__ {int Component; } ;
typedef TYPE_2__ MSIRECORD ;
typedef int MSIPACKAGE ;
typedef TYPE_3__ MSIFILE ;
typedef TYPE_4__ MSICOMPONENT ;
typedef scalar_t__ LPWSTR ;
typedef int * LPVOID ;
typedef int LPCWSTR ;
typedef int HKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_15 (int *,int ) ;
 TYPE_3__* FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (scalar_t__,char) ;

__attribute__((used)) static UINT FUNC_20( MSIRECORD *VAR_6, LPVOID VAR_7 )
{
    MSIPACKAGE *VAR_8 = VAR_7;
    LPWSTR VAR_9;
    LPCWSTR VAR_10;
    MSIFILE *VAR_11;
    MSICOMPONENT *VAR_12;
    HKEY VAR_13, VAR_14;
    MSIRECORD *VAR_15;
    LPWSTR VAR_16, VAR_17;

    VAR_10 = FUNC_2( VAR_6, 1 );
    VAR_11 = FUNC_16( VAR_8, VAR_10 );
    if (!VAR_11)
    {
        FUNC_9("unable to find file %s\n", FUNC_10(VAR_10));
        return VAR_0;
    }
    VAR_12 = FUNC_15( VAR_8, VAR_11->Component->Component );
    if (!VAR_12)
    {
        FUNC_9("unable to find component %s\n", FUNC_10(VAR_11->Component->Component));
        return VAR_0;
    }
    VAR_12->Action = FUNC_14( VAR_8, VAR_12 );
    if (VAR_12->Action != VAR_3)
    {
        FUNC_8("component not scheduled for removal %s\n", FUNC_10(VAR_12->Component));
        return VAR_0;
    }

    FUNC_6( VAR_1, VAR_4, &VAR_13 );
    FUNC_6( VAR_1, VAR_5, &VAR_14 );

    if (FUNC_3( VAR_6, 2 ))
        VAR_9 = FUNC_11( VAR_11->TargetPath );
    else
        VAR_9 = FUNC_12( VAR_6, 2 );

    if (VAR_9)
    {
        FUNC_7( VAR_13, VAR_9 );
        FUNC_7( VAR_14, VAR_9 );
    }

    FUNC_13( VAR_9 );
    FUNC_5( VAR_13 );
    FUNC_5( VAR_14 );


    VAR_15 = FUNC_0( 1 );
    VAR_16 = FUNC_18( VAR_11->TargetPath );
    VAR_17 = FUNC_19( VAR_16,'\\' );
    if (VAR_17) VAR_17++;
    else VAR_17 = VAR_16;
    FUNC_4( VAR_15, 1, VAR_17 );
    FUNC_1(VAR_8, VAR_2, VAR_15);
    FUNC_17( &VAR_15->hdr );
    FUNC_13( VAR_16 );


    return VAR_0;
}
