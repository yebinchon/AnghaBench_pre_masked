
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int xferType; } ;
struct TYPE_5__ {int curTransferType; } ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,int ,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,char*,int,char const*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4(const int VAR_7, const char **const VAR_8, const CommandPtr VAR_9, const ArgvInfoPtr VAR_10)
{
 int VAR_11;
 int VAR_12;
 const char *VAR_13;

 FUNC_0(VAR_2);
 if (VAR_7 < 2) {
  VAR_11 = VAR_8[0][0];
  if (VAR_11 == 't') {
   if (VAR_0.xferType == VAR_4) {
    VAR_11 = VAR_4;
    VAR_13 = "ASCII";
   } else if (VAR_0.xferType == VAR_6) {
    VAR_11 = VAR_6;
    VAR_13 = "EBCDIC";
   } else {
    VAR_11 = VAR_5;
    VAR_13 = "binary/image";
   }
   FUNC_3(-1, "Type is %c (%s).\n", VAR_11, VAR_13);
  } else {
   VAR_12 = FUNC_2(&VAR_1, VAR_11);
   if (VAR_12 < 0) {
    FUNC_1(&VAR_1, VAR_12, VAR_3, "Type", VAR_8[1]);
   } else {
    VAR_0.xferType = VAR_1.curTransferType;
   }
  }
 } else {
  VAR_11 = VAR_8[1][0];
  VAR_12 = FUNC_2(&VAR_1, VAR_11);
  if (VAR_12 < 0) {
   FUNC_1(&VAR_1, VAR_12, VAR_3, "Type", VAR_8[1]);
  } else {
   VAR_0.xferType = VAR_1.curTransferType;
  }
 }
}
