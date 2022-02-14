
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct update_accum {scalar_t__ cUpdates; TYPE_1__* updates; } ;
struct TYPE_2__ {scalar_t__ cbData; int pbData; } ;
typedef int LPCSTR ;
typedef size_t DWORD ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 size_t FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int,char*,int ,size_t,...) ;

__attribute__((used)) static void FUNC_3(LPCSTR VAR_0, const struct update_accum *VAR_1,
 const struct update_accum *VAR_2)
{
    DWORD VAR_3;

    FUNC_2(VAR_1->cUpdates == VAR_2->cUpdates,
     "%s: expected %d updates, got %d\n", VAR_0, VAR_1->cUpdates,
     VAR_2->cUpdates);
    if (VAR_1->cUpdates == VAR_2->cUpdates)
        for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1->cUpdates, VAR_2->cUpdates); VAR_3++)
        {
            FUNC_2(VAR_1->updates[VAR_3].cbData == VAR_2->updates[VAR_3].cbData,
             "%s, update %d: expected %d bytes, got %d\n", VAR_0, VAR_3,
             VAR_1->updates[VAR_3].cbData, VAR_2->updates[VAR_3].cbData);
            if (VAR_1->updates[VAR_3].cbData && VAR_1->updates[VAR_3].cbData ==
             VAR_2->updates[VAR_3].cbData)
                FUNC_2(!FUNC_0(VAR_1->updates[VAR_3].pbData, VAR_2->updates[VAR_3].pbData,
                 VAR_2->updates[VAR_3].cbData), "%s, update %d: unexpected value\n",
                 VAR_0, VAR_3);
        }
}
