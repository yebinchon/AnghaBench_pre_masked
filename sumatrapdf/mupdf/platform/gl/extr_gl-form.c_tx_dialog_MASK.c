
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int page; int obj; } ;
struct TYPE_7__ {int gridsize; int lineheight; scalar_t__ key; int * dialog; int focus; } ;
struct TYPE_6__ {int text; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_11 ;
 TYPE_3__* VAR_12 ;
 TYPE_2__ VAR_13 ;
 int FUNC_5 (char*,int *,int,int,int *) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int,int) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int ,int ,int ,int,int) ;
 int FUNC_12 (int ,int,int ,int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(void)
{
 int VAR_14 = FUNC_0(VAR_10, VAR_12->obj);
 const char *VAR_15 = FUNC_1(VAR_10, VAR_12->obj);
 int VAR_16 = (VAR_14 & VAR_4) ? 10 : 1;
 int VAR_17 = FUNC_5((char*)VAR_15, ((void*)0), 20, 394, ((void*)0));
 int VAR_18;

 FUNC_7(400, (VAR_13.gridsize+4)*3 + VAR_13.lineheight*(VAR_16+VAR_17-2));
 {
  FUNC_11(VAR_7, VAR_9, VAR_3, 2, 2);
  FUNC_10("%s", VAR_15);
  VAR_18 = FUNC_9(&VAR_11, 200, VAR_16);

  FUNC_11(VAR_0, VAR_9, VAR_3, 2, 2);
  FUNC_12(0, VAR_13.gridsize, 0, 0, 0);
  {
   FUNC_11(VAR_5, VAR_2, VAR_6, 0, 0);
   if (FUNC_6("Cancel") || (!VAR_13.focus && VAR_13.key == VAR_1))
    VAR_13.dialog = ((void*)0);
   FUNC_14();
   if (FUNC_6("Okay") || VAR_18 == VAR_8)
   {
    FUNC_2(VAR_10, VAR_12, VAR_11.text);
    if (FUNC_3(VAR_10, VAR_12->page))
     FUNC_4();
    VAR_13.dialog = ((void*)0);
   }
  }
  FUNC_13();
 }
 FUNC_8();
}
