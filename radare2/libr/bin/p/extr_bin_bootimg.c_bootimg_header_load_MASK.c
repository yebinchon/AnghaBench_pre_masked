
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_5__ {scalar_t__ extra_cmdline; scalar_t__* id; scalar_t__ cmdline; scalar_t__ name; } ;
struct TYPE_4__ {int buf; TYPE_2__ bi; } ;
typedef int Sdb ;
typedef TYPE_1__ BootImageObj ;
typedef TYPE_2__ BootImage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int FUNC_5 (int *,char*,char*,int ) ;

__attribute__((used)) static int FUNC_6(BootImageObj *VAR_3, Sdb *VAR_4) {
 char *VAR_5;
 int VAR_6;
 if (FUNC_2 (VAR_3->buf) < sizeof (BootImage)) {
  return 0;
 }

 BootImage *VAR_7 = &VAR_3->bi;
 (void) FUNC_1 (VAR_3->buf, 0, (ut8 *)VAR_7, sizeof (BootImage));
 if ((VAR_5 = FUNC_3 ((char *) VAR_7->name, VAR_2))) {
  FUNC_5 (VAR_4, "name", VAR_5, 0);
  FUNC_0 (VAR_5);
 }
 if ((VAR_5 = FUNC_3 ((char *) VAR_7->cmdline, VAR_0))) {
  FUNC_5 (VAR_4, "cmdline", VAR_5, 0);
  FUNC_0 (VAR_5);
 }
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  FUNC_4 (VAR_4, "id", (ut64) VAR_7->id[VAR_6], 0);
 }
 if ((VAR_5 = FUNC_3 ((char *) VAR_7->extra_cmdline, VAR_1))) {
  FUNC_5 (VAR_4, "extra_cmdline", VAR_5, 0);
  FUNC_0 (VAR_5);
 }
 return 1;
}
