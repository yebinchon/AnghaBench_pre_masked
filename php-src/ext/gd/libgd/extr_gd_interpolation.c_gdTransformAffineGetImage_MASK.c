
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_1__* gdRectPtr ;
struct TYPE_18__ {scalar_t__ y; scalar_t__ x; int height; int width; } ;
typedef TYPE_1__ gdRect ;
typedef TYPE_3__* gdImagePtr ;
struct TYPE_19__ {int saveAlphaFlag; int trueColor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double*,double const*,double*) ;
 int FUNC_1 (double*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__* const) ;
 int FUNC_6 (TYPE_3__* const) ;
 int FUNC_7 (TYPE_3__* const) ;
 int FUNC_8 (TYPE_1__*,double const*,TYPE_1__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,TYPE_3__* const,TYPE_1__*,double*) ;

int FUNC_10(gdImagePtr *VAR_2,
    const gdImagePtr VAR_3,
    gdRectPtr VAR_4,
    const double VAR_5[6])
{
 int VAR_6;
 double VAR_7[6];
 gdRect VAR_8;
 gdRect VAR_9;

 if (VAR_4 == ((void*)0)) {
  VAR_9.x = 0;
  VAR_9.y = 0;
  VAR_9.width = FUNC_6(VAR_3);
  VAR_9.height = FUNC_7(VAR_3);
  VAR_4 = &VAR_9;
 }

 FUNC_8(VAR_4, VAR_5, &VAR_8);

 *VAR_2 = FUNC_3(VAR_8.width, VAR_8.height);
 if (*VAR_2 == ((void*)0)) {
  return VAR_0;
 }
 (*VAR_2)->saveAlphaFlag = 1;

 if (!VAR_3->trueColor) {
  FUNC_5(VAR_3);
 }


 FUNC_1(VAR_7, -VAR_8.x, -VAR_8.y);
 FUNC_0(VAR_7, VAR_5, VAR_7);

 FUNC_2(*VAR_2, 0);

 VAR_6 = FUNC_9(*VAR_2,
    0,0,
    VAR_3,
    VAR_4,
    VAR_7);

 if (VAR_6 != VAR_1) {
  FUNC_4(*VAR_2);
  VAR_2 = ((void*)0);
  return VAR_0;
 } else {
  return VAR_1;
 }
}
