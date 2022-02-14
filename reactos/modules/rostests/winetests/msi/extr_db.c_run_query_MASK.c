
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static UINT FUNC_4( MSIHANDLE VAR_1, MSIHANDLE VAR_2, const char *VAR_3 )
{
    MSIHANDLE VAR_4 = 0;
    UINT VAR_5;

    VAR_5 = FUNC_1(VAR_1, VAR_3, &VAR_4);
    if( VAR_5 != VAR_0 )
        return VAR_5;

    VAR_5 = FUNC_3(VAR_4, VAR_2);
    if( VAR_5 == VAR_0 )
        VAR_5 = FUNC_2(VAR_4);
    FUNC_0(VAR_4);
    return VAR_5;
}
