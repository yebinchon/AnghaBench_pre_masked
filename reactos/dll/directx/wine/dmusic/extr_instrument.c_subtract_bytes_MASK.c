
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline DWORD FUNC_1(DWORD VAR_0, DWORD VAR_1)
{
    if(VAR_1 > VAR_0){
        FUNC_0("Apparent mismatch in chunk lengths? %u bytes remaining, %u bytes read\n", VAR_0, VAR_1);
        return 0;
    }
    return VAR_0 - VAR_1;
}
