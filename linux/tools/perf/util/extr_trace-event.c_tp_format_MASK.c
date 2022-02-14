
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_handle {int dummy; } ;
struct tep_event {int dummy; } ;
struct TYPE_2__ {struct tep_handle* pevent; } ;


 struct tep_event* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char**,size_t*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,char*,char const*) ;
 int FUNC_6 (struct tep_handle*,struct tep_event**,char*,size_t,char const*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct tep_event*
FUNC_7(const char *VAR_3, const char *VAR_4)
{
 char *VAR_5 = FUNC_3(VAR_3);
 struct tep_handle *VAR_6 = VAR_2.pevent;
 struct tep_event *VAR_7 = ((void*)0);
 char VAR_8[VAR_0];
 size_t VAR_9;
 char *VAR_10;
 int VAR_11;

 if (!VAR_5)
  return FUNC_0(-VAR_1);

 FUNC_5(VAR_8, VAR_0, "%s/%s/format", VAR_5, VAR_4);
 FUNC_4(VAR_5);

 VAR_11 = FUNC_1(VAR_8, &VAR_10, &VAR_9);
 if (VAR_11)
  return FUNC_0(VAR_11);

 FUNC_6(VAR_6, &VAR_7, VAR_10, VAR_9, VAR_3);

 FUNC_2(VAR_10);
 return VAR_7;
}
