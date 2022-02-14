
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ v; scalar_t__ n; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,size_t,char*,scalar_t__) ;
 TYPE_1__* VAR_0 ;

int
FUNC_2(char *VAR_1, size_t VAR_2, uint32_t VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_0[VAR_4].v == VAR_3)
   return FUNC_1(VAR_1, VAR_2, "%s", VAR_0[VAR_4].n);
 return FUNC_1(VAR_1, VAR_2, "%#x", VAR_3);
}
