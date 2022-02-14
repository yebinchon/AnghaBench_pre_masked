
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next_segment; int closing; int rotating; int segment; int opening; int lock; scalar_t__ open; int next_path; } ;
typedef TYPE_1__ EncoderState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,char*,char const*) ;

void FUNC_3(EncoderState *VAR_0, const char* VAR_1, int VAR_2) {
  FUNC_0(&VAR_0->lock);
  FUNC_2(VAR_0->next_path, sizeof(VAR_0->next_path), "%s", VAR_1);
  VAR_0->next_segment = VAR_2;
  if (VAR_0->open) {
    if (VAR_0->next_segment == -1) {
      VAR_0->closing = 1;
    } else {
      VAR_0->rotating = 1;
    }
  } else {
    VAR_0->segment = VAR_0->next_segment;
    VAR_0->opening = 1;
  }
  FUNC_1(&VAR_0->lock);
}
