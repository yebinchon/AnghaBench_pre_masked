
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EStates ;


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
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static EStates FUNC_1(char *VAR_16) {
 EStates VAR_17 = VAR_11;

 if (FUNC_0 (VAR_16, "member")) {
  VAR_17 = VAR_6;
 } else if (FUNC_0 (VAR_16, "pointer")) {
  VAR_17 = VAR_9;
 } else if (FUNC_0 (VAR_16, "union")) {
  VAR_17 = VAR_13;
 } else if (FUNC_0 (VAR_16, "struct")) {
  VAR_17 = VAR_12;
 } else if (FUNC_0 (VAR_16, "unsigned")) {
  VAR_17 = VAR_14;
 } else if (FUNC_0 (VAR_16, "short")) {
  VAR_17 = VAR_10;
 } else if (FUNC_0 (VAR_16, "long")) {
  VAR_17 = VAR_5;
 } else if (FUNC_0 (VAR_16, "char")) {
  VAR_17 = VAR_2;
 } else if (FUNC_0 (VAR_16, "modifier")) {
  VAR_17 = VAR_7;
 } else if (FUNC_0 (VAR_16, "enum")) {
  VAR_17 = VAR_4;
 } else if (FUNC_0 (VAR_16, "array")) {
  VAR_17 = VAR_0;
 } else if (FUNC_0 (VAR_16, "onemethod")) {
  VAR_17 = VAR_8;
 } else if (FUNC_0 (VAR_16, "void")) {
  VAR_17 = VAR_15;
 } else if (FUNC_0 (VAR_16, "double")) {
  VAR_17 = VAR_3;
 } else if (FUNC_0 (VAR_16, "bitfield")) {
  VAR_17 = VAR_1;
 }

 return VAR_17;
}
