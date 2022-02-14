
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 char *VAR_3 = FUNC_0("header_page");
 struct stat VAR_4;
 int VAR_5 = -VAR_0;

 if (!VAR_3) {
  FUNC_1("can't get tracing/events/header_page");
  return -VAR_1;
 }

 if (FUNC_4(VAR_3, &VAR_4) < 0) {
  FUNC_1("can't read '%s'", VAR_3);
  goto out;
 }

 if (FUNC_5(VAR_2, "header_page", 12) != 12) {
  FUNC_1("can't write header_page\n");
  goto out;
 }

 if (FUNC_3(VAR_3, 8) < 0) {
  FUNC_1("can't record header_page file\n");
  goto out;
 }

 FUNC_2(VAR_3);

 VAR_3 = FUNC_0("header_event");
 if (!VAR_3) {
  FUNC_1("can't get tracing/events/header_event");
  VAR_5 = -VAR_1;
  goto out;
 }

 if (FUNC_4(VAR_3, &VAR_4) < 0) {
  FUNC_1("can't read '%s'", VAR_3);
  goto out;
 }

 if (FUNC_5(VAR_2, "header_event", 13) != 13) {
  FUNC_1("can't write header_event\n");
  goto out;
 }

 if (FUNC_3(VAR_3, 8) < 0) {
  FUNC_1("can't record header_event file\n");
  goto out;
 }

 VAR_5 = 0;
out:
 FUNC_2(VAR_3);
 return VAR_5;
}
