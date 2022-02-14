
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct aa_profile {int disconnected; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (struct aa_profile*,int ) ;
 int FUNC_3 (struct path*,int ,char*,char const**,char const**,int ) ;
 int FUNC_4 (struct aa_profile*,struct path const*,char*,char const*,char const*,unsigned long,void*,int,char const*) ;
 int FUNC_5 (struct aa_profile*,struct path*) ;

__attribute__((used)) static int FUNC_6(struct aa_profile *VAR_2, const struct path *VAR_3,
       char *VAR_4, struct path *VAR_5, char *VAR_6,
       const char *VAR_7, unsigned long VAR_8, void *VAR_9,
       bool VAR_10)
{
 const char *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_1;

 FUNC_0(!VAR_2);
 FUNC_0(VAR_5 && !VAR_6);

 if (!FUNC_2(VAR_2, VAR_0))
  return 0;

 if (VAR_5) {
  VAR_13 = FUNC_3(VAR_5, FUNC_5(VAR_2, VAR_5),
         VAR_6, &VAR_11, &VAR_12,
         VAR_2->disconnected);
  if (VAR_13)
   VAR_11 = FUNC_1(VAR_13);
 }

 return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_11, VAR_7, VAR_8,
      VAR_9, VAR_10, VAR_12);
}
