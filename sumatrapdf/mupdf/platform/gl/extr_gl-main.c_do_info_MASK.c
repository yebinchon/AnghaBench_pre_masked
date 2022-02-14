
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
struct TYPE_3__ {int lineheight; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,char*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_2__ VAR_16 ;
 char* FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_17 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
 char VAR_18[100];

 FUNC_8(500, 14 * VAR_17.lineheight);
 FUNC_11(VAR_8, VAR_10, VAR_9, 0, 0);

 if (FUNC_2(VAR_11, VAR_15, VAR_3, VAR_18, sizeof VAR_18) > 0)
  FUNC_10("Title: %s", VAR_18);
 if (FUNC_2(VAR_11, VAR_15, VAR_2, VAR_18, sizeof VAR_18) > 0)
  FUNC_10("Author: %s", VAR_18);
 if (FUNC_2(VAR_11, VAR_15, VAR_1, VAR_18, sizeof VAR_18) > 0)
  FUNC_10("Format: %s", VAR_18);
 if (FUNC_2(VAR_11, VAR_15, VAR_0, VAR_18, sizeof VAR_18) > 0)
  FUNC_10("Encryption: %s", VAR_18);
 if (FUNC_6(VAR_11, VAR_15))
 {
  if (FUNC_2(VAR_11, VAR_15, "info:Creator", VAR_18, sizeof VAR_18) > 0)
   FUNC_10("PDF Creator: %s", VAR_18);
  if (FUNC_2(VAR_11, VAR_15, "info:Producer", VAR_18, sizeof VAR_18) > 0)
   FUNC_10("PDF Producer: %s", VAR_18);
  VAR_18[0] = 0;
  if (FUNC_1(VAR_11, VAR_15, VAR_7))
   FUNC_4(VAR_18, "print, ", sizeof VAR_18);
  if (FUNC_1(VAR_11, VAR_15, VAR_5))
   FUNC_4(VAR_18, "copy, ", sizeof VAR_18);
  if (FUNC_1(VAR_11, VAR_15, VAR_6))
   FUNC_4(VAR_18, "edit, ", sizeof VAR_18);
  if (FUNC_1(VAR_11, VAR_15, VAR_4))
   FUNC_4(VAR_18, "annotate, ", sizeof VAR_18);
  if (FUNC_7(VAR_18) > 2)
   VAR_18[FUNC_7(VAR_18)-2] = 0;
  else
   FUNC_4(VAR_18, "none", sizeof VAR_18);
  FUNC_10("Permissions: %s", VAR_18);
 }
 FUNC_10("Page: %d / %d", FUNC_3(VAR_11, VAR_15, VAR_13)+1, FUNC_0(VAR_11, VAR_15));
 {
  int VAR_19 = (int)(VAR_16.x1 - VAR_16.x0 + 0.5f);
  int VAR_20 = (int)(VAR_16.y1 - VAR_16.y0 + 0.5f);
  const char *VAR_21 = FUNC_5(VAR_19, VAR_20);
  if (!VAR_21)
   VAR_21 = FUNC_5(VAR_20, VAR_19);
  if (VAR_21)
   FUNC_10("Size: %d x %d (%s)", VAR_19, VAR_20, VAR_21);
  else
   FUNC_10("Size: %d x %d", VAR_19, VAR_20);
 }
 FUNC_10("ICC rendering: %s.", VAR_12 ? "on" : "off");
 FUNC_10("Spot rendering: %s.", VAR_14 ? "on" : "off");

 FUNC_9();
}
