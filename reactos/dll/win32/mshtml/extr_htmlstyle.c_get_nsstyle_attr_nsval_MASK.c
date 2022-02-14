
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t styleid_t ;
typedef int nsresult ;
typedef int nsIDOMCSSStyleDeclaration ;
typedef int nsAString ;
struct TYPE_2__ {int name; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5(nsIDOMCSSStyleDeclaration *VAR_3, styleid_t VAR_4, nsAString *VAR_5)
{
    nsAString VAR_6;
    nsresult VAR_7;

    FUNC_3(&VAR_6, VAR_2[VAR_4].name);

    VAR_7 = FUNC_4(VAR_3, &VAR_6, VAR_5);
    if(FUNC_1(VAR_7)) {
        FUNC_0("SetProperty failed: %08x\n", VAR_7);
        return VAR_0;
    }

    FUNC_2(&VAR_6);

    return VAR_1;
}
