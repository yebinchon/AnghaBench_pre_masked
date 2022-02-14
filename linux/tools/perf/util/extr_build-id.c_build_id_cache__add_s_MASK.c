
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsinfo {scalar_t__ need_setns; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char**,char*,char*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*,struct nsinfo*) ;
 int FUNC_3 (int,int,int) ;
 char* FUNC_4 (char const*,char const*,struct nsinfo*,int,int) ;
 char* FUNC_5 (char const*,struct nsinfo*) ;
 int FUNC_6 (char const*,char*,size_t const) ;
 char const* VAR_4 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,struct nsinfo*) ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*,int) ;
 scalar_t__ FUNC_13 (char*,int) ;
 char* FUNC_14 (char const*,struct nsinfo*) ;
 int FUNC_15 (char*,char*) ;
 char* FUNC_16 (char const*,int *) ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char*,char const*,int) ;
 char* FUNC_19 (char*,char) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 scalar_t__ FUNC_21 (char*) ;
 char* FUNC_22 (size_t const) ;
 int FUNC_23 (char**) ;

int FUNC_24(const char *VAR_6, const char *VAR_7,
     struct nsinfo *VAR_8, bool VAR_9, bool VAR_10)
{
 const size_t VAR_11 = VAR_2;
 char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0),
      *VAR_15 = FUNC_22(VAR_11), *VAR_16;
 char *VAR_17 = ((void*)0);
 int VAR_18 = -1;

 if (!VAR_9) {
  if (!VAR_10)
   VAR_12 = FUNC_14(VAR_7, VAR_8);
  else
   VAR_12 = FUNC_16(VAR_7, ((void*)0));
  if (!VAR_12)
   goto out_free;
 }

 VAR_14 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10);
 if (!VAR_14)
  goto out_free;


 if (FUNC_10(VAR_14))
  if (FUNC_21(VAR_14))
   goto out_free;

 if (FUNC_13(VAR_14, 0755))
  goto out_free;


 if (FUNC_1(&VAR_13, "%s/%d", VAR_14,
       FUNC_3(VAR_9, VAR_10,
       0)) < 0) {
  VAR_13 = ((void*)0);
  goto out_free;
 }

 if (FUNC_0(VAR_13, VAR_1)) {
  if (VAR_9) {
   if (FUNC_7("/proc/kallsyms", VAR_13))
    goto out_free;
  } else if (VAR_8 && VAR_8->need_setns) {
   if (FUNC_8(VAR_7, VAR_13, VAR_8))
    goto out_free;
  } else if (FUNC_11(VAR_12, VAR_13) && VAR_5 != VAR_0 &&
    FUNC_7(VAR_7, VAR_13))
   goto out_free;
 }






 if (!VAR_9 && !VAR_10 &&
     FUNC_18(".ko", VAR_7 + FUNC_17(VAR_7) - 3, 3)) {
  VAR_17 = FUNC_5(VAR_6, VAR_8);
  if (VAR_17) {
   FUNC_23(&VAR_13);
   if (FUNC_1(&VAR_13, "%s/%d", VAR_14,
       FUNC_3(0, 0, 1)) < 0) {
    VAR_13 = ((void*)0);
    goto out_free;
   }
   if (FUNC_0(VAR_13, VAR_1)) {
    if (VAR_8 && VAR_8->need_setns) {
     if (FUNC_8(VAR_17, VAR_13,
       VAR_8))
      goto out_free;
    } else if (FUNC_11(VAR_17, VAR_13) &&
      VAR_5 != VAR_0 &&
      FUNC_7(VAR_17, VAR_13))
     goto out_free;
   }
  }
 }

 if (!FUNC_6(VAR_6, VAR_15, VAR_11))
  goto out_free;
 VAR_16 = FUNC_19(VAR_15, '/');
 *VAR_16 = '\0';

 if (FUNC_0(VAR_15, VAR_3) && FUNC_13(VAR_15, 0755))
  goto out_free;

 *VAR_16 = '/';
 VAR_16 = VAR_14 + FUNC_17(VAR_4) - 5;
 FUNC_12(VAR_16, "../..", 5);

 if (FUNC_20(VAR_16, VAR_15) == 0)
  VAR_18 = 0;


 if (VAR_12 &&
     FUNC_2(VAR_6, VAR_12, VAR_8) < 0)
  FUNC_15("Failed to update/scan SDT cache for %s\n", VAR_12);

out_free:
 if (!VAR_9)
  FUNC_9(VAR_12);
 FUNC_9(VAR_13);
 FUNC_9(VAR_17);
 FUNC_9(VAR_14);
 FUNC_9(VAR_15);
 return VAR_18;
}
