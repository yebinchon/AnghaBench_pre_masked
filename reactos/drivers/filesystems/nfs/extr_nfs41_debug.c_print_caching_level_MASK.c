
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PUNICODE_STRING ;


 int FUNC_0 (char*,int ) ;

void FUNC_1(int VAR_0, ULONG VAR_1, PUNICODE_STRING VAR_2)
{
    if (!VAR_0) return;
    switch(VAR_1) {
        case 0:
            FUNC_0("enable_caching: DISABLE_CACHING %wZ\n", VAR_2);
            break;
        case 1:
            FUNC_0("enable_caching: ENABLE_READ_CACHING %wZ\n", VAR_2);
            break;
        case 2:
            FUNC_0("enable_caching: ENABLE_WRITE_CACHING %wZ\n", VAR_2);
            break;
        case 3:
            FUNC_0("enable_caching: ENABLE_READWRITE_CACHING %wZ\n", VAR_2);
            break;
    }
}
