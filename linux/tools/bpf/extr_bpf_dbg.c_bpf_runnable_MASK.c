
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {unsigned int len; struct sock_filter* filter; } ;
struct sock_filter {scalar_t__ k; int code; } ;
typedef int bpf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,int ,struct sock_fprog*,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct sock_filter *VAR_6, unsigned int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct sock_fprog VAR_11 = {
  .filter = VAR_6,
  .len = VAR_7,
 };

 VAR_8 = FUNC_4(VAR_0, VAR_3, 0);
 if (VAR_8 < 0) {
  FUNC_2("cannot open socket!\n");
  return 0;
 }
 VAR_9 = FUNC_3(VAR_8, VAR_4, VAR_5, &VAR_11, sizeof(VAR_11));
 FUNC_1(VAR_8);
 if (VAR_9 < 0) {
  FUNC_2("program not allowed to run by kernel!\n");
  return 0;
 }
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (FUNC_0(VAR_6[VAR_10].code) == VAR_1 &&
      VAR_6[VAR_10].k > VAR_2) {
   FUNC_2("extensions currently not supported!\n");
   return 0;
  }
 }

 return 1;
}
