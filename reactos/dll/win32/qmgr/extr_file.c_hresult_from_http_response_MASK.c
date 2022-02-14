
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
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
 int FUNC_0 (char*,int) ;
 int VAR_9 ;

__attribute__((used)) static HRESULT FUNC_1(DWORD VAR_10)
{
    switch (VAR_10)
    {
    case 200: return VAR_9;
    case 400: return VAR_0;
    case 401: return VAR_1;
    case 404: return VAR_2;
    case 407: return VAR_3;
    case 414: return VAR_4;
    case 501: return VAR_5;
    case 503: return VAR_6;
    case 504: return VAR_7;
    case 505: return VAR_8;
    default:
        FUNC_0("unhandled response code %u\n", VAR_10);
        return VAR_9;
    }
}
