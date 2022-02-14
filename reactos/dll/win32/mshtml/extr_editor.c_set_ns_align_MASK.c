
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsICommandParams ;
struct TYPE_6__ {TYPE_1__* doc_obj; } ;
struct TYPE_5__ {int nscontainer; } ;
typedef TYPE_2__ HTMLDocument ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char const*) ;

__attribute__((used)) static void FUNC_4(HTMLDocument *VAR_2, const char *VAR_3)
{
    nsICommandParams *VAR_4;

    if(!VAR_2->doc_obj->nscontainer)
        return;

    VAR_4 = FUNC_0();
    FUNC_3(VAR_4, VAR_1, VAR_3);

    FUNC_1(VAR_2, VAR_0, VAR_4);

    FUNC_2(VAR_4);
}
