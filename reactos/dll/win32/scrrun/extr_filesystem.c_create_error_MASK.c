
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
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline HRESULT FUNC_1(DWORD VAR_5)
{
    switch(VAR_5) {
    case 129: return VAR_1;
    case 128: return VAR_2;
    case 132: return VAR_3;
    case 130: return VAR_0;
    case 131: return VAR_0;
    default:
        FUNC_0("Unsupported error code: %d\n", VAR_5);
        return VAR_4;
    }
}
