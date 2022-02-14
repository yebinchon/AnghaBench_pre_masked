
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pg_locale_t ;
struct TYPE_3__ {int deterministic; } ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char const*,int,char const*,int,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char const*,int,char const*,int,int ,int) ;
 int FUNC_3 (char const*,int,char const*,int,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 TYPE_1__* FUNC_9 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_10(const char *VAR_4, int VAR_5, const char *VAR_6, int VAR_7, Oid VAR_8)
{
 if (VAR_8 && !FUNC_7(VAR_8) && VAR_8 != VAR_0)
 {
  pg_locale_t VAR_9 = FUNC_9(VAR_8);

  if (VAR_9 && !VAR_9->deterministic)
   FUNC_4(VAR_2,
     (FUNC_5(VAR_1),
      FUNC_6("nondeterministic collations are not supported for LIKE")));
 }

 if (FUNC_8() == 1)
  return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, 0, 1);
 else if (FUNC_0() == VAR_3)
  return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, 0, 1);
 else
  return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, 0, 1);
}
