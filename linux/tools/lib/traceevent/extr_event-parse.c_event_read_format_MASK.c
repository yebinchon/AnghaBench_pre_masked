
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_common; int nr_fields; int fields; int common_fields; } ;
struct tep_event {TYPE_1__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tep_event*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char**) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct tep_event *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 if (FUNC_4(VAR_0, "format") < 0)
  return -1;

 if (FUNC_3(VAR_2, ":") < 0)
  return -1;

 if (FUNC_2(VAR_1, &VAR_4))
  goto fail;
 FUNC_1(VAR_4);

 VAR_5 = FUNC_0(VAR_3, &VAR_3->format.common_fields);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3->format.nr_common = VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_3->format.fields);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3->format.nr_fields = VAR_5;

 return 0;

 fail:
 FUNC_1(VAR_4);
 return -1;
}
