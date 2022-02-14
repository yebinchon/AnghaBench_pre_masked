
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Close; } ;
typedef TYPE_1__* EFI_FILE_HANDLE ;


 int FUNC_0 (int ,int,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(EFI_FILE_HANDLE *VAR_0) {
        if (!*VAR_0)
                return;

        FUNC_0((*VAR_0)->Close, 1, *VAR_0);
}
