
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_11__ {TYPE_4__ ll; TYPE_3__ lr; TYPE_2__ ur; TYPE_1__ ul; } ;
typedef TYPE_5__ fz_quad ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ,int ,float) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{
 int VAR_7;

 FUNC_2(VAR_1, VAR_2);
 FUNC_5(VAR_0);

 FUNC_3(1, 0, 0, 0.4f);
 FUNC_1(VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
 {
  fz_quad VAR_8 = FUNC_0(VAR_5[VAR_7], VAR_6);
  FUNC_7(VAR_8.ul.x, VAR_8.ul.y);
  FUNC_7(VAR_8.ur.x, VAR_8.ur.y);
  FUNC_7(VAR_8.lr.x, VAR_8.lr.y);
  FUNC_7(VAR_8.ll.x, VAR_8.ll.y);
 }

 FUNC_6();
 FUNC_4(VAR_0);
}
