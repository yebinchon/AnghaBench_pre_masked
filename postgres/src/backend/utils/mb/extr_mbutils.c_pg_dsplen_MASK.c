
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t encoding; } ;
struct TYPE_3__ {int (* dsplen ) (unsigned char const*) ;} ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned char const*) ;

int
FUNC_1(const char *VAR_2)
{
 return VAR_1[VAR_0->encoding].dsplen((const unsigned char *) VAR_2);
}
