
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msi_dialog ;
typedef int msi_control ;
typedef int UINT ;
typedef int MSIRECORD ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static UINT FUNC_3( msi_dialog *VAR_13, MSIRECORD *VAR_14 )
{
    msi_control *VAR_15;
    DWORD VAR_16;

    VAR_16 = VAR_3 | VAR_12 | VAR_10 | VAR_4 |
            VAR_2 | VAR_5 | VAR_7 |
            VAR_8 | VAR_11 | VAR_9;
    VAR_15 = FUNC_0( VAR_13, VAR_14, VAR_6, VAR_16 );
    if (!VAR_15)
        return VAR_0;

    FUNC_1( VAR_13, VAR_15, VAR_14 );
    FUNC_2( VAR_13, VAR_15 );

    return VAR_1;
}
