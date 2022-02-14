
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ time_t ;
struct timeval {unsigned long tv_sec; scalar_t__ tv_usec; } ;
struct fpm_scoreboard_s {char* pool; int nprocs; scalar_t__ slow_rq; scalar_t__ max_children_reached; scalar_t__ active_max; scalar_t__ active; scalar_t__ idle; scalar_t__ lq_len; scalar_t__ lq_max; scalar_t__ lq; scalar_t__ requests; scalar_t__ start_epoch; int pm; } ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int tms_utime; int tms_stime; int tms_cutime; int tms_cstime; } ;
struct fpm_scoreboard_proc_s {int used; scalar_t__ request_stage; char* request_method; char* request_uri; char* query_string; char* auth_user; char* script_filename; scalar_t__ memory; scalar_t__ content_length; int accepted; struct timeval duration; scalar_t__ requests; scalar_t__ start_epoch; scalar_t__ pid; TYPE_2__ cpu_duration; TYPE_1__ last_request_cpu; } ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,double) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct timeval*) ;
 char* FUNC_8 (scalar_t__) ;
 struct fpm_scoreboard_s* FUNC_9 (int *,int) ;
 int FUNC_10 () ;
 struct fpm_scoreboard_proc_s* FUNC_11 (struct fpm_scoreboard_s*,int,int) ;
 int FUNC_12 (struct fpm_scoreboard_proc_s*) ;
 int FUNC_13 (struct fpm_scoreboard_s*) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (struct timeval*,int *,struct timeval*) ;
 int FUNC_16 (int ,char*,char*) ;

int FUNC_17(zval *VAR_2)
{
 struct fpm_scoreboard_s VAR_3, *VAR_4;
 zval VAR_5, VAR_6;
 time_t VAR_7;
 struct timeval VAR_8, VAR_9;
 double VAR_10;
 int VAR_11;


 VAR_4 = FUNC_9(((void*)0), 1);
 if (!VAR_4) {
  FUNC_16(VAR_1, "[pool %s] status: scoreboard already in use.", VAR_4->pool);
  return -1;
 }


 VAR_3 = *VAR_4;
 struct fpm_scoreboard_proc_s VAR_12[VAR_3.nprocs];

 struct fpm_scoreboard_proc_s *VAR_13;
 for(VAR_11=0; VAR_11<VAR_3.nprocs; VAR_11++) {
  VAR_13 = FUNC_11(VAR_4, VAR_11, 1);
  if (!VAR_13){
   VAR_12[VAR_11].used=-1;
   continue;
  }
  VAR_12[VAR_11] = *VAR_13;
  FUNC_12(VAR_13);
 }
 FUNC_13(VAR_4);

 VAR_7 = FUNC_14(((void*)0));
 FUNC_7(&VAR_9);

 FUNC_6(VAR_2);
 FUNC_3(VAR_2, "pool", VAR_3.pool);
 FUNC_3(VAR_2, "process-manager", FUNC_0(VAR_3.pm));
 FUNC_2(VAR_2, "start-time", VAR_3.start_epoch);
 FUNC_2(VAR_2, "start-since", VAR_7 - VAR_3.start_epoch);
 FUNC_2(VAR_2, "accepted-conn", VAR_3.requests);





 FUNC_2(VAR_2, "idle-processes", VAR_3.idle);
 FUNC_2(VAR_2, "active-processes", VAR_3.active);
 FUNC_2(VAR_2, "total-processes", VAR_3.idle + VAR_3.active);
 FUNC_2(VAR_2, "max-active-processes", VAR_3.active_max);
 FUNC_2(VAR_2, "max-children-reached", VAR_3.max_children_reached);
 FUNC_2(VAR_2, "slow-requests", VAR_3.slow_rq);

 FUNC_6(&VAR_5);
 for(VAR_11=0; VAR_11<VAR_3.nprocs; VAR_11++) {
  if (!VAR_12[VAR_11].used) {
   continue;
  }
  VAR_13 = &VAR_12[VAR_11];
  FUNC_6(&VAR_6);
  FUNC_2(&VAR_6, "pid", VAR_12[VAR_11].pid);
  FUNC_3(&VAR_6, "state", FUNC_8(VAR_12[VAR_11].request_stage));
  FUNC_2(&VAR_6, "start-time", VAR_12[VAR_11].start_epoch);
  FUNC_2(&VAR_6, "start-since", VAR_7 - VAR_12[VAR_11].start_epoch);
  FUNC_2(&VAR_6, "requests", VAR_12[VAR_11].requests);
  if (VAR_12[VAR_11].request_stage == VAR_0) {
   VAR_8 = VAR_12[VAR_11].duration;
  } else {
   FUNC_15(&VAR_9, &VAR_12[VAR_11].accepted, &VAR_8);
  }
  FUNC_2(&VAR_6, "request-duration", VAR_8.tv_sec * 1000000UL + VAR_8.tv_usec);
  FUNC_3(&VAR_6, "request-method", VAR_12[VAR_11].request_method[0] != '\0' ? VAR_12[VAR_11].request_method : "-");
  FUNC_3(&VAR_6, "request-uri", VAR_12[VAR_11].request_uri);
  FUNC_3(&VAR_6, "query-string", VAR_12[VAR_11].query_string);
  FUNC_2(&VAR_6, "request-length", VAR_12[VAR_11].content_length);
  FUNC_3(&VAR_6, "user", VAR_12[VAR_11].auth_user[0] != '\0' ? VAR_12[VAR_11].auth_user : "-");
  FUNC_3(&VAR_6, "script", VAR_12[VAR_11].script_filename[0] != '\0' ? VAR_12[VAR_11].script_filename : "-");



  FUNC_2(&VAR_6, "last-request-memory", VAR_12[VAR_11].request_stage == VAR_0 ? VAR_12[VAR_11].memory : 0);
  FUNC_5(&VAR_5, &VAR_6);
 }
 FUNC_4(VAR_2, "procs", &VAR_5);
 return 0;
}
