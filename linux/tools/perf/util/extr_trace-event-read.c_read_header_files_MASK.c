
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned long long) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 unsigned long long FUNC_5 (struct tep_handle*) ;
 int FUNC_6 (unsigned long long) ;
 int FUNC_7 (struct tep_handle*) ;
 int FUNC_8 (struct tep_handle*) ;
 int FUNC_9 (struct tep_handle*,char*,unsigned long long,int ) ;
 int FUNC_10 (struct tep_handle*,int ) ;

__attribute__((used)) static int FUNC_11(struct tep_handle *VAR_1)
{
 unsigned long long VAR_2;
 char *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5 = 0;

 if (FUNC_0(VAR_4, 12) < 0)
  return -1;

 if (FUNC_3(VAR_4, "header_page", 12) != 0) {
  FUNC_4("did not read header page");
  return -1;
 }

 VAR_2 = FUNC_5(VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 == ((void*)0))
  return -1;

 if (FUNC_0(VAR_3, VAR_2) < 0) {
  FUNC_4("did not read header page");
  FUNC_1(VAR_3);
  return -1;
 }

 if (!FUNC_9(VAR_1, VAR_3, VAR_2,
       FUNC_8(VAR_1))) {




  FUNC_10(VAR_1, FUNC_7(VAR_1));
 }
 FUNC_1(VAR_3);

 if (FUNC_0(VAR_4, 13) < 0)
  return -1;

 if (FUNC_3(VAR_4, "header_event", 13) != 0) {
  FUNC_4("did not read header event");
  return -1;
 }

 VAR_2 = FUNC_5(VAR_1);
 FUNC_6(VAR_2);

 return VAR_5;
}
