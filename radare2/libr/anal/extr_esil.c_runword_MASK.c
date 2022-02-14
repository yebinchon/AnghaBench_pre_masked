
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ (* hook_command ) (TYPE_4__*,char const*) ;} ;
struct TYPE_16__ {int parse_goto_count; int trap; int parse_stop; int skip; int trap_code; scalar_t__ verbose; int * current_opstr; TYPE_2__ cb; TYPE_1__* Reil; } ;
struct TYPE_15__ {int (* code ) (TYPE_4__*) ;} ;
struct TYPE_13__ {int skip; char* if_buf; scalar_t__ cmd_count; scalar_t__ addr; } ;
typedef TYPE_3__ RAnalEsilOp ;
typedef TYPE_4__ RAnalEsil ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*,char const*,TYPE_3__**) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (TYPE_4__*,char*) ;
 int FUNC_6 (TYPE_4__*,char const*) ;
 int FUNC_7 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int * FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char const*,int) ;
 scalar_t__ FUNC_12 (TYPE_4__*,char const*) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_14(RAnalEsil *VAR_0, const char *VAR_1) {
 RAnalEsilOp *VAR_2 = ((void*)0);
 if (!VAR_1) {
  return 0;
 }
 VAR_0->parse_goto_count--;
 if (VAR_0->parse_goto_count < 1) {
  FUNC_0 ("ESIL infinite loop detected\n");
  VAR_0->trap = 1;
  VAR_0->parse_stop = 1;
  return 0;
 }


 if (!FUNC_8 (VAR_1, "?{") && VAR_0->Reil) {
  VAR_0->Reil->skip = VAR_0->Reil->skip? 0: 1;
  if (VAR_0->Reil->skip) {
   VAR_0->Reil->cmd_count = 0;
   FUNC_4 (VAR_0->Reil->if_buf, 0, sizeof (VAR_0->Reil->if_buf));
  }
 }

 if (VAR_0->Reil && VAR_0->Reil->skip) {
  char *VAR_3 = VAR_0->Reil->if_buf;
  FUNC_11 (VAR_3, VAR_1, sizeof (VAR_0->Reil->if_buf) - FUNC_10 (VAR_3) - 1);
  FUNC_11 (VAR_3, ",", sizeof (VAR_0->Reil->if_buf) - FUNC_10 (VAR_3) - 1);
  if (!FUNC_8 (VAR_1, "}")) {
   FUNC_7 (VAR_0, VAR_0->Reil->addr + VAR_0->Reil->cmd_count + 1);
   FUNC_5 (VAR_0, VAR_0->Reil->if_buf);
   return 1;
  }
  if (FUNC_3 (VAR_0, VAR_1, &VAR_2)) {
   VAR_0->Reil->cmd_count++;
  }
  return 1;
 }


 if (!FUNC_8 (VAR_1, "}{")) {
  if (VAR_0->skip == 1) {
   VAR_0->skip = 0;
  } else if (VAR_0->skip == 0) {
   VAR_0->skip = 1;
  }
  return 1;
 } else if (!FUNC_8 (VAR_1, "}")) {
  if (VAR_0->skip) {
   VAR_0->skip--;
  }
  return 1;
 }
 if (VAR_0->skip && FUNC_8(VAR_1, "?{")) {
  return 1;
 }

 if (FUNC_3 (VAR_0, VAR_1, &VAR_2)) {

  if (VAR_2) {
   if (VAR_0->cb.hook_command) {
    if (VAR_0->cb.hook_command (VAR_0, VAR_1)) {
     return 1;
    }
   }
   VAR_0->current_opstr = FUNC_9 (VAR_1);


   const bool VAR_4 = VAR_2->code (VAR_0);
   FUNC_2 (VAR_0->current_opstr);
   VAR_0->current_opstr = ((void*)0);
   if (!VAR_4) {
    if (VAR_0->verbose) {
     FUNC_1 ("%s returned 0\n", VAR_1);
    }
   }
   return VAR_4;
  }
 }
 if (!*VAR_1 || *VAR_1 == ',') {

  return 1;
 }


 if (!FUNC_6 (VAR_0, VAR_1)) {
  FUNC_0 ("ESIL stack is full");
  VAR_0->trap = 1;
  VAR_0->trap_code = 1;
 }
 return 1;
}
