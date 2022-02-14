
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {int flags; int size; } ;
struct evsel {int name; } ;


 int VAR_0 ;
 struct tep_format_field* FUNC_0 (struct evsel*,char const*) ;
 int FUNC_1 (char*,int ,char const*,...) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_1, const char *VAR_2,
      int VAR_3, bool VAR_4)
{
 struct tep_format_field *VAR_5 = FUNC_0(VAR_1, VAR_2);
 int VAR_6;
 int VAR_7 = 0;

 if (VAR_5 == ((void*)0)) {
  FUNC_1("%s: \"%s\" field not found!\n", VAR_1->name, VAR_2);
  return -1;
 }

 VAR_6 = !!(VAR_5->flags & VAR_0);
 if (VAR_4 && !VAR_6) {
  FUNC_1("%s: \"%s\" signedness(%d) is wrong, should be %d\n",
    VAR_1->name, VAR_2, VAR_6, VAR_4);
  VAR_7 = -1;
 }

 if (VAR_5->size != VAR_3) {
  FUNC_1("%s: \"%s\" size (%d) should be %d!\n",
    VAR_1->name, VAR_2, VAR_5->size, VAR_3);
  VAR_7 = -1;
 }

 return VAR_7;
}
