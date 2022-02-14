
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(void)
{
 if (VAR_7)
 {
  if (!FUNC_0(VAR_1, VAR_0))
   FUNC_1(VAR_2, "EAN13 failed check");
  if (!FUNC_0(VAR_4, VAR_3))
   FUNC_1(VAR_2, "ISBN failed check");
  if (!FUNC_0(VAR_6, VAR_5))
   FUNC_1(VAR_2, "ISMN failed check");
  if (!FUNC_0(VAR_9, VAR_8))
   FUNC_1(VAR_2, "ISSN failed check");
  if (!FUNC_0(VAR_11, VAR_10))
   FUNC_1(VAR_2, "UPC failed check");
 }
}
