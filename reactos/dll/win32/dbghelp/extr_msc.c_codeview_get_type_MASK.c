
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
struct cv_defined_module {unsigned int num_defined_types; struct symt** defined_types; int allowed; } ;
typedef int BOOL ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,unsigned int,...) ;
 unsigned int VAR_2 ;
 struct symt** VAR_3 ;
 struct cv_defined_module* VAR_4 ;
 struct cv_defined_module* VAR_5 ;

__attribute__((used)) static struct symt* FUNC_1(unsigned int VAR_6, BOOL VAR_7)
{
    struct symt* VAR_8 = ((void*)0);






    if (VAR_6 < VAR_1)
    {
        if (VAR_6 < VAR_2)
     VAR_8 = VAR_3[VAR_6];
    }
    else
    {
        unsigned VAR_9 = VAR_6 >> 24;
        unsigned VAR_10 = VAR_6 & 0x00FFFFFF;
        struct cv_defined_module* VAR_11;

        VAR_11 = (VAR_9 == 0) ? VAR_4 : &VAR_5[VAR_9];

        if (VAR_9 >= VAR_0 || !VAR_11->allowed)
            FUNC_0("Module of index %d isn't loaded yet (%x)\n", VAR_9, VAR_6);
        else
        {
            if (VAR_10 - VAR_1 < VAR_11->num_defined_types)
                VAR_8 = VAR_11->defined_types[VAR_10 - VAR_1];
        }
    }
    if (!VAR_7 && !VAR_8 && VAR_6) FUNC_0("Returning NULL symt for type-id %x\n", VAR_6);
    return VAR_8;
}
