
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsICommandParams ;
typedef scalar_t__ cpp_bool ;
struct TYPE_7__ {TYPE_2__* doc_obj; TYPE_1__* window; } ;
struct TYPE_6__ {scalar_t__ usermode; scalar_t__ nscontainer; } ;
struct TYPE_5__ {scalar_t__ readystate; } ;
typedef TYPE_3__ HTMLDocument ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*,int *) ;
 int FUNC_2 (int *,int ,scalar_t__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static DWORD FUNC_4(HTMLDocument *VAR_7, const char *VAR_8)
{
    nsICommandParams *VAR_9;
    cpp_bool VAR_10 = VAR_1;

    if(VAR_7->doc_obj->usermode != VAR_0 || VAR_7->window->readystate < VAR_6)
        return VAR_5;

    if(VAR_7->doc_obj->nscontainer && VAR_8) {
        VAR_9 = FUNC_0();
        FUNC_1(VAR_7->doc_obj->nscontainer, VAR_8, VAR_9);

        FUNC_2(VAR_9, VAR_2, &VAR_10);

        FUNC_3(VAR_9);
    }

    return VAR_5 | VAR_3 | (VAR_10 ? VAR_4 : 0);
}
