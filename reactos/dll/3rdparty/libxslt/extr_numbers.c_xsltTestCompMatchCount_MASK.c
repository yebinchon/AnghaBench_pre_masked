
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef int * xsltCompMatchPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__* ns; int name; } ;
struct TYPE_6__ {int href; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_2(xsltTransformContextPtr VAR_1,
                       xmlNodePtr VAR_2,
                       xsltCompMatchPtr VAR_3,
                       xmlNodePtr VAR_4)
{
    if (VAR_3 != ((void*)0)) {
        return FUNC_1(VAR_1, VAR_2, VAR_3);
    }
    else {
        if (VAR_2->type != VAR_4->type)
            return 0;
        if (VAR_2->type == VAR_0)




            return 1;

        if (!FUNC_0(VAR_2->name, VAR_4->name))
            return 0;
        if (VAR_2->ns == VAR_4->ns)
            return 1;
        if ((VAR_2->ns == ((void*)0)) || (VAR_4->ns == ((void*)0)))
            return 0;
        return (FUNC_0(VAR_2->ns->href, VAR_4->ns->href));
    }
}
