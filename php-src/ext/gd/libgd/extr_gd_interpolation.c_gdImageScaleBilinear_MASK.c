
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_8__ {scalar_t__ trueColor; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*,unsigned int const,unsigned int const) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,unsigned int const,unsigned int const) ;

gdImagePtr FUNC_2(gdImagePtr VAR_0, const unsigned int VAR_1, const unsigned int VAR_2)
{
 if (VAR_0->trueColor) {
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 } else {
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
