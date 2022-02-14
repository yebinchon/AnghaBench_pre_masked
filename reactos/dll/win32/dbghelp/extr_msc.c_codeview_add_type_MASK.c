
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symt {int dummy; } ;
struct TYPE_2__ {unsigned int num_defined_types; struct symt** defined_types; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int VAR_2 ;
 struct symt** FUNC_2 (int ,int ,int) ;
 struct symt** FUNC_3 (int ,int ,struct symt**,int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* FUNC_4 (int,unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_5, struct symt* VAR_6)
{
    if (VAR_5 < VAR_1)
        FUNC_0("What the heck\n");
    if (!VAR_4)
    {
        FUNC_0("Adding %x to non allowed module\n", VAR_5);
        return VAR_0;
    }
    if ((VAR_5 >> 24) != 0)
        FUNC_0("No module index while inserting type-id assumption is wrong %x\n",
              VAR_5);
    if (VAR_5 - VAR_1 >= VAR_4->num_defined_types)
    {
        if (VAR_4->defined_types)
        {
            VAR_4->num_defined_types = FUNC_4( VAR_4->num_defined_types * 2,
                                                        VAR_5 - VAR_1 + 1 );
            VAR_4->defined_types = FUNC_3(FUNC_1(),
                            VAR_2, VAR_4->defined_types,
                            VAR_4->num_defined_types * sizeof(struct symt*));
        }
        else
        {
            VAR_4->num_defined_types = FUNC_4( 256, VAR_5 - VAR_1 + 1 );
            VAR_4->defined_types = FUNC_2(FUNC_1(),
                            VAR_2,
                            VAR_4->num_defined_types * sizeof(struct symt*));
        }
        if (VAR_4->defined_types == ((void*)0)) return VAR_0;
    }
    if (VAR_4->defined_types[VAR_5 - VAR_1])
    {
        if (VAR_4->defined_types[VAR_5 - VAR_1] != VAR_6)
            FUNC_0("Overwriting at %x\n", VAR_5);
    }
    VAR_4->defined_types[VAR_5 - VAR_1] = VAR_6;
    return VAR_3;
}
