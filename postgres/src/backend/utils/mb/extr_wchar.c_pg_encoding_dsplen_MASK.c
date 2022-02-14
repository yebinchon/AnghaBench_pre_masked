
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* dsplen ) (unsigned char const*) ;} ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char const*) ;

int
FUNC_3(int VAR_2, const char *VAR_3)
{
 return (FUNC_0(VAR_2) ?
   VAR_1[VAR_2].dsplen((const unsigned char *) VAR_3) :
   VAR_1[VAR_0].dsplen((const unsigned char *) VAR_3));
}
