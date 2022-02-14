
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;



 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct index_state*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct index_state *VAR_0,
                                unsigned int VAR_1, void *VAR_2, unsigned int VAR_3)
{
    switch (VAR_1) {
    case 128:
        return FUNC_1 (VAR_0, VAR_2, VAR_3);
    default:
        FUNC_0("unknown extension %u.\n", VAR_1);
        break;
    }
    return 0;
}
