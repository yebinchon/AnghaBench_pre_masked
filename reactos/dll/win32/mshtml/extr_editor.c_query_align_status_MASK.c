
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsAString ;
typedef scalar_t__ cpp_bool ;
typedef int WCHAR ;
struct TYPE_9__ {TYPE_1__* doc_node; TYPE_3__* window; TYPE_2__* doc_obj; } ;
struct TYPE_8__ {scalar_t__ readystate; } ;
struct TYPE_7__ {scalar_t__ usermode; } ;
struct TYPE_6__ {int nsdoc; } ;
typedef TYPE_4__ HTMLDocument ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ,int *,scalar_t__*) ;

__attribute__((used)) static DWORD FUNC_4(HTMLDocument *VAR_5, const WCHAR *VAR_6)
{
    DWORD VAR_7 = VAR_3 | VAR_1;
    nsAString VAR_8;
    cpp_bool VAR_9;
    nsresult VAR_10;

    if(VAR_5->doc_obj->usermode != VAR_0 || VAR_5->window->readystate < VAR_4)
        return VAR_3;

    FUNC_2(&VAR_8, VAR_6);
    VAR_10 = FUNC_3(VAR_5->doc_node->nsdoc, &VAR_8, &VAR_9);
    FUNC_1(&VAR_8);
    if(FUNC_0(VAR_10) && VAR_9)
        VAR_7 |= VAR_2;

    return VAR_7;
}
