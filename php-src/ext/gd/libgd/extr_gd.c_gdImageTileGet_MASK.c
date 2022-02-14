
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_12__ {scalar_t__ trueColor; } ;
struct TYPE_11__ {TYPE_3__* tile; scalar_t__ trueColor; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13 (gdImagePtr VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5,VAR_6;
 if (!VAR_0->tile) {
  return -1;
 }
 VAR_3 = VAR_1 % FUNC_6(VAR_0->tile);
 VAR_4 = VAR_2 % FUNC_7(VAR_0->tile);
 VAR_6 = FUNC_3(VAR_0->tile, VAR_3, VAR_4);

 if (VAR_0->trueColor) {
  if (VAR_0->tile->trueColor) {
   VAR_5 = VAR_6;
  } else {
   VAR_5 = FUNC_8( FUNC_5(VAR_0->tile,VAR_6), FUNC_4(VAR_0->tile,VAR_6), FUNC_1 (VAR_0->tile,VAR_6), FUNC_0 (VAR_0->tile,VAR_6));
  }
 } else {
  if (VAR_0->tile->trueColor) {
   VAR_5 = FUNC_2(VAR_0, FUNC_12 (VAR_6), FUNC_11 (VAR_6), FUNC_10 (VAR_6), FUNC_9 (VAR_6));
  } else {
   VAR_5 = VAR_6;
   VAR_5 = FUNC_2(VAR_0, FUNC_5 (VAR_0->tile,VAR_6), FUNC_4 (VAR_0->tile,VAR_6), FUNC_1 (VAR_0->tile,VAR_6), FUNC_0 (VAR_0->tile,VAR_6));
  }
 }
 return VAR_5;
}
