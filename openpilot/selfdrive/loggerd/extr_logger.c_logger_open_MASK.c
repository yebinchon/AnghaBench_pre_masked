
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ refcnt; char* segment_path; char* log_path; char* qlog_path; char* lock_path; int * log_file; int * qlog_file; int lock; void* bz_qlog; void* bz_file; } ;
struct TYPE_6__ {char* route_name; int part; char* log_name; int init_data_len; int init_data; scalar_t__ has_qlog; TYPE_2__* handles; } ;
typedef TYPE_1__ LoggerState ;
typedef TYPE_2__ LoggerHandle ;
typedef int FILE ;


 int FUNC_0 (int*,void*,int ,int ) ;
 void* FUNC_1 (int*,int *,int,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int,char*,char const*,...) ;

__attribute__((used)) static LoggerHandle* FUNC_9(LoggerState *VAR_2, const char* VAR_3) {
  int VAR_4;

  LoggerHandle *VAR_5 = ((void*)0);
  for (int VAR_6=0; VAR_6<VAR_1; VAR_6++) {
    if (VAR_2->handles[VAR_6].refcnt == 0) {
      VAR_5 = &VAR_2->handles[VAR_6];
      break;
    }
  }
  FUNC_3(VAR_5);

  FUNC_8(VAR_5->segment_path, sizeof(VAR_5->segment_path),
          "%s/%s--%d", VAR_3, VAR_2->route_name, VAR_2->part);

  FUNC_8(VAR_5->log_path, sizeof(VAR_5->log_path), "%s/%s.bz2", VAR_5->segment_path, VAR_2->log_name);
  FUNC_8(VAR_5->qlog_path, sizeof(VAR_5->qlog_path), "%s/qlog.bz2", VAR_5->segment_path);
  FUNC_8(VAR_5->lock_path, sizeof(VAR_5->lock_path), "%s.lock", VAR_5->log_path);

  VAR_4 = FUNC_6(VAR_5->log_path);
  if (VAR_4) return ((void*)0);

  FILE* VAR_7 = FUNC_5(VAR_5->lock_path, "wb");
  if (VAR_7 == ((void*)0)) return ((void*)0);
  FUNC_4(VAR_7);

  VAR_5->log_file = FUNC_5(VAR_5->log_path, "wb");
  if (VAR_5->log_file == ((void*)0)) goto fail;

  if (VAR_2->has_qlog) {
    VAR_5->qlog_file = FUNC_5(VAR_5->qlog_path, "wb");
    if (VAR_5->qlog_file == ((void*)0)) goto fail;
  }

  int VAR_8;
  VAR_5->bz_file = FUNC_1(&VAR_8, VAR_5->log_file, 9, 0, 30);
  if (VAR_8 != VAR_0) goto fail;

  if (VAR_2->has_qlog) {
    VAR_5->bz_qlog = FUNC_1(&VAR_8, VAR_5->qlog_file, 9, 0, 30);
    if (VAR_8 != VAR_0) goto fail;
  }

  if (VAR_2->init_data) {
    FUNC_0(&VAR_8, VAR_5->bz_file, VAR_2->init_data, VAR_2->init_data_len);
    if (VAR_8 != VAR_0) goto fail;

    if (VAR_2->has_qlog) {

      FUNC_0(&VAR_8, VAR_5->bz_qlog, VAR_2->init_data, VAR_2->init_data_len);
      if (VAR_8 != VAR_0) goto fail;
    }
  }

  FUNC_7(&VAR_5->lock, ((void*)0));
  VAR_5->refcnt++;
  return VAR_5;
fail:
  FUNC_2("logger failed to open files");
  if (VAR_5->qlog_file) FUNC_4(VAR_5->qlog_file);
  if (VAR_5->log_file) FUNC_4(VAR_5->log_file);
  return ((void*)0);
}
