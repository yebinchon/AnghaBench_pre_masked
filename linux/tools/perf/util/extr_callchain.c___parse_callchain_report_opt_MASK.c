
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enabled; scalar_t__ record_mode; unsigned long dump_size; int print_limit; int min_percent; int mode; } ;
struct TYPE_5__ {int use_callchain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char*,unsigned long*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (char*,char**) ;
 char* FUNC_11 (char*,char*,char**) ;
 int FUNC_12 (char*,char**,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_13(const char *VAR_4, bool VAR_5)
{
 char *VAR_6;
 char *VAR_7, *VAR_8 = ((void*)0);
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_2.enabled = 1;
 VAR_3.use_callchain = 1;

 if (!VAR_4)
  return 0;

 while ((VAR_6 = FUNC_11((char *)VAR_4, ",", &VAR_8)) != ((void*)0)) {
  if (!FUNC_9(VAR_6, "none", FUNC_8(VAR_6))) {
   VAR_2.mode = VAR_1;
   VAR_2.enabled = 0;
   VAR_3.use_callchain = 0;
   return 0;
  }

  if (!FUNC_2(VAR_6) ||
      !FUNC_3(VAR_6) ||
      !FUNC_5(VAR_6) ||
      !FUNC_6(VAR_6)) {

   VAR_11 = 0;
   goto next;
  } else if (VAR_5 && !VAR_10) {
   if (FUNC_4(VAR_6, &VAR_2))
    goto try_numbers;


   if (VAR_2.record_mode == VAR_0)
    VAR_11 = 1;

   VAR_10 = 1;
   goto next;
  }

try_numbers:
  if (VAR_11) {
   unsigned long VAR_12 = 0;

   if (FUNC_1(VAR_6, &VAR_12) < 0)
    return -1;
   VAR_2.dump_size = VAR_12;
   VAR_11 = 0;
  } else if (!VAR_9) {

   VAR_2.min_percent = FUNC_10(VAR_6, &VAR_7);
   if (VAR_6 == VAR_7)
    return -1;
   VAR_9 = 1;
  } else {

   VAR_2.print_limit = FUNC_12(VAR_6, &VAR_7, 0);
   if (VAR_6 == VAR_7)
    return -1;
  }
next:
  VAR_4 = ((void*)0);
 }

 if (FUNC_0(&VAR_2) < 0) {
  FUNC_7("Can't register callchain params\n");
  return -1;
 }
 return 0;
}
