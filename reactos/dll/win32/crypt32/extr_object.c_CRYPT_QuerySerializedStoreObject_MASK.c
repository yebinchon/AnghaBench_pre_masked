
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HCRYPTMSG ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef int BOOL ;




 int FUNC_0 (void const*,int*,int*,int *,int *) ;
 int FUNC_1 (void const*,int*,int*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4(DWORD VAR_2,
 const void *VAR_3, DWORD *VAR_4, DWORD *VAR_5,
 HCERTSTORE *VAR_6, HCRYPTMSG *VAR_7)
{
    switch (VAR_2)
    {
    case 128:
        return FUNC_1(VAR_3,
         VAR_4, VAR_5, VAR_6, VAR_7);
    case 129:
        return FUNC_0(VAR_3,
         VAR_4, VAR_5, VAR_6, VAR_7);
    default:
        FUNC_2("unimplemented for type %d\n", VAR_2);
        FUNC_3(VAR_0);
        return VAR_1;
    }
}
