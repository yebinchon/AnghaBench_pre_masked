
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_12__ {int interpolation_id; int trueColor; } ;


 int FUNC_0 (TYPE_1__* const,unsigned int const,unsigned int const,TYPE_1__*,unsigned int const,unsigned int const) ;
 int FUNC_1 (TYPE_1__*,unsigned int const,unsigned int const,TYPE_1__*,unsigned int const,unsigned int const) ;
 TYPE_1__* FUNC_2 (unsigned int const,unsigned int const) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__* const) ;
 int FUNC_5 (TYPE_1__*,int ) ;

gdImagePtr FUNC_6(const gdImagePtr VAR_0, const unsigned int VAR_1, const unsigned int VAR_2, const unsigned int VAR_3, const unsigned int VAR_4)
{
 gdImagePtr VAR_5;
 gdImagePtr VAR_6;
 int VAR_7;

 if (VAR_3 == 0 || VAR_4 == 0) {
  return ((void*)0);
 }


 if (!VAR_0->trueColor) {
  FUNC_4(VAR_0);
 }

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_5(VAR_5, VAR_0->interpolation_id);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_3, VAR_2);
 if (VAR_7 != 1) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }
 FUNC_5(VAR_6, VAR_0->interpolation_id);
 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_2, VAR_6, VAR_3, VAR_4);
 if (VAR_7 != 1) {
  FUNC_3(VAR_6);
  FUNC_3(VAR_5);
  return ((void*)0);
 }
 FUNC_3(VAR_5);

 return VAR_6;
}
