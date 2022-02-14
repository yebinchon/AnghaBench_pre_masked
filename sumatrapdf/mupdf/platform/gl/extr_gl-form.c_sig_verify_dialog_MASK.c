
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
 int VAR_9 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_1__ VAR_15 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ,int ,int,int) ;
 int FUNC_8 (int ,int,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void)
{
 const char *VAR_16 = FUNC_1(VAR_9, VAR_14->obj);

 FUNC_4(400, (VAR_15.gridsize+4)*3 + VAR_15.lineheight*10);
 {
  FUNC_7(VAR_7, VAR_8, VAR_4, 2, 2);

  FUNC_6("%s", VAR_16);
  FUNC_10();

  FUNC_6("Designated name: %s.", VAR_11);
  FUNC_10();

  if (VAR_10)
   FUNC_6("Certificate error: %s", FUNC_2(VAR_10));
  else
   FUNC_6("Certificate is trusted.");

  FUNC_10();

  if (VAR_12)
   FUNC_6("Digest error: %s", FUNC_2(VAR_12));
  else if (VAR_13)
   FUNC_6("The signature is valid but there have been edits since signing.");
  else
   FUNC_6("The document is unchanged since signing.");

  FUNC_7(VAR_0, VAR_8, VAR_4, 2, 2);
  FUNC_8(0, VAR_15.gridsize, 0, 0, 0);
  {
   FUNC_7(VAR_2, VAR_3, VAR_6, 0, 0);
   if (FUNC_3("Clear"))
   {
    VAR_15.dialog = ((void*)0);
    FUNC_0();
   }
   FUNC_7(VAR_5, VAR_3, VAR_6, 0, 0);
   if (FUNC_3("Close") || (!VAR_15.focus && VAR_15.key == VAR_1))
    VAR_15.dialog = ((void*)0);
  }
  FUNC_9();
 }
 FUNC_5();
}
