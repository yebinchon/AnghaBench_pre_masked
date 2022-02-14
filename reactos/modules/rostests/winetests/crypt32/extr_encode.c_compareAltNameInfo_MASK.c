
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cAltEntry; int * rgAltEntry; } ;
typedef size_t DWORD ;
typedef TYPE_1__ CERT_ALT_NAME_INFO ;


 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(const CERT_ALT_NAME_INFO *VAR_0,
 const CERT_ALT_NAME_INFO *VAR_1)
{
    DWORD VAR_2;

    FUNC_2(VAR_0->cAltEntry == VAR_1->cAltEntry, "Expected %d entries, got %d\n",
     VAR_0->cAltEntry, VAR_1->cAltEntry);
    for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->cAltEntry, VAR_1->cAltEntry); VAR_2++)
        FUNC_0(&VAR_0->rgAltEntry[VAR_2], &VAR_1->rgAltEntry[VAR_2]);
}
