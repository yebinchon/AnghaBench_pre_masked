
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct perf_event_attr {int config; int size; int type; int config2; int config1; } ;
typedef int errmsg ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,struct perf_event_attr*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_8(bool VAR_4, bool VAR_5, const char *VAR_6,
     uint64_t VAR_7, int VAR_8)
{
 struct perf_event_attr VAR_9 = {};
 char VAR_10[VAR_1];
 int VAR_11, VAR_12, VAR_13;

 VAR_11 = VAR_4 ? FUNC_2()
        : FUNC_0();
 if (VAR_11 < 0) {
  FUNC_5("failed to determine %s perf type: %s\n",
      VAR_4 ? "uprobe" : "kprobe",
      FUNC_4(VAR_11, VAR_10, sizeof(VAR_10)));
  return VAR_11;
 }
 if (VAR_5) {
  int VAR_14 = VAR_4 ? FUNC_3()
     : FUNC_1();

  if (VAR_14 < 0) {
   FUNC_5("failed to determine %s retprobe bit: %s\n",
       VAR_4 ? "uprobe" : "kprobe",
       FUNC_4(VAR_14, VAR_10,
           sizeof(VAR_10)));
   return VAR_14;
  }
  VAR_9.config |= 1 << VAR_14;
 }
 VAR_9.size = sizeof(VAR_9);
 VAR_9.type = VAR_11;
 VAR_9.config1 = FUNC_6(VAR_6);
 VAR_9.config2 = VAR_7;


 VAR_12 = FUNC_7(VAR_2, &VAR_9,
        VAR_8 < 0 ? -1 : VAR_8 ,
        VAR_8 == -1 ? 0 : -1 ,
        -1 , VAR_0);
 if (VAR_12 < 0) {
  VAR_13 = -VAR_3;
  FUNC_5("%s perf_event_open() failed: %s\n",
      VAR_4 ? "uprobe" : "kprobe",
      FUNC_4(VAR_13, VAR_10, sizeof(VAR_10)));
  return VAR_13;
 }
 return VAR_12;
}
