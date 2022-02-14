
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* info; int error; int label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,size_t,int) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t,int ) ;
 int FUNC_9 (char*,void*,size_t) ;
 int VAR_10 ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 char* FUNC_12 (char*) ;
 char* FUNC_13 (char**,char*) ;

__attribute__((used)) static int FUNC_14(const char *VAR_11, void *VAR_12,
    size_t VAR_13)
{
 char *VAR_14, *VAR_15 = ((void*)0), *VAR_16 = VAR_12;
 size_t VAR_17;
 int VAR_18;
 FUNC_0(VAR_10, VAR_8, VAR_9);

 if (VAR_13 == 0)
  return -VAR_5;


 if (VAR_16[VAR_13 - 1] != '\0') {

  VAR_15 = VAR_16 = FUNC_8(VAR_13 + 1, VAR_7);
  if (!VAR_16)
   return -VAR_6;
  FUNC_9(VAR_16, VAR_12, VAR_13);
  VAR_16[VAR_13] = '\0';
 }

 VAR_18 = -VAR_5;
 VAR_16 = FUNC_12(VAR_16);
 VAR_14 = FUNC_13(&VAR_16, " ");
 if (!VAR_16)
  goto out;
 VAR_16 = FUNC_10(VAR_16);
 if (!*VAR_16)
  goto out;

 VAR_17 = VAR_13 - (VAR_16 - (VAR_15 ? VAR_15 : (char *) VAR_12));
 if (FUNC_11(VAR_11, "current") == 0) {
  if (FUNC_11(VAR_14, "changehat") == 0) {
   VAR_18 = FUNC_3(VAR_16, VAR_17,
        VAR_0);
  } else if (FUNC_11(VAR_14, "permhat") == 0) {
   VAR_18 = FUNC_3(VAR_16, VAR_17,
        VAR_3);
  } else if (FUNC_11(VAR_14, "changeprofile") == 0) {
   VAR_18 = FUNC_2(VAR_16, VAR_0);
  } else if (FUNC_11(VAR_14, "permprofile") == 0) {
   VAR_18 = FUNC_2(VAR_16, VAR_3);
  } else if (FUNC_11(VAR_14, "stack") == 0) {
   VAR_18 = FUNC_2(VAR_16, VAR_2);
  } else
   goto fail;
 } else if (FUNC_11(VAR_11, "exec") == 0) {
  if (FUNC_11(VAR_14, "exec") == 0)
   VAR_18 = FUNC_2(VAR_16, VAR_1);
  else if (FUNC_11(VAR_14, "stack") == 0)
   VAR_18 = FUNC_2(VAR_16, (VAR_1 |
        VAR_2));
  else
   goto fail;
 } else

  goto fail;

 if (!VAR_18)
  VAR_18 = VAR_13;
out:
 FUNC_7(VAR_15);
 return VAR_18;

fail:
 FUNC_4(&VAR_10)->label = FUNC_5();
 FUNC_4(&VAR_10)->info = VAR_11;
 FUNC_4(&VAR_10)->error = VAR_18 = -VAR_5;
 FUNC_1(VAR_4, &VAR_10, ((void*)0));
 FUNC_6(FUNC_4(&VAR_10)->label);
 goto out;
}
