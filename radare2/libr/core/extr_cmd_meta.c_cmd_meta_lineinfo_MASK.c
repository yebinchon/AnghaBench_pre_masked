
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
struct TYPE_12__ {TYPE_1__* cur; } ;
struct TYPE_11__ {scalar_t__ sdb_addrinfo; } ;
struct TYPE_10__ {TYPE_6__* bin; int num; scalar_t__ offset; } ;
struct TYPE_9__ {int sdb_addrinfo; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RBinFile ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 TYPE_3__* FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int * FUNC_8 (char*,int*) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (char const*,char) ;
 char* FUNC_12 (char const*) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int FUNC_14(RCore *VAR_5, const char *VAR_6) {
 int VAR_7;
 ut64 VAR_8 = VAR_0;
 bool VAR_9 = 0;
 int VAR_10 = 0;
 const char *VAR_11 = VAR_6;
 char *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);

 if (*VAR_11 == '?') {
  FUNC_1 ("Usage: CL[.-*?] [addr] [file:line]\n");
  FUNC_1 ("or: CL [addr] base64:[string]\n");
  FUNC_2 (VAR_13);
  return 0;
 }
 if (*VAR_11 == '-') {
  VAR_11++;
  VAR_9 = 1;
 }
 if (*VAR_11 == '.') {
  VAR_11++;
  VAR_8 = VAR_5->offset;
 }
 if (*VAR_11 == ' ') {
  VAR_11 = FUNC_6 (VAR_11 + 1);
  char *VAR_14 = FUNC_11 (VAR_11, ' ');
  if (!VAR_14) {
   VAR_8 = FUNC_5 (VAR_5->num, VAR_11);
   VAR_11 = "";
  }
 } else if (*VAR_11 == '*') {
  VAR_11++;
  VAR_10 = 1;
  VAR_2 = '*';
 } else {
  VAR_2 = 0;
 }

 if (VAR_10) {
  if (VAR_9) {
   FUNC_10 (VAR_5->bin->cur->sdb_addrinfo);
  } else {
   FUNC_9 (VAR_5->bin->cur->sdb_addrinfo, VAR_4, ((void*)0));
  }
  FUNC_2 (VAR_13);
  return 0;
 }

 VAR_11 = FUNC_6 (VAR_11);
 char *VAR_15 = FUNC_12 (VAR_11);
 char *VAR_16 = FUNC_11 (VAR_15, ' ');
 if (VAR_16) {
  *VAR_16 = 0;
  VAR_16++;
  if (VAR_8 == VAR_0) {
   VAR_8 = FUNC_5 (VAR_5->num, VAR_15);
  }

  if (!FUNC_13 (VAR_16, "base64:", 7)) {
   int VAR_17 = 0;
   ut8 *VAR_18 = FUNC_8 (VAR_16 + 7, &VAR_17);
   if (!VAR_18) {
    FUNC_1 ("Invalid base64\n");
    return 0;
   }
   VAR_16 = VAR_13 = (char *)VAR_18;
  }
  RBinFile *VAR_19 = FUNC_4 (VAR_5->bin);
  VAR_7 = 0;
  if (VAR_19 && VAR_19->sdb_addrinfo) {
   VAR_7 = FUNC_0 (VAR_19->sdb_addrinfo, VAR_16, VAR_8);
  } else {
   FUNC_1 ("TODO: Support global SdbAddrinfo or dummy rbinfile to handlee this case\n");
  }
  FUNC_2 (VAR_12);
  FUNC_2 (VAR_15);
  FUNC_2 (VAR_13);
  return VAR_7;
 }
 FUNC_2 (VAR_15);
 if (VAR_9) {
  FUNC_7 (VAR_5, VAR_8);
 } else {

  VAR_3 = VAR_8;
  VAR_1 = 0;
  FUNC_9 (VAR_5->bin->cur->sdb_addrinfo, VAR_4, ((void*)0));
  if (VAR_1 == 0) {
   FUNC_3 (VAR_5, VAR_8);
  }
 }
 FUNC_2 (VAR_13);
 return 0;
}
