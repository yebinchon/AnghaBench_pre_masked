
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mbverify ) (unsigned char const*,int) ;} ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (unsigned char const*,int) ;
 int FUNC_2 (unsigned char const*,int) ;

int
FUNC_3(int VAR_2, const char *VAR_3, int VAR_4)
{
 return (FUNC_0(VAR_2) ?
   VAR_1[VAR_2].mbverify((const unsigned char *) VAR_3, VAR_4) :
   VAR_1[VAR_0].mbverify((const unsigned char *) VAR_3, VAR_4));
}
