
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path_cond {int uid; } ;
struct path {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_2__ {int disconnected; } ;


 int FUNC_0 (struct aa_profile*,int *,char const*,int ,char const*,int *,int *,int ,char const*,int) ;
 int FUNC_1 (struct path const*,int,char*,char const**,char const**,int ) ;
 int FUNC_2 (struct aa_label*,struct aa_profile*,int ) ;
 TYPE_1__* FUNC_3 (struct aa_label*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, struct aa_label *VAR_2,
       const struct path *VAR_3, int VAR_4, char *VAR_5,
       const char **VAR_6, struct path_cond *VAR_7, u32 VAR_8)
{
 struct aa_profile *VAR_9;
 const char *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_10,
        FUNC_3(VAR_2)->disconnected);
 if (VAR_11) {
  FUNC_2(VAR_2, VAR_9,
   FUNC_0(VAR_9, &VAR_0, VAR_1, VAR_8, *VAR_6,
          ((void*)0), ((void*)0), VAR_7->uid, VAR_10, VAR_11));
  return VAR_11;
 }

 return 0;
}
