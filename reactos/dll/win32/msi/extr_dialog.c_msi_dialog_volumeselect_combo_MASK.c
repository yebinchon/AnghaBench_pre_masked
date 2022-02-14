
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int msi_dialog ;
struct TYPE_4__ {int property; int handler; int attributes; } ;
typedef TYPE_1__ msi_control ;
typedef int UINT ;
typedef int MSIRECORD ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* FUNC_2 (int *,int *,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_14 ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_5( msi_dialog *VAR_15, MSIRECORD *VAR_16 )
{
    msi_control *VAR_17;
    LPCWSTR VAR_18;
    DWORD VAR_19;


    VAR_19 = VAR_7 | VAR_13 | VAR_11 | VAR_12 |
            VAR_0 | VAR_2 | VAR_1 |
            VAR_8 | VAR_9 | VAR_10;
    VAR_17 = FUNC_2( VAR_15, VAR_16, VAR_6, VAR_19 );
    if (!VAR_17)
        return VAR_3;

    VAR_17->attributes = FUNC_0( VAR_16, 8 );
    VAR_17->handler = VAR_14;
    VAR_18 = FUNC_1( VAR_16, 9 );
    VAR_17->property = FUNC_3( VAR_15, VAR_18, VAR_5 );

    FUNC_4( VAR_15, VAR_17 );

    return VAR_4;
}
