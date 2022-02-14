
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
typedef scalar_t__ ptrdiff_t ;
struct TYPE_4__ {int * attsSpecial; int dict; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int const*,int const*,void*) ;
 int * FUNC_2 (int,int ) ;
 int * FUNC_3 (int *,int const*,int const*) ;

__attribute__((used)) static void
FUNC_4(xmlParserCtxtPtr VAR_0,
    const xmlChar *VAR_1,
    const xmlChar *VAR_2,
    int VAR_3)
{
    if (VAR_0->attsSpecial == ((void*)0)) {
        VAR_0->attsSpecial = FUNC_2(10, VAR_0->dict);
 if (VAR_0->attsSpecial == ((void*)0))
     goto mem_error;
    }

    if (FUNC_3(VAR_0->attsSpecial, VAR_1, VAR_2) != ((void*)0))
        return;

    FUNC_1(VAR_0->attsSpecial, VAR_1, VAR_2,
                     (void *) (ptrdiff_t) VAR_3);
    return;

mem_error:
    FUNC_0(VAR_0, ((void*)0));
    return;
}
