
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
    FUNC_0(VAR_0, VAR_1, "/RangeLMN [ -0.635 2.0 0 2 -0.635 2.0 ]\n");
    FUNC_0(VAR_0, VAR_1, "/EncodeLMN [\n");
    FUNC_0(VAR_0, VAR_1, "{ 0.964200  div dup 0.008856 le {7.787 mul 16 116 div add}{1 3 div exp} ifelse } bind\n");
    FUNC_0(VAR_0, VAR_1, "{ 1.000000  div dup 0.008856 le {7.787 mul 16 116 div add}{1 3 div exp} ifelse } bind\n");
    FUNC_0(VAR_0, VAR_1, "{ 0.824900  div dup 0.008856 le {7.787 mul 16 116 div add}{1 3 div exp} ifelse } bind\n");
    FUNC_0(VAR_0, VAR_1, "]\n");
    FUNC_0(VAR_0, VAR_1, "/MatrixABC [ 0 1 0 1 -1 1 0 0 -1 ]\n");
    FUNC_0(VAR_0, VAR_1, "/EncodeABC [\n");


    FUNC_0(VAR_0, VAR_1, "{ 116 mul  16 sub 100 div  } bind\n");
    FUNC_0(VAR_0, VAR_1, "{ 500 mul 128 add 256 div  } bind\n");
    FUNC_0(VAR_0, VAR_1, "{ 200 mul 128 add 256 div  } bind\n");


    FUNC_0(VAR_0, VAR_1, "]\n");


}
