
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsIDOMKeyEvent ;
typedef scalar_t__ cpp_bool ;
struct TYPE_5__ {TYPE_1__* doc_obj; } ;
struct TYPE_4__ {int nscontainer; } ;
typedef TYPE_2__ HTMLDocument ;


 int FUNC_0 (int ,char const* const) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(HTMLDocument *VAR_0, nsIDOMKeyEvent *VAR_1, const char * const VAR_2[4])
{
    int VAR_3=0;
    cpp_bool VAR_4;

    FUNC_1(VAR_1, &VAR_4);
    if(VAR_4)
        VAR_3 |= 1;

    FUNC_2(VAR_1, &VAR_4);
    if(VAR_4)
        VAR_3 |= 2;

    if(VAR_2[VAR_3])
        FUNC_0(VAR_0->doc_obj->nscontainer, VAR_2[VAR_3]);

    FUNC_3(VAR_1);
}
