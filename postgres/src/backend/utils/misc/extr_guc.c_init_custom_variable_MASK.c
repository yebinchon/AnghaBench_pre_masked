
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_generic {char const* short_desc; char const* long_desc; int flags; int vartype; int group; scalar_t__ context; int name; } ;
typedef enum config_type { ____Placeholder_config_type } config_type ;
typedef scalar_t__ GucContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (struct config_generic*,int ,size_t) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static struct config_generic *
FUNC_5(const char *VAR_8,
      const char *VAR_9,
      const char *VAR_10,
      GucContext VAR_11,
      int VAR_12,
      enum config_type VAR_13,
      size_t VAR_14)
{
 struct config_generic *VAR_15;
 if (VAR_11 == VAR_4 &&
  !VAR_7)
  FUNC_0(VAR_2, "cannot create PGC_POSTMASTER variables after startup");







 if (VAR_12 & VAR_3)
  FUNC_0(VAR_2, "extensions cannot define GUC_LIST_QUOTE variables");







 if (VAR_11 == VAR_6 &&
  (FUNC_4(VAR_8, "pljava.classpath") == 0 ||
   FUNC_4(VAR_8, "pljava.vmoptions") == 0))
  VAR_11 = VAR_5;

 VAR_15 = (struct config_generic *) FUNC_1(VAR_1, VAR_14);
 FUNC_3(VAR_15, 0, VAR_14);

 VAR_15->name = FUNC_2(VAR_1, VAR_8);
 VAR_15->context = VAR_11;
 VAR_15->group = VAR_0;
 VAR_15->short_desc = VAR_9;
 VAR_15->long_desc = VAR_10;
 VAR_15->flags = VAR_12;
 VAR_15->vartype = VAR_13;

 return VAR_15;
}
