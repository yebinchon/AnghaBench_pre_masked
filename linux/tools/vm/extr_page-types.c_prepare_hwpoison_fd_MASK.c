
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int ) ;
 char* FUNC_1 () ;
 int FUNC_2 (int ) ;
 char* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_8[VAR_1 + 1];

 VAR_3 = FUNC_1();
 if (!VAR_3) {
  FUNC_3("mount debugfs");
  FUNC_2(VAR_0);
 }

 if (VAR_6 && !VAR_5) {
  FUNC_4(VAR_8, VAR_1, "%s/hwpoison/corrupt-pfn",
   VAR_3);
  VAR_5 = FUNC_0(VAR_8, VAR_2);
 }

 if (VAR_7 && !VAR_4) {
  FUNC_4(VAR_8, VAR_1, "%s/hwpoison/unpoison-pfn",
   VAR_3);
  VAR_4 = FUNC_0(VAR_8, VAR_2);
 }
}
