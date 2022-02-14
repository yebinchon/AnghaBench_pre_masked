
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsIOHANDLER ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *,char*) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, cmsIOHANDLER* VAR_1)
{
    FUNC_0(VAR_0, VAR_1, "/RangeABC [ 0 1 0 1 0 1]\n");
    FUNC_0(VAR_0, VAR_1, "/DecodeABC [\n");
    FUNC_0(VAR_0, VAR_1, "{100 mul  16 add 116 div } bind\n");
    FUNC_0(VAR_0, VAR_1, "{255 mul 128 sub 500 div } bind\n");
    FUNC_0(VAR_0, VAR_1, "{255 mul 128 sub 200 div } bind\n");
    FUNC_0(VAR_0, VAR_1, "]\n");
    FUNC_0(VAR_0, VAR_1, "/MatrixABC [ 1 1 1 1 0 0 0 0 -1]\n");
    FUNC_0(VAR_0, VAR_1, "/RangeLMN [ -0.236 1.254 0 1 -0.635 1.640 ]\n");
    FUNC_0(VAR_0, VAR_1, "/DecodeLMN [\n");
    FUNC_0(VAR_0, VAR_1, "{dup 6 29 div ge {dup dup mul mul} {4 29 div sub 108 841 div mul} ifelse 0.964200 mul} bind\n");
    FUNC_0(VAR_0, VAR_1, "{dup 6 29 div ge {dup dup mul mul} {4 29 div sub 108 841 div mul} ifelse } bind\n");
    FUNC_0(VAR_0, VAR_1, "{dup 6 29 div ge {dup dup mul mul} {4 29 div sub 108 841 div mul} ifelse 0.824900 mul} bind\n");
    FUNC_0(VAR_0, VAR_1, "]\n");
}
