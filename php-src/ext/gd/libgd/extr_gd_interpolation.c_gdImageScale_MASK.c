
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_12__ {int interpolation_id; int sy; int sx; int * interpolation; } ;




 int VAR_0 ;

 TYPE_1__* FUNC_0 (TYPE_1__* const,unsigned int const,unsigned int const) ;
 TYPE_1__* FUNC_1 (TYPE_1__* const,unsigned int const,unsigned int const) ;
 TYPE_1__* FUNC_2 (TYPE_1__* const,unsigned int const,unsigned int const) ;
 TYPE_1__* FUNC_3 (TYPE_1__* const,int ,int ,unsigned int const,unsigned int const) ;

gdImagePtr FUNC_4(const gdImagePtr VAR_1, const unsigned int VAR_2, const unsigned int VAR_3)
{
 gdImagePtr VAR_4 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_1->interpolation_id < 0 || VAR_1->interpolation_id > VAR_0) {
  return ((void*)0);
 }

 if (VAR_2 == 0 || VAR_3 == 0) {
  return ((void*)0);
 }

 switch (VAR_1->interpolation_id) {

  case 128:
   VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
   break;

  case 129:
   VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
   break;

  case 130:
   VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
   break;


  default:
   if (VAR_1->interpolation == ((void*)0)) {
    return ((void*)0);
   }
   VAR_4 = FUNC_3(VAR_1, VAR_1->sx, VAR_1->sy, VAR_2, VAR_3);
   break;
 }
 return VAR_4;
}
