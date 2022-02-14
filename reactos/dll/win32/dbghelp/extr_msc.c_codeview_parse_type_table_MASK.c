
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
union codeview_type {TYPE_1__ generic; } ;
struct codeview_type_parse {unsigned int num; } ;
typedef int BOOL ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 union codeview_type* FUNC_0 (struct codeview_type_parse*,unsigned int) ;
 int FUNC_1 (struct codeview_type_parse*,unsigned int,union codeview_type const*,int ) ;

__attribute__((used)) static BOOL FUNC_2(struct codeview_type_parse* VAR_2)
{
    unsigned int VAR_3 = VAR_0;
    const union codeview_type* VAR_4;

    for (VAR_3 = VAR_0; VAR_3 < VAR_0 + VAR_2->num; VAR_3++)
    {
        VAR_4 = FUNC_0(VAR_2, VAR_3);
        if (!(VAR_4->generic.id & 0x8600) || (VAR_4->generic.id & 0x0100))
            FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);
    }

    return VAR_1;
}
