
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct amt_host_if {int dummy; } ;
struct amt_code_versions {unsigned int count; TYPE_3__* versions; } ;
struct TYPE_5__ {char* string; } ;
struct TYPE_4__ {char* string; } ;
struct TYPE_6__ {TYPE_2__ version; TYPE_1__ description; } ;




 int FUNC_0 (struct amt_host_if*,struct amt_code_versions*) ;
 int FUNC_1 (struct amt_host_if*) ;
 int FUNC_2 (struct amt_host_if*,int,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(int VAR_0, char **VAR_1)
{
 struct amt_code_versions VAR_2;
 struct amt_host_if VAR_3;
 unsigned int VAR_4;
 uint32_t VAR_5;
 int VAR_6;
 bool VAR_7;

 VAR_7 = (VAR_0 > 1 && FUNC_4(VAR_1[1], "-v") == 0);

 if (!FUNC_2(&VAR_3, 5000, VAR_7)) {
  VAR_6 = 1;
  goto out;
 }

 VAR_5 = FUNC_0(&VAR_3, &VAR_2);

 FUNC_1(&VAR_3);

 switch (VAR_5) {
 case 129:
  FUNC_3("Intel AMT: DISABLED\n");
  VAR_6 = 0;
  break;
 case 128:
  FUNC_3("Intel AMT: ENABLED\n");
  for (VAR_4 = 0; VAR_4 < VAR_2.count; VAR_4++) {
   FUNC_3("%s:\t%s\n", VAR_2.versions[VAR_4].description.string,
    VAR_2.versions[VAR_4].version.string);
  }
  VAR_6 = 0;
  break;
 default:
  FUNC_3("An error has occurred\n");
  VAR_6 = 1;
  break;
 }

out:
 return VAR_6;
}
