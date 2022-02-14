
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_3__ {int sx; int sy; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2 (gdImagePtr VAR_2, gdIOCtx * VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  FUNC_0((unsigned char) (VAR_0[VAR_8]), VAR_3);
 }



 FUNC_1(VAR_1, VAR_3);
 FUNC_1(VAR_2->sx, VAR_3);
 FUNC_1(VAR_2->sy, VAR_3);
 FUNC_1(VAR_4, VAR_3);
 FUNC_1(VAR_5, VAR_3);
 FUNC_1(VAR_6, VAR_3);
 FUNC_1(VAR_7, VAR_3);
}
