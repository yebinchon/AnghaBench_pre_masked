
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union codeview_type {int dummy; } codeview_type ;
struct symt {int dummy; } ;
struct codeview_type_parse {int dummy; } ;
typedef int BOOL ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 struct symt* FUNC_1 (unsigned int,int ) ;
 union codeview_type* FUNC_2 (struct codeview_type_parse*,unsigned int) ;
 struct symt* FUNC_3 (struct codeview_type_parse*,unsigned int,union codeview_type const*,int ) ;

__attribute__((used)) static struct symt* FUNC_4(struct codeview_type_parse* VAR_1,
                                        unsigned VAR_2, BOOL VAR_3)
{
    struct symt* VAR_4;
    const union codeview_type* VAR_5;

    if (!VAR_2) return ((void*)0);
    if ((VAR_4 = FUNC_1(VAR_2, VAR_0))) return VAR_4;


    if (!(VAR_5 = FUNC_2(VAR_1, VAR_2)))
    {
        FUNC_0("Cannot locate type %x\n", VAR_2);
        return ((void*)0);
    }
    VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_5, VAR_3);
    if (!VAR_4) FUNC_0("Couldn't load forward type %x\n", VAR_2);
    return VAR_4;
}
