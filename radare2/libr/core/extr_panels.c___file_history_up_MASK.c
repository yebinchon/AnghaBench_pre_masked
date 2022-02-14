
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* io; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_9__ {int data; int length; int index; } ;
struct TYPE_10__ {int file_hist_index; TYPE_2__ buffer; TYPE_5__* user; } ;
struct TYPE_8__ {int files; } ;
typedef int RList ;
typedef TYPE_3__ RLine ;
typedef TYPE_4__ RIODesc ;
typedef TYPE_5__ RCore ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

int FUNC_6(RLine *VAR_1) {
 RCore *VAR_2 = VAR_1->user;
 RList *VAR_3 = FUNC_0 (VAR_2->io->files);
 int VAR_4 = FUNC_3 (VAR_3);
 if (VAR_1->file_hist_index >= VAR_4 || VAR_1->file_hist_index < 0) {
  return 0;
 }
 VAR_1->file_hist_index++;
 RIODesc *VAR_5 = FUNC_2 (VAR_3, VAR_4 - VAR_1->file_hist_index);
 if (VAR_5) {
  FUNC_5 (VAR_1->buffer.data, VAR_5->name, VAR_0 - 1);
  VAR_1->buffer.index = VAR_1->buffer.length = FUNC_4 (VAR_1->buffer.data);
 }
 FUNC_1 (VAR_3);
 return 1;
}
