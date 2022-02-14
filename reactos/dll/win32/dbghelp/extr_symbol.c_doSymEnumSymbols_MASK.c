
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_enum {scalar_t__ buffer; scalar_t__ sym_info; scalar_t__ addr; scalar_t__ tag; scalar_t__ index; int user; int cb; } ;
typedef int ULONG64 ;
typedef int PVOID ;
typedef int PSYM_ENUMERATESYMBOLS_CALLBACK ;
typedef scalar_t__ PSYMBOL_INFO ;
typedef int PCWSTR ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,struct sym_enum*) ;

__attribute__((used)) static inline BOOL FUNC_1(HANDLE VAR_0, ULONG64 VAR_1, PCWSTR VAR_2,
                                    PSYM_ENUMERATESYMBOLS_CALLBACK VAR_3,
                                    PVOID VAR_4)
{
    struct sym_enum VAR_5;

    VAR_5.cb = VAR_3;
    VAR_5.user = VAR_4;
    VAR_5.index = 0;
    VAR_5.tag = 0;
    VAR_5.addr = 0;
    VAR_5.sym_info = (PSYMBOL_INFO)VAR_5.buffer;

    return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
}
