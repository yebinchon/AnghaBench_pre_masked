
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_6__ {int interpolation; int * tpixels; } ;
typedef int LineContribType ;


 int * FUNC_0 (unsigned int,unsigned int,double,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,unsigned int,TYPE_1__*,unsigned int,unsigned int,int *) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_4(gdImagePtr VAR_0, unsigned int VAR_1, unsigned int VAR_2, gdImagePtr VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 LineContribType * VAR_7;


 if (VAR_4 == VAR_1) {
  unsigned int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_2 - 1; ++VAR_8) {
   FUNC_3(VAR_3->tpixels[VAR_8], VAR_0->tpixels[VAR_8], VAR_1);
  }
 }

 VAR_7 = FUNC_0(VAR_4, VAR_1, (double)VAR_4 / (double)VAR_1, VAR_0->interpolation);
 if (VAR_7 == ((void*)0)) {
  return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5 - 1; VAR_6++) {
  FUNC_2(VAR_0, VAR_1, VAR_3, VAR_4, VAR_6, VAR_7);
 }
 FUNC_1 (VAR_7);
 return 1;
}
