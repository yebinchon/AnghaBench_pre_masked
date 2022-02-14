
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_info {int name; } ;
typedef scalar_t__ off_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char* VAR_5 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 char* FUNC_2 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char*) ;

__attribute__((used)) static void
FUNC_9(struct mic_info *VAR_6)
{
 int VAR_7;
 off_t VAR_8;
 char VAR_9[] = "/lib/firmware/mic/System.map";
 char *VAR_10, *VAR_11, VAR_12[17] = {'\0'};

 VAR_7 = FUNC_5(VAR_9, VAR_2);
 if (VAR_7 < 0) {
  FUNC_3("%s: Opening System.map failed: %d\n",
   VAR_6->name, VAR_5);
  return;
 }
 VAR_8 = FUNC_1(VAR_7, 0, VAR_4);
 if (VAR_8 < 0) {
  FUNC_3("%s: Reading System.map size failed: %d\n",
   VAR_6->name, VAR_5);
  FUNC_0(VAR_7);
  return;
 }
 VAR_10 = FUNC_2(((void*)0), VAR_8, VAR_3, VAR_1, VAR_7, 0);
 if (VAR_10 == VAR_0) {
  FUNC_3("%s: mmap of System.map failed: %d\n",
   VAR_6->name, VAR_5);
  FUNC_0(VAR_7);
  return;
 }
 VAR_11 = FUNC_8(VAR_10, "__log_buf");
 if (!VAR_11) {
  FUNC_3("%s: __log_buf not found: %d\n", VAR_6->name, VAR_5);
  FUNC_4(VAR_10, VAR_8);
  FUNC_0(VAR_7);
  return;
 }
 FUNC_7(VAR_12, VAR_11 - 19, 16);
 FUNC_6(VAR_6->name, "log_buf_addr", VAR_12);
 FUNC_3("%s: log_buf_addr: %s\n", VAR_6->name, VAR_12);
 VAR_11 = FUNC_8(VAR_10, "log_buf_len");
 if (!VAR_11) {
  FUNC_3("%s: log_buf_len not found: %d\n", VAR_6->name, VAR_5);
  FUNC_4(VAR_10, VAR_8);
  FUNC_0(VAR_7);
  return;
 }
 FUNC_7(VAR_12, VAR_11 - 19, 16);
 FUNC_6(VAR_6->name, "log_buf_len", VAR_12);
 FUNC_3("%s: log_buf_len: %s\n", VAR_6->name, VAR_12);
 FUNC_4(VAR_10, VAR_8);
 FUNC_0(VAR_7);
}
