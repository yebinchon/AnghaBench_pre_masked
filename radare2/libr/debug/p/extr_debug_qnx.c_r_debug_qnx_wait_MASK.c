
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ptid_t ;
struct TYPE_8__ {int notify_type; int signal; } ;
struct TYPE_6__ {int signum; } ;
struct TYPE_7__ {TYPE_1__ reason; } ;
typedef TYPE_2__ RDebug ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_2 (RDebug *VAR_2, int VAR_3) {
 ptid_t VAR_4 = FUNC_1 (VAR_0, VAR_3);
 if (!FUNC_0 (VAR_4, VAR_1)) {
  VAR_2->reason.signum = VAR_0->signal;
  return VAR_0->notify_type;
 }
 return 0;
}
