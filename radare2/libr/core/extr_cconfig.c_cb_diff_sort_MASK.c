
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* value; } ;
struct TYPE_5__ {TYPE_1__* anal; } ;
struct TYPE_4__ {void* columnSort; } ;
typedef void* RListComparator ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RConfigNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(void *VAR_6, void *VAR_7) {
 RConfigNode *VAR_8 = VAR_7;
 const char *VAR_9 = VAR_8->value;
 RCore *VAR_10 = VAR_6;
 if (VAR_9 && FUNC_1 (VAR_9, "?")) {
  if (!FUNC_1 (VAR_9, "name")) {
   VAR_10->anal->columnSort = (RListComparator)VAR_2;
  } else if (!FUNC_1 (VAR_9, "namelen")) {
   VAR_10->anal->columnSort = (RListComparator)VAR_3;
  } else if (!FUNC_1 (VAR_9, "addr")) {
   VAR_10->anal->columnSort = (RListComparator)VAR_0;
  } else if (!FUNC_1 (VAR_9, "type")) {
   VAR_10->anal->columnSort = (RListComparator)VAR_5;
  } else if (!FUNC_1 (VAR_9, "size")) {
   VAR_10->anal->columnSort = (RListComparator)VAR_4;
  } else if (!FUNC_1 (VAR_9, "dist")) {
   VAR_10->anal->columnSort = (RListComparator)VAR_1;
  } else {
   goto fail;
  }
  return 1;
 }
fail:
 FUNC_0 ("e diff.sort = [name, namelen, addr, type, size, dist]\n");
 return 0;
}
