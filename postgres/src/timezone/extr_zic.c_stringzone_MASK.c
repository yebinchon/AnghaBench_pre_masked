
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {size_t z_nrules; int z_stdoff; scalar_t__ z_isdst; struct rule* z_rules; } ;
struct rule {scalar_t__ r_hiyear; int r_isdst; int r_dayofmonth; int r_tod; int r_todisstd; int r_todisut; int r_save; char* r_abbrvar; void* r_dycode; int r_month; int * r_yrtype; scalar_t__ r_hiwasnum; } ;
typedef size_t ptrdiff_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_0 (char*,struct zone const*,char const*,int,int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct rule*,struct rule*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,struct rule*,int,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_9, struct zone const *VAR_10, ptrdiff_t VAR_11)
{
 const struct zone *VAR_12;
 struct rule *VAR_13;
 struct rule *VAR_14;
 struct rule *VAR_15;
 ptrdiff_t VAR_16;
 const char *VAR_17;
 int VAR_18 = 0;
 int VAR_19;
 size_t VAR_20;
 int VAR_21;
 struct rule VAR_22,
    VAR_23;

 VAR_9[0] = '\0';





 if (VAR_7 < VAR_8)
  return -1;

 VAR_12 = VAR_10 + VAR_11 - 1;
 VAR_14 = VAR_15 = ((void*)0);
 for (VAR_16 = 0; VAR_16 < VAR_12->z_nrules; ++VAR_16)
 {
  VAR_13 = &VAR_12->z_rules[VAR_16];
  if (VAR_13->r_hiwasnum || VAR_13->r_hiyear != VAR_6)
   continue;
  if (VAR_13->r_yrtype != ((void*)0))
   continue;
  if (!VAR_13->r_isdst)
  {
   if (VAR_14 == ((void*)0))
    VAR_14 = VAR_13;
   else
    return -1;
  }
  else
  {
   if (VAR_15 == ((void*)0))
    VAR_15 = VAR_13;
   else
    return -1;
  }
 }
 if (VAR_14 == ((void*)0) && VAR_15 == ((void*)0))
 {




  struct rule *VAR_24 = ((void*)0);

  for (VAR_16 = 0; VAR_16 < VAR_12->z_nrules; ++VAR_16)
  {
   VAR_13 = &VAR_12->z_rules[VAR_16];
   if (!VAR_13->r_isdst && FUNC_1(VAR_24, VAR_13) < 0)
    VAR_24 = VAR_13;
   if (FUNC_1(VAR_14, VAR_13) < 0)
    VAR_14 = VAR_13;
  }
  if (VAR_14 != ((void*)0) && VAR_14->r_isdst)
  {

   VAR_23.r_month = VAR_5;
   VAR_23.r_dycode = VAR_0;
   VAR_23.r_dayofmonth = 1;
   VAR_23.r_tod = 0;
   VAR_23.r_todisstd = VAR_23.r_todisut = 0;
   VAR_23.r_isdst = VAR_14->r_isdst;
   VAR_23.r_save = VAR_14->r_save;
   VAR_23.r_abbrvar = VAR_14->r_abbrvar;
   VAR_22.r_month = VAR_4;
   VAR_22.r_dycode = VAR_0;
   VAR_22.r_dayofmonth = 31;
   VAR_22.r_tod = VAR_2 + VAR_14->r_save;
   VAR_22.r_todisstd = VAR_22.r_todisut = 0;
   VAR_22.r_isdst = 0;
   VAR_22.r_save = 0;
   VAR_22.r_abbrvar
    = (VAR_24 ? VAR_24->r_abbrvar : "");
   VAR_15 = &VAR_23;
   VAR_14 = &VAR_22;
  }
 }
 if (VAR_14 == ((void*)0) && (VAR_12->z_nrules != 0 || VAR_12->z_isdst))
  return -1;
 VAR_17 = (VAR_14 == ((void*)0)) ? "" : VAR_14->r_abbrvar;
 VAR_20 = FUNC_0(VAR_9, VAR_12, VAR_17, 0, 0, 1);
 VAR_21 = FUNC_2(VAR_9 + VAR_20, -VAR_12->z_stdoff);
 if (!VAR_21)
 {
  VAR_9[0] = '\0';
  return -1;
 }
 VAR_20 += VAR_21;
 if (VAR_15 == ((void*)0))
  return VAR_18;
 VAR_20 += FUNC_0(VAR_9 + VAR_20, VAR_12, VAR_15->r_abbrvar,
      VAR_15->r_isdst, VAR_15->r_save, 1);
 if (VAR_15->r_save != VAR_3 * VAR_1)
 {
  VAR_21 = FUNC_2(VAR_9 + VAR_20,
         -(VAR_12->z_stdoff + VAR_15->r_save));
  if (!VAR_21)
  {
   VAR_9[0] = '\0';
   return -1;
  }
  VAR_20 += VAR_21;
 }
 VAR_9[VAR_20++] = ',';
 VAR_19 = FUNC_3(VAR_9 + VAR_20, VAR_15, VAR_15->r_save, VAR_12->z_stdoff);
 if (VAR_19 < 0)
 {
  VAR_9[0] = '\0';
  return -1;
 }
 if (VAR_18 < VAR_19)
  VAR_18 = VAR_19;
 VAR_20 += FUNC_4(VAR_9 + VAR_20);
 VAR_9[VAR_20++] = ',';
 VAR_19 = FUNC_3(VAR_9 + VAR_20, VAR_14, VAR_15->r_save, VAR_12->z_stdoff);
 if (VAR_19 < 0)
 {
  VAR_9[0] = '\0';
  return -1;
 }
 if (VAR_18 < VAR_19)
  VAR_18 = VAR_19;
 return VAR_18;
}
