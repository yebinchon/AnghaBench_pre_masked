
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_6__ {char* syntax; } ;
struct TYPE_5__ {int size; int type; scalar_t__ delay; } ;
typedef TYPE_1__ RAnalOp ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__ VAR_19 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (TYPE_2__*,int const*,int) ;

int FUNC_3(RAnal *VAR_20, RAnalOp *VAR_21, ut64 VAR_22, const ut8 *VAR_23, int VAR_24) {
 const char * VAR_25 = VAR_19.syntax;

 VAR_21->delay = 0;
 VAR_21->size = FUNC_2(&VAR_19, VAR_23, VAR_24);
 VAR_21->type = VAR_9;

 VAR_25 = FUNC_1(VAR_25, "||") ? VAR_25 + 3 : VAR_25;

 if (FUNC_0(VAR_25, "B ")) {
  VAR_21->type = VAR_6;
  if (FUNC_0 (VAR_25, "B AC")) {
   VAR_21->type = VAR_16;
  }
 } else if (FUNC_0(VAR_25, "BCC ") || FUNC_0(VAR_25, "BCCU ")) {
  VAR_21->type = VAR_3;
 } else if (FUNC_0(VAR_25, "CALL ")) {
  VAR_21->type = VAR_1;
  if (FUNC_0 (VAR_25, "CALL AC")) {
   VAR_21->type = VAR_15;
  }
 } else if (FUNC_0(VAR_25, "CALLCC ")) {
  VAR_21->type = VAR_2;
 } else if (FUNC_0(VAR_25, "RET")) {
  VAR_21->type = VAR_12;
  if (FUNC_0 (VAR_25, "RETCC")) {
   VAR_21->type = VAR_5;
  }
 } else if (FUNC_0(VAR_25, "MOV ")) {
  VAR_21->type = VAR_7;
 } else if (FUNC_0(VAR_25, "PSHBOTH ")) {
  VAR_21->type = VAR_18;
 } else if (FUNC_0(VAR_25, "PSH ")) {
  VAR_21->type = VAR_11;
 } else if (FUNC_0(VAR_25, "POPBOTH ") || FUNC_0(VAR_25, "POP ")) {
  VAR_21->type = VAR_10;
 } else if (FUNC_0(VAR_25, "CMP ")) {
  VAR_21->type = VAR_4;
 } else if (FUNC_0(VAR_25, "CMPAND ")) {
  VAR_21->type = VAR_0;
 } else if (FUNC_0(VAR_25, "NOP")) {
  VAR_21->type = VAR_8;
 } else if (FUNC_0(VAR_25, "INTR ")) {
  VAR_21->type = VAR_13;
 } else if (FUNC_0(VAR_25, "TRAP ")) {
  VAR_21->type = VAR_14;
 } else if (FUNC_0(VAR_25, "INVALID")) {
  VAR_21->type = VAR_17;
 }

 return VAR_21->size;
}
