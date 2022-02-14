
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct callchain_node {int dummy; } ;
struct callchain_list {int dummy; } ;
typedef int buf ;
typedef int bf ;
struct TYPE_2__ {scalar_t__ show_branchflag_count; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char**,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 char* FUNC_2 (struct callchain_list*,char*,int,int) ;
 int FUNC_3 (struct callchain_list*,int *,char*,int) ;
 scalar_t__ FUNC_4 (struct callchain_node*,int *,int ) ;
 scalar_t__ FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char,int *) ;
 int FUNC_7 (char const*,int *) ;
 int FUNC_8 (char*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static size_t FUNC_9(FILE *VAR_1, struct callchain_node *VAR_2,
         struct callchain_list *VAR_3,
         int VAR_4, int VAR_5, int VAR_6,
         u64 VAR_7, int VAR_8)
{
 int VAR_9;
 size_t VAR_10 = 0;
 char VAR_11[1024], *VAR_12 = ((void*)0);
 char VAR_13[64];
 const char *VAR_14;

 VAR_10 += FUNC_1(VAR_1, VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (VAR_5 & (1 << VAR_9))
   VAR_10 += FUNC_5(VAR_1, "|");
  else
   VAR_10 += FUNC_5(VAR_1, " ");
  if (!VAR_6 && VAR_9 == VAR_4 - 1) {
   VAR_10 += FUNC_5(VAR_1, "--");
   VAR_10 += FUNC_4(VAR_2, VAR_1, VAR_7);
   VAR_10 += FUNC_5(VAR_1, "--");
  } else
   VAR_10 += FUNC_5(VAR_1, "%s", "          ");
 }

 VAR_14 = FUNC_2(VAR_3, VAR_11, sizeof(VAR_11), 0);

 if (VAR_0.show_branchflag_count) {
  FUNC_3(VAR_3, ((void*)0),
          VAR_13, sizeof(VAR_13));

  if (FUNC_0(&VAR_12, "%s%s", VAR_14, VAR_13) < 0)
   VAR_14 = "Not enough memory!";
  else
   VAR_14 = VAR_12;
 }

 FUNC_7(VAR_14, VAR_1);
 FUNC_6('\n', VAR_1);
 FUNC_8(VAR_12);

 return VAR_10;
}
