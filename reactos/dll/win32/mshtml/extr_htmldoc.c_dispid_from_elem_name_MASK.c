
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNodeList ;
typedef int nsAString ;
typedef int WCHAR ;
typedef int UINT32 ;
struct TYPE_3__ {unsigned int elem_vars_cnt; unsigned int elem_vars_size; int ** elem_vars; int nsdoc; } ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HRESULT ;
typedef scalar_t__ DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int ** FUNC_1 (int) ;
 int ** FUNC_2 (int **,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int *,int **) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static HRESULT FUNC_10(HTMLDocumentNode *VAR_5, BSTR VAR_6, DISPID *VAR_7)
{
    nsIDOMNodeList *VAR_8;
    nsAString VAR_9;
    UINT32 VAR_10;
    unsigned VAR_11;
    nsresult VAR_12;

    if(!VAR_5->nsdoc)
        return VAR_0;

    FUNC_5(&VAR_9, VAR_6);
    VAR_12 = FUNC_6(VAR_5->nsdoc, &VAR_9, &VAR_8);
    FUNC_4(&VAR_9);
    if(FUNC_0(VAR_12))
        return VAR_1;

    VAR_12 = FUNC_7(VAR_8, &VAR_10);
    FUNC_8(VAR_8);
    if(FUNC_0(VAR_12))
        return VAR_1;

    if(!VAR_10)
        return VAR_0;

    for(VAR_11=0; VAR_11 < VAR_5->elem_vars_cnt; VAR_11++) {
        if(!FUNC_9(VAR_6, VAR_5->elem_vars[VAR_11])) {
            *VAR_7 = VAR_3+VAR_11;
            return VAR_4;
        }
    }

    if(VAR_5->elem_vars_cnt == VAR_5->elem_vars_size) {
        WCHAR **VAR_13;

        if(VAR_5->elem_vars_size) {
            VAR_13 = FUNC_2(VAR_5->elem_vars, VAR_5->elem_vars_size*2*sizeof(WCHAR*));
            if(!VAR_13)
                return VAR_2;
            VAR_5->elem_vars_size *= 2;
        }else {
            VAR_13 = FUNC_1(16*sizeof(WCHAR*));
            if(!VAR_13)
                return VAR_2;
            VAR_5->elem_vars_size = 16;
        }

        VAR_5->elem_vars = VAR_13;
    }

    VAR_5->elem_vars[VAR_5->elem_vars_cnt] = FUNC_3(VAR_6);
    if(!VAR_5->elem_vars[VAR_5->elem_vars_cnt])
        return VAR_2;

    *VAR_7 = VAR_3+VAR_5->elem_vars_cnt++;
    return VAR_4;
}
