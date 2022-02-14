
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlRemoveMemoPtr ;
typedef TYPE_2__* xmlRefPtr ;
typedef int xmlListPtr ;
typedef scalar_t__ xmlAttrPtr ;
struct TYPE_4__ {scalar_t__ attr; } ;
struct TYPE_3__ {scalar_t__ ap; int l; } ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, void *VAR_1)
{
    xmlAttrPtr VAR_2 = ((xmlRefPtr)VAR_0)->attr;
    xmlAttrPtr VAR_3 = ((xmlRemoveMemoPtr)VAR_1)->ap;
    xmlListPtr VAR_4 = ((xmlRemoveMemoPtr)VAR_1)->l;

    if (VAR_2 == VAR_3) {
        FUNC_0(VAR_4, (void *)VAR_0);
        return 0;
    }
    return 1;
}
