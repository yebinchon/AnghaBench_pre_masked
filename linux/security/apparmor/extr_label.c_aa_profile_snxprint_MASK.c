
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* hname; } ;
struct aa_profile {size_t mode; TYPE_1__ base; struct aa_ns* ns; } ;
struct aa_ns {struct aa_profile* unconfined; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char* FUNC_1 (struct aa_ns*,struct aa_ns*,int) ;
 char** VAR_4 ;
 struct aa_ns* FUNC_2 (struct aa_profile*) ;
 int FUNC_3 (char*,size_t,char*,char const*,...) ;

__attribute__((used)) static int FUNC_4(char *VAR_5, size_t VAR_6, struct aa_ns *VAR_7,
          struct aa_profile *VAR_8, int VAR_9,
          struct aa_ns **VAR_10)
{
 const char *VAR_11 = ((void*)0);

 FUNC_0(!VAR_5 && VAR_6 != 0);
 FUNC_0(!VAR_8);

 if (!VAR_7)
  VAR_7 = FUNC_2(VAR_8);

 if (VAR_7 != VAR_8->ns &&
     (!VAR_10 || (*VAR_10 != VAR_8->ns))) {
  if (VAR_10)
   *VAR_10 = VAR_8->ns;
  VAR_11 = FUNC_1(VAR_7, VAR_8->ns,
         VAR_9 & VAR_2);
  if (VAR_11 == VAR_3) {
   if (VAR_9 & VAR_0)
    return FUNC_3(VAR_5, VAR_6, "%s", "unconfined");
   return FUNC_3(VAR_5, VAR_6, "%s", VAR_11);
  }
 }

 if ((VAR_9 & VAR_1) && VAR_8 != VAR_8->ns->unconfined) {
  const char *VAR_12 = VAR_4[VAR_8->mode];

  if (VAR_11)
   return FUNC_3(VAR_5, VAR_6, ":%s:%s (%s)", VAR_11,
     VAR_8->base.hname, VAR_12);
  return FUNC_3(VAR_5, VAR_6, "%s (%s)", VAR_8->base.hname,
    VAR_12);
 }

 if (VAR_11)
  return FUNC_3(VAR_5, VAR_6, ":%s:%s", VAR_11,
    VAR_8->base.hname);
 return FUNC_3(VAR_5, VAR_6, "%s", VAR_8->base.hname);
}
