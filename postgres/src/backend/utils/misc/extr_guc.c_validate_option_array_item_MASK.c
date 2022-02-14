
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {int flags; scalar_t__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 struct config_generic* FUNC_3 (char const*,int,int ) ;
 int FUNC_4 (char const*,char const*,scalar_t__,int ,int ,int,int ,int) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static bool
FUNC_6(const char *VAR_9, const char *VAR_10,
         bool VAR_11)

{
 struct config_generic *VAR_12;
 VAR_12 = FUNC_3(VAR_9, 1, VAR_8);
 if (!VAR_12)
 {

  if (VAR_11)
   return 0;
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("unrecognized configuration parameter \"%s\"",
      VAR_9)));
 }

 if (VAR_12->flags & VAR_4)
 {




  if (FUNC_5())
   return 1;
  if (VAR_11)
   return 0;
  FUNC_0(VAR_2,
    (FUNC_1(VAR_0),
     FUNC_2("permission denied to set parameter \"%s\"", VAR_9)));
 }


 if (VAR_12->context == VAR_7)
            ;
 else if (VAR_12->context == VAR_5 && FUNC_5())
            ;
 else if (VAR_11)
  return 0;



 (void) FUNC_4(VAR_9, VAR_10,
        FUNC_5() ? VAR_5 : VAR_7,
        VAR_6, VAR_3, 0, 0, 0);

 return 1;
}
