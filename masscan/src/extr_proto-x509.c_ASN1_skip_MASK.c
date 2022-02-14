
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* remainings; } ;
struct CertDecode {TYPE_1__ stack; } ;



__attribute__((used)) static unsigned
FUNC_0(struct CertDecode *VAR_0, unsigned *VAR_1, size_t VAR_2)
{
    unsigned VAR_3;

    if (VAR_0->stack.remainings[0] == 0)
        return 1;


    VAR_3 = (unsigned)(VAR_2 - (*VAR_1) - 1);


    if (VAR_3 > VAR_0->stack.remainings[0])
        VAR_3 = VAR_0->stack.remainings[0];


    (*VAR_1) += VAR_3;


    VAR_0->stack.remainings[0] = (unsigned short)(VAR_0->stack.remainings[0] - VAR_3);

    return VAR_0->stack.remainings[0] == 0;

}
