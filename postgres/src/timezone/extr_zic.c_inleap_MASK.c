
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zic_t ;
struct lookup {int l_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 struct lookup* FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 size_t FUNC_4 (int) ;
 int VAR_10 ;
 int FUNC_5 (int,int,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int** VAR_14 ;
 int* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char const*,char*,int*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void
FUNC_10(char **VAR_19, int VAR_20)
{
 const char *VAR_21;
 const struct lookup *VAR_22;
 zic_t VAR_23,
    VAR_24;


 int VAR_25;
 int VAR_26,
    VAR_27;
 zic_t VAR_28,
    VAR_29;
 zic_t VAR_30;
 char VAR_31;

 if (VAR_20 != VAR_1)
 {
  FUNC_2(FUNC_0("wrong number of fields on Leap line"));
  return;
 }
 VAR_28 = 0;
 VAR_21 = VAR_19[VAR_7];
 if (FUNC_7(VAR_21, "%d%c", &VAR_25, &VAR_31) != 1)
 {



  FUNC_2(FUNC_0("invalid leaping year"));
  return;
 }
 if (!VAR_13 || VAR_11 < VAR_25)
  VAR_11 = VAR_25;
 if (!VAR_13 || VAR_12 > VAR_25)
  VAR_12 = VAR_25;
 VAR_13 = 1;
 VAR_24 = VAR_0;
 while (VAR_24 != VAR_25)
 {
  if (VAR_25 > VAR_24)
  {
   VAR_23 = VAR_15[FUNC_4(VAR_24)];
   ++VAR_24;
  }
  else
  {
   --VAR_24;
   VAR_23 = -VAR_15[FUNC_4(VAR_24)];
  }
  VAR_28 = FUNC_6(VAR_28, VAR_23);
 }
 if ((VAR_22 = FUNC_1(VAR_19[VAR_4], VAR_18)) == ((void*)0))
 {
  FUNC_2(FUNC_0("invalid month name"));
  return;
 }
 VAR_26 = VAR_22->l_value;
 VAR_24 = VAR_9;
 while (VAR_24 != VAR_26)
 {
  VAR_23 = VAR_14[FUNC_4(VAR_25)][VAR_24];
  VAR_28 = FUNC_6(VAR_28, VAR_23);
  ++VAR_24;
 }
 VAR_21 = VAR_19[VAR_3];
 if (FUNC_7(VAR_21, "%d%c", &VAR_27, &VAR_31) != 1 ||
  VAR_27 <= 0 || VAR_27 > VAR_14[FUNC_4(VAR_25)][VAR_26])
 {
  FUNC_2(FUNC_0("invalid day of month"));
  return;
 }
 VAR_28 = FUNC_6(VAR_28, VAR_27 - 1);
 if (VAR_28 < VAR_17 / VAR_8)
 {
  FUNC_2(FUNC_0("time too small"));
  return;
 }
 if (VAR_28 > VAR_16 / VAR_8)
 {
  FUNC_2(FUNC_0("time too large"));
  return;
 }
 VAR_30 = VAR_28 * VAR_8;
 VAR_29 = FUNC_3(VAR_19[VAR_6], FUNC_0("invalid time of day"));
 VAR_21 = VAR_19[VAR_2];
 {
  bool VAR_32;
  int VAR_33;

  if (FUNC_8(VAR_21, "") == 0)
  {
   VAR_32 = 0;
   VAR_33 = 1;
  }
  else if (FUNC_8(VAR_21, "+") == 0)
  {
   VAR_32 = 1;
   VAR_33 = 1;
  }
  else
  {
   FUNC_2(FUNC_0("illegal CORRECTION field on Leap line"));
   return;
  }
  if ((VAR_22 = FUNC_1(VAR_19[VAR_5], VAR_10)) == ((void*)0))
  {
   FUNC_2(FUNC_0("illegal Rolling/Stationary field on Leap line"));
   return;
  }
  VAR_30 = FUNC_9(VAR_30, VAR_29);
  if (VAR_30 < 0)
  {
   FUNC_2(FUNC_0("leap second precedes Epoch"));
   return;
  }
  FUNC_5(VAR_30, VAR_32, VAR_22->l_value, VAR_33);
 }
}
