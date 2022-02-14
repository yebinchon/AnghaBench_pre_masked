
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_2( UINT VAR_3 )
{
    if (VAR_3 != VAR_0 && !FUNC_0( VAR_3 ))
    {
        FUNC_1("invalid codepage %u\n", VAR_3);
        return VAR_1;
    }
    return VAR_2;
}
