
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int size; int config; int type; } ;
typedef int errmsg ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char const*) ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,char const*,char const*,int ) ;
 int FUNC_3 (int ,struct perf_event_attr*,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_5,
          const char *VAR_6)
{
 struct perf_event_attr VAR_7 = {};
 char VAR_8[VAR_2];
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_5, VAR_6);
 if (VAR_9 < 0) {
  FUNC_2("failed to determine tracepoint '%s/%s' perf event ID: %s\n",
      VAR_5, VAR_6,
      FUNC_1(VAR_9, VAR_8, sizeof(VAR_8)));
  return VAR_9;
 }

 VAR_7.type = VAR_1;
 VAR_7.size = sizeof(VAR_7);
 VAR_7.config = VAR_9;

 VAR_10 = FUNC_3(VAR_3, &VAR_7, -1 , 0 ,
        -1 , VAR_0);
 if (VAR_10 < 0) {
  VAR_11 = -VAR_4;
  FUNC_2("tracepoint '%s/%s' perf_event_open() failed: %s\n",
      VAR_5, VAR_6,
      FUNC_1(VAR_11, VAR_8, sizeof(VAR_8)));
  return VAR_11;
 }
 return VAR_10;
}
