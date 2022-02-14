
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut8 ;
typedef scalar_t__ ut64 ;
typedef int ut32 ;
typedef int ut16 ;
struct TYPE_11__ {scalar_t__ value; } ;
struct TYPE_10__ {int io; int offset; TYPE_1__* file; TYPE_3__* num; int config; } ;
struct TYPE_9__ {int fd; } ;
typedef TYPE_2__ RCore ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*,char const*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,scalar_t__,int) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13 (RCore *VAR_7, const char *VAR_8) {
 int VAR_9 = 0;
 ut64 VAR_10 = 0LL;
 ut8 VAR_11[sizeof(ut64)];
 int VAR_12 = FUNC_2 (VAR_7->config, "cfg.wseek");
 bool VAR_13 = FUNC_2 (VAR_7->config, "cfg.bigendian");

 VAR_7->num->value = 0;
 if (!VAR_8) {
  return;
 }

 if (VAR_8[0])
 switch (VAR_8[1]) {
 case '?':
  FUNC_4 (VAR_7, VAR_6);
  return;
 case '1': VAR_9 = 1; break;
 case '2': VAR_9 = 2; break;
 case '4': VAR_9 = 4; break;
 case '8': VAR_9 = 8; break;
 }
 if (VAR_8 && VAR_8[0] && VAR_8[1] && VAR_8[2]) {
  VAR_10 = FUNC_8 (VAR_7->num, VAR_8+2);
 }
 if (VAR_7->file) {
  FUNC_6 (VAR_7->io, VAR_7->file->fd);
 }
 ut64 VAR_14 = FUNC_5 (VAR_7->io, VAR_7->offset, VAR_0);
 if (VAR_14 == VAR_4) return;
 if (VAR_9 == 0)
  VAR_9 = (VAR_10&VAR_3)? 8: 4;
 switch (VAR_9) {
 case 1:
  FUNC_12 (VAR_11, (ut8)(VAR_10 & VAR_5));
  if (!FUNC_7 (VAR_7->io, VAR_11, 1)) {
   FUNC_1 (VAR_7);
  } else {
   FUNC_0 (VAR_7, 1);
  }
  break;
 case 2:
  FUNC_9 (VAR_11, (ut16)(VAR_10 & VAR_1), VAR_13);
  if (!FUNC_7 (VAR_7->io, VAR_11, 2)) {
   FUNC_1 (VAR_7);
  } else {
   FUNC_0 (VAR_7, 2);
  }
  break;
 case 4:
  FUNC_10 (VAR_11, (ut32)(VAR_10 & VAR_2), VAR_13);
  if (!FUNC_7 (VAR_7->io, VAR_11, 4)) {
   FUNC_1 (VAR_7);
  } else {
   FUNC_0 (VAR_7, 4);
  }
  break;
 case 8:
  FUNC_11 (VAR_11, VAR_10, VAR_13);
  if (!FUNC_7 (VAR_7->io, VAR_11, 8)) {
   FUNC_1 (VAR_7);
  } else {
   FUNC_0 (VAR_7, 8);
  }
  break;
 }
 FUNC_3 (VAR_7);
}
