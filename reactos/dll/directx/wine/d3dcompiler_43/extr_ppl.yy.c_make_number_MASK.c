
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ull; scalar_t__ sll; unsigned long ulong; long slong; unsigned int uint; int sint; } ;
typedef TYPE_1__ YYSTYPE ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_0 (char const*,int *,int) ;
 scalar_t__ FUNC_1 (char const*,int *,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*) ;
 void* FUNC_4 (char const*,int *,int) ;
 void* FUNC_5 (char const*,int *,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char FUNC_6 (char const) ;

__attribute__((used)) static int FUNC_7(int VAR_17, YYSTYPE *VAR_18, const char *VAR_19, int VAR_20)
{
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;
 char VAR_24[4];
 long VAR_25;

 VAR_24[3] = '\0';
 VAR_24[2] = FUNC_6(VAR_19[VAR_20-1]);
 VAR_24[1] = VAR_20 > 1 ? FUNC_6(VAR_19[VAR_20-2]) : ' ';
 VAR_24[0] = VAR_20 > 2 ? FUNC_6(VAR_19[VAR_20-3]) : ' ';

 if(!FUNC_3(VAR_24, "LUL"))
 {
  FUNC_2("Invalid constant suffix");
  return 0;
 }
 else if(!FUNC_3(VAR_24, "LLU") || !FUNC_3(VAR_24, "ULL"))
 {
  VAR_22++;
  VAR_23++;
 }
 else if(!FUNC_3(VAR_24+1, "LU") || !FUNC_3(VAR_24+1, "UL"))
 {
  VAR_21++;
  VAR_23++;
 }
 else if(!FUNC_3(VAR_24+1, "LL"))
 {
  VAR_22++;
 }
 else if(!FUNC_3(VAR_24+2, "L"))
 {
  VAR_21++;
 }
 else if(!FUNC_3(VAR_24+2, "U"))
 {
  VAR_23++;
 }

 if(VAR_23 && VAR_22)
 {
  VAR_10 = 0;
  VAR_18->ull = FUNC_1(VAR_19, ((void*)0), VAR_17);
  if (VAR_18->ull == VAR_8 && VAR_10 == VAR_0)
      FUNC_2("integer constant %s is too large\n", VAR_19);
  return VAR_16;
 }
 else if(!VAR_23 && VAR_22)
 {
  VAR_10 = 0;
  VAR_18->sll = FUNC_0(VAR_19, ((void*)0), VAR_17);
  if ((VAR_18->sll == VAR_4 || VAR_18->sll == VAR_3) && VAR_10 == VAR_0)
      FUNC_2("integer constant %s is too large\n", VAR_19);
  return VAR_13;
 }
 else if(VAR_23 && VAR_21)
 {
  VAR_10 = 0;
  VAR_18->ulong = FUNC_5(VAR_19, ((void*)0), VAR_17);
  if (VAR_18->ulong == VAR_9 && VAR_10 == VAR_0)
   FUNC_2("integer constant %s is too large\n", VAR_19);
  return VAR_15;
 }
 else if(!VAR_23 && VAR_21)
 {
  VAR_10 = 0;
  VAR_18->slong = FUNC_4(VAR_19, ((void*)0), VAR_17);
  if ((VAR_18->slong == VAR_6 || VAR_18->slong == VAR_5) && VAR_10 == VAR_0)
   FUNC_2("integer constant %s is too large\n", VAR_19);
  return VAR_12;
 }
 else if(VAR_23 && !VAR_21)
 {
  unsigned long VAR_26;
  VAR_10 = 0;
  VAR_26 = FUNC_5(VAR_19, ((void*)0), VAR_17);
  if ((VAR_26 == VAR_9 && VAR_10 == VAR_0) || (VAR_26 > VAR_7))
   FUNC_2("integer constant %s is too large\n", VAR_19);
  VAR_18->uint = (unsigned int)VAR_26;
  return VAR_14;
 }


 VAR_10 = 0;
 VAR_25 = FUNC_4(VAR_19, ((void*)0), VAR_17);
 if (((VAR_25 == VAR_6 || VAR_25 == VAR_5) && VAR_10 == VAR_0) ||
  (VAR_25 > VAR_1) || (VAR_25 < VAR_2))
  FUNC_2("integer constant %s is too large\n", VAR_19);
 VAR_18->sint = (int)VAR_25;
 return VAR_11;
}
