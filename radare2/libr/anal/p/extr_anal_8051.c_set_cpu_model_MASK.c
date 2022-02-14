
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_11__ {char* name; scalar_t__ map_pdata; scalar_t__ map_code; scalar_t__ map_xdata; scalar_t__ map_sfr; scalar_t__ map_idata; } ;
struct TYPE_9__ {scalar_t__ cmd; } ;
struct TYPE_8__ {scalar_t__ fd_get_name; } ;
struct TYPE_10__ {char* cpu; TYPE_2__ coreb; TYPE_1__ iob; int reg; } ;
typedef TYPE_3__ RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_6__* VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(RAnal *VAR_5, bool VAR_6) {
 ut32 VAR_7, VAR_8, VAR_9;

 if (!VAR_5->reg) {
  return;
 }

 const char *VAR_10 = VAR_5->cpu;
 if (!VAR_10 || !VAR_10[0]) {
  VAR_10 = VAR_4[0].name;
 }


 if (VAR_6 || !VAR_3 || FUNC_3 (VAR_10, VAR_3->name)) {

  int VAR_11 = 0;
  while (VAR_4[VAR_11].name && FUNC_3 (VAR_10, VAR_4[VAR_11].name)) {
   VAR_11++;
  }
  if (!VAR_4[VAR_11].name) {
   VAR_11 = 0;
  }
  VAR_3 = &VAR_4[VAR_11];




  VAR_7 = VAR_4[VAR_11].map_idata;
  VAR_8 = VAR_4[VAR_11].map_sfr;
  VAR_9 = VAR_4[VAR_11].map_xdata;
  FUNC_1 (VAR_5->reg, "_code", VAR_4[VAR_11].map_code);
  FUNC_1 (VAR_5->reg, "_idata", VAR_7);
  FUNC_1 (VAR_5->reg, "_sfr", VAR_8 - 0x80);
  FUNC_1 (VAR_5->reg, "_xdata", VAR_9);
  FUNC_1 (VAR_5->reg, "_pdata", VAR_4[VAR_11].map_pdata);
 } else {
  VAR_7 = FUNC_0 (VAR_5->reg, "_idata");
  VAR_8 = FUNC_0 (VAR_5->reg, "_sfr") + 0x80;
  VAR_9 = FUNC_0 (VAR_5->reg, "_xdata");
 }



 if (VAR_5->iob.fd_get_name && VAR_5->coreb.cmd) {
  FUNC_2 (VAR_5, VAR_0, VAR_7, 0x100, VAR_6);
  FUNC_2 (VAR_5, VAR_1, VAR_8, 0x80, VAR_6);
  FUNC_2 (VAR_5, VAR_2, VAR_9, 0x10000, VAR_6);
 }
}
