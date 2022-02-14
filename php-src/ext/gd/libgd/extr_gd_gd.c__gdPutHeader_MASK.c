
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_4__ {int sx; int sy; scalar_t__ trueColor; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2 (gdImagePtr VAR_0, gdIOCtx * VAR_1)
{



 if (VAR_0->trueColor) {
  FUNC_1(65534, VAR_1);
 } else {
  FUNC_1(65535, VAR_1);
 }
 FUNC_1(VAR_0->sx, VAR_1);
 FUNC_1(VAR_0->sy, VAR_1);

 FUNC_0(VAR_0, VAR_1);
}
