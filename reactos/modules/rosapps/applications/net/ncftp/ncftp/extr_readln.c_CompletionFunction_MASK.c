
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ai ;
struct TYPE_8__ {scalar_t__ cargc; int * cargv; int noglobargv; int argbuf; } ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_1__* CommandPtr ;
typedef TYPE_2__ ArgvInfo ;


 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,int) ;
 char* FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__*,int *,int,int ,int,int ,int) ;
 char* FUNC_6 (char const*,int) ;
 char* FUNC_7 (char const*,int) ;
 char* FUNC_8 (char const*,int) ;
 int VAR_0 ;
 char* FUNC_9 (char const*,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_10 (TYPE_2__*,int ,int) ;

__attribute__((used)) static char *
FUNC_11(const char *VAR_9, int VAR_10)
{
 char *VAR_11;
 char *VAR_12;
 ArgvInfo VAR_13;
 int VAR_14;
 CommandPtr VAR_15;
 static int VAR_16;

 if (VAR_10 == 0) {
  VAR_16 = -1;
  VAR_12 = FUNC_2();
  if (VAR_12 == ((void*)0))
   return ((void*)0);
  if (FUNC_4(VAR_12)) {
   VAR_16 = -2;
   VAR_11 = FUNC_1(VAR_9, VAR_10);
   return VAR_11;
  }

  (void) FUNC_10(&VAR_13, 0, sizeof(VAR_13));
  VAR_14 = FUNC_5(VAR_12, &VAR_13.cargc, VAR_13.cargv,
   (int) (sizeof(VAR_13.cargv) / sizeof(char *)),
   VAR_13.argbuf, sizeof(VAR_13.argbuf),
   VAR_13.noglobargv, 1);
  if (VAR_14 <= 0)
   return ((void*)0);
  if (VAR_13.cargc == 0)
   return ((void*)0);

  VAR_15 = FUNC_3(VAR_13.cargv[0], 0);
  if (VAR_15 == VAR_1) {
   return ((void*)0);
  } else if (VAR_15 == VAR_8) {
   return ((void*)0);
  }
  VAR_16 = VAR_15->flags;
 }
 if (VAR_16 == (-2)) {
  VAR_11 = FUNC_1(VAR_9, VAR_10);
  return VAR_11;
 }
 if (VAR_16 < 0)
  return ((void*)0);
 if ((VAR_16 & (VAR_4|VAR_3)) != 0) {
  VAR_11 = FUNC_9(VAR_9, VAR_10);
  return VAR_11;
 } else if ((VAR_16 & VAR_7) != 0) {
  VAR_0 = 1;
  VAR_11 = FUNC_8(VAR_9, VAR_10);
  return VAR_11;
 } else if ((VAR_16 & VAR_6) != 0) {
  VAR_0 = 1;
  VAR_11 = FUNC_7(VAR_9, VAR_10);
  return VAR_11;
 } else if ((VAR_16 & VAR_2) != 0) {
  VAR_11 = FUNC_0(VAR_9, VAR_10);
  return VAR_11;
 } else if ((VAR_16 & VAR_5) != 0) {
  VAR_11 = FUNC_6(VAR_9, VAR_10);
  return VAR_11;
 }
 return ((void*)0);
}
