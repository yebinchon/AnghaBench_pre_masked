
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_14__ {scalar_t__ Action; } ;
struct TYPE_13__ {scalar_t__ State; } ;
struct TYPE_12__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIPACKAGE ;
typedef TYPE_2__ MSIFOLDER ;
typedef TYPE_3__ MSICOMPONENT ;
typedef int * LPVOID ;
typedef int LPCWSTR ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int *,int ) ;
 TYPE_2__* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static UINT FUNC_13(MSIRECORD *VAR_5, LPVOID VAR_6)
{
    MSIPACKAGE *VAR_7 = VAR_6;
    LPCWSTR VAR_8, VAR_9, VAR_10;
    MSIRECORD *VAR_11;
    MSIFOLDER *VAR_12;
    MSICOMPONENT *VAR_13;

    VAR_9 = FUNC_3(VAR_5, 2);
    if (!VAR_9)
        return VAR_0;

    VAR_13 = FUNC_9(VAR_7, VAR_9);
    if (!VAR_13)
        return VAR_0;

    VAR_13->Action = FUNC_8( VAR_7, VAR_13 );
    if (VAR_13->Action != VAR_4)
    {
        FUNC_5("component not scheduled for installation: %s\n", FUNC_6(VAR_9));
        return VAR_0;
    }

    VAR_8 = FUNC_3(VAR_5,1);
    if (!VAR_8)
    {
        FUNC_0("Unable to get folder id\n");
        return VAR_0;
    }

    VAR_11 = FUNC_1(1);
    FUNC_4(VAR_11, 1, VAR_8);
    FUNC_2(VAR_7, VAR_3, VAR_11);
    FUNC_12(&VAR_11->hdr);

    VAR_10 = FUNC_11( VAR_7, VAR_8 );
    if (!VAR_10)
    {
        FUNC_0("Unable to retrieve folder %s\n", FUNC_6(VAR_8));
        return VAR_0;
    }
    FUNC_5("folder is %s\n", FUNC_6(VAR_10));

    VAR_12 = FUNC_10( VAR_7, VAR_8 );
    if (VAR_12->State == VAR_2) FUNC_7( VAR_10 );
    VAR_12->State = VAR_1;
    return VAR_0;
}
