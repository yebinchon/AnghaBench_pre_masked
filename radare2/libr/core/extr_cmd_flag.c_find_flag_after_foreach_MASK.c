
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct find_flag_t {scalar_t__ at; TYPE_1__* win; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
typedef TYPE_2__ RFlagItem ;
typedef int RFlag ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct find_flag_t*) ;

__attribute__((used)) static bool FUNC_1(RFlagItem *VAR_1, void *VAR_2) {
 if (VAR_1->size != 0) {
  return 1;
 }

 RFlag *VAR_3 = (RFlag *)VAR_2;
 struct find_flag_t VAR_4 = { .win = ((void*)0), .at = VAR_1->offset };
 FUNC_0 (VAR_3, VAR_0, &VAR_4);
 if (VAR_4.win) {
  VAR_1->size = VAR_4.win->offset - VAR_1->offset;
 }
 return 1;
}
