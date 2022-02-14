
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t styleid_t ;
typedef int nsAString ;
typedef int VARIANT_BOOL ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int nsstyle; } ;
typedef int PRUnichar ;
typedef int LPCWSTR ;
typedef TYPE_1__ HTMLStyle ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const**) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int const*,int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static HRESULT FUNC_7(HTMLStyle *VAR_4, styleid_t VAR_5, LPCWSTR VAR_6, VARIANT_BOOL *VAR_7)
{
    nsAString VAR_8;
    const PRUnichar *VAR_9;

    FUNC_5(&VAR_8, ((void*)0));

    FUNC_2(VAR_4->nsstyle, VAR_5, &VAR_8);

    FUNC_4(&VAR_8, &VAR_9);
    *VAR_7 = FUNC_6(VAR_9, VAR_6) ? VAR_1 : VAR_2;
    FUNC_3(&VAR_8);

    FUNC_0("%s -> %x\n", FUNC_1(VAR_3[VAR_5].name), *VAR_7);
    return VAR_0;
}
