
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (scalar_t__,int ,int ,int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*,int ,int,int,int) ;

int
FUNC_4 (int VAR_13, char * VAR_14 [])
{
 VAR_6 = FUNC_0 (VAR_5);
 if (VAR_3 == VAR_6)
 {
  return (VAR_1);
 }
 while (VAR_7)
 {

  VAR_0 =
   FUNC_3 (
    VAR_4,
    "Alive for %dd %dh %d' %d\"   \r",
    VAR_9, VAR_10, VAR_11, VAR_12
    );
  FUNC_2 (
   VAR_6,
   VAR_4,
   VAR_0,
   & VAR_8,
   ((void*)0)
   );

  FUNC_1 (1000);

  ++ VAR_12;
  if (60 == VAR_12) { VAR_12 = 0; ++ VAR_11; }
  if (60 == VAR_11) { VAR_11 = 0; ++ VAR_10; }
  if (24 == VAR_10) { VAR_10 = 0; ++ VAR_9; }
 }
 return (VAR_2);
}
