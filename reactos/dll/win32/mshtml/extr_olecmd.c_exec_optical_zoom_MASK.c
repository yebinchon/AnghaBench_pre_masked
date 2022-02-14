
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VARIANT ;
struct TYPE_6__ {TYPE_1__* doc_obj; } ;
struct TYPE_5__ {int nscontainer; } ;
typedef TYPE_2__ HTMLDocument ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_2__*,int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,float) ;

__attribute__((used)) static HRESULT FUNC_6(HTMLDocument *VAR_3, DWORD VAR_4, VARIANT *VAR_5, VARIANT *VAR_6)
{
    FUNC_1("(%p)->(%d %s %p)\n", VAR_3, VAR_4, FUNC_4(VAR_5), VAR_6);

    if(!VAR_5 || FUNC_3(VAR_5) != VAR_2) {
        FUNC_0("Unsupported argument %s\n", FUNC_4(VAR_5));
        return VAR_0;
    }

    FUNC_5(VAR_3->doc_obj->nscontainer, (float)FUNC_2(VAR_5)/100);
    return VAR_1;
}
