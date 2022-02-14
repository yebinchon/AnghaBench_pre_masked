
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int D3DSHADER_PARAM_REGISTER_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_0( D3DSHADER_PARAM_REGISTER_TYPE VAR_5, DWORD VAR_6 )
{
    return ((VAR_5 << VAR_3) & VAR_1) |
           ((VAR_5 << VAR_4) & VAR_2) |
           (VAR_6 & VAR_0);
}
