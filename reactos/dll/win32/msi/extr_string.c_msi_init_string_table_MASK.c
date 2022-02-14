
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int IStorage ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int,int ) ;

HRESULT FUNC_1( IStorage *VAR_6 )
{
    USHORT VAR_7[2] = { 0, 0 };
    UINT VAR_8;


    VAR_8 = FUNC_0(VAR_6, VAR_5, VAR_7, sizeof VAR_7, VAR_3);
    if (VAR_8 != VAR_0)
        return VAR_1;


    VAR_8 = FUNC_0(VAR_6, VAR_4, ((void*)0), 0, VAR_3);
    if (VAR_8 != VAR_0)
        return VAR_1;

    return VAR_2;
}
