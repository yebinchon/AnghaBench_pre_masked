
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int object_header_t ;
typedef int ULONG ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,void*,int*,int ) ;
 int VAR_2 ;

 int FUNC_1 (char*) ;

__attribute__((used)) static DWORD FUNC_2(object_header_t *VAR_3, DWORD VAR_4, void *VAR_5, DWORD *VAR_6, BOOL VAR_7)
{
    switch(VAR_4) {
    case 128:
        FUNC_1("INTERNET_OPTION_HANDLE_TYPE\n");

        if (*VAR_6 < sizeof(ULONG))
            return VAR_0;

        *VAR_6 = sizeof(DWORD);
        *(DWORD*)VAR_5 = VAR_2;
        return VAR_1;
    }

    return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
