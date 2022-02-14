
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int D3DCOLOR ;


 int FUNC_0 (int,int,int,int) ;

__attribute__((used)) static D3DCOLOR FUNC_1(uint32_t VAR_0)
{
    uint32_t VAR_1 = (VAR_0 >> 24) & 0xff;
    uint32_t VAR_2 = (VAR_0 >> 16) & 0xff;
    uint32_t VAR_3 = (VAR_0 >> 8) & 0xff;
    uint32_t VAR_4 = 0xff - (VAR_0 & 0xff);
    return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
