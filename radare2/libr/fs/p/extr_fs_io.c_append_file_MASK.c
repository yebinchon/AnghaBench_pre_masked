
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int type; int time; int size; } ;
typedef int RList ;
typedef TYPE_1__ RFSFile ;


 TYPE_1__* FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(RList *VAR_0, const char *VAR_1, int VAR_2, int VAR_3, ut64 VAR_4) {
 RFSFile *VAR_5 = FUNC_0 (((void*)0), VAR_1);
 if (!VAR_5) {
  return;
 }
 VAR_5->type = VAR_2;
 VAR_5->time = VAR_3;
 VAR_5->size = VAR_4;
 FUNC_1 (VAR_0, VAR_5);
}
