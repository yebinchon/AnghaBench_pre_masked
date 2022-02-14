
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ MSIHANDLE ;
typedef int MSICOLINFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char const*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static MSIHANDLE FUNC_5(MSIHANDLE VAR_1, const char *VAR_2, MSICOLINFO VAR_3)
{
    MSIHANDLE VAR_4 = 0, VAR_5 = 0;
    UINT VAR_6;

    VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_4);
    if( VAR_6 != VAR_0 )
        return VAR_6;

    VAR_6 = FUNC_3(VAR_4, 0);
    if( VAR_6 == VAR_0 )
    {
        FUNC_4( VAR_4, VAR_3, &VAR_5 );
    }
    FUNC_2(VAR_4);
    FUNC_0(VAR_4);
    return VAR_5;
}
