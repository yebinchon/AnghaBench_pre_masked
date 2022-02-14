
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* segment_path; } ;
struct TYPE_7__ {int part; int lock; TYPE_2__* cur_handle; } ;
typedef TYPE_1__ LoggerState ;
typedef TYPE_2__ LoggerHandle ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,size_t,char*,char*) ;

int FUNC_5(LoggerState *VAR_0, const char* VAR_1,
                            char* VAR_2, size_t VAR_3,
                            int* VAR_4) {
  FUNC_2(&VAR_0->lock);
  VAR_0->part++;

  LoggerHandle* VAR_5 = FUNC_1(VAR_0, VAR_1);
  if (!VAR_5) {
    FUNC_3(&VAR_0->lock);
    return -1;
  }

  if (VAR_0->cur_handle) {
    FUNC_0(VAR_0->cur_handle);
  }
  VAR_0->cur_handle = VAR_5;

  if (VAR_2) {
    FUNC_4(VAR_2, VAR_3, "%s", VAR_5->segment_path);
  }
  if (VAR_4) {
    *VAR_4 = VAR_0->part;
  }

  FUNC_3(&VAR_0->lock);
  return 0;
}
