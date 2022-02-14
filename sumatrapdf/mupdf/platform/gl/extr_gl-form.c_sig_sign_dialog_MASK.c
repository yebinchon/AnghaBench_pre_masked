
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int obj; } ;
struct TYPE_3__ {int gridsize; int lineheight; scalar_t__ key; int * dialog; int focus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_14 ;
 TYPE_1__ VAR_15 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,int ,int ,int,int) ;
 int FUNC_9 (int ,int,int ,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(void)
{
 const char *VAR_16 = FUNC_2(VAR_12, VAR_14->obj);

 FUNC_4(400, (VAR_15.gridsize+4)*3 + VAR_15.lineheight*10);
 {
  FUNC_8(VAR_7, VAR_8, VAR_3, 2, 2);

  FUNC_7("%s", VAR_16);
  FUNC_11();

  FUNC_7("Would you like to sign this field?");

  FUNC_8(VAR_0, VAR_8, VAR_3, 2, 2);
  FUNC_9(0, VAR_15.gridsize, 0, 0, 0);
  {
   FUNC_8(VAR_5, VAR_2, VAR_6, 0, 0);
   if (FUNC_3("Cancel") || (!VAR_15.focus && VAR_15.key == VAR_1))
    VAR_15.dialog = ((void*)0);
   FUNC_11();
   if (!(FUNC_1(VAR_12, VAR_14->obj) & VAR_4))
   {
    if (FUNC_3("Sign"))
    {
     FUNC_0(VAR_11, VAR_13, sizeof VAR_11);
     FUNC_6(".", VAR_10);
     VAR_15.dialog = VAR_9;
    }
   }
  }
  FUNC_10();
 }
 FUNC_5();
}
