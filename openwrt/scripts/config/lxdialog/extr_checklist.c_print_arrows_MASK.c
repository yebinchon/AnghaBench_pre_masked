
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_9__ {int atr; } ;
struct TYPE_8__ {int atr; } ;
struct TYPE_7__ {int atr; } ;
struct TYPE_6__ {int atr; } ;
struct TYPE_10__ {TYPE_4__ menubox_border; TYPE_3__ darrow; TYPE_2__ menubox; TYPE_1__ uarrow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static void FUNC_4(WINDOW * VAR_4, int VAR_5, int VAR_6, int VAR_7,
      int VAR_8, int VAR_9, int VAR_10)
{
 FUNC_3(VAR_4, VAR_8, VAR_9);

 if (VAR_7 > 0) {
  FUNC_2(VAR_4, VAR_3.uarrow.atr);
  FUNC_0(VAR_4, VAR_2);
  FUNC_1(VAR_4, "(-)");
 } else {
  FUNC_2(VAR_4, VAR_3.menubox.atr);
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_1);
 }

 VAR_8 = VAR_8 + VAR_10 + 1;
 FUNC_3(VAR_4, VAR_8, VAR_9);

 if ((VAR_10 < VAR_6) && (VAR_7 + VAR_5 < VAR_6 - 1)) {
  FUNC_2(VAR_4, VAR_3.darrow.atr);
  FUNC_0(VAR_4, VAR_0);
  FUNC_1(VAR_4, "(+)");
 } else {
  FUNC_2(VAR_4, VAR_3.menubox_border.atr);
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_1);
 }
}
