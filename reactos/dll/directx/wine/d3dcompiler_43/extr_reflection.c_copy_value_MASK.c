
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (void*,char const*,int ) ;

__attribute__((used)) static BOOL FUNC_4(const char *VAR_2, void **VAR_3, DWORD VAR_4)
{
    if (!VAR_2 || !VAR_4) return VAR_1;

    *VAR_3 = FUNC_2(FUNC_1(), 0, VAR_4);
    if (!*VAR_3)
    {
        FUNC_0("Failed to allocate value memory.\n");
        return VAR_0;
    }

    FUNC_3(*VAR_3, VAR_2, VAR_4);

    return VAR_1;
}
