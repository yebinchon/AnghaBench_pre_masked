
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {int ContextFlags; } ;
struct TYPE_7__ {int tid; int pid; } ;
typedef TYPE_1__ RDebug ;
typedef int HANDLE ;
typedef TYPE_2__ CONTEXT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int const*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(RDebug *VAR_1, int VAR_2, const ut8* VAR_3, int VAR_4) {
 BOOL VAR_5 = 0;
 HANDLE VAR_6;



 CONTEXT VAR_7 __attribute__((aligned (16)));

 VAR_6 = FUNC_4 (VAR_1->pid, VAR_1->tid);
 VAR_7.ContextFlags = VAR_0;
 FUNC_1 (VAR_6, &VAR_7);


  if (VAR_4 > sizeof (CONTEXT)) {
   VAR_4 = sizeof (CONTEXT);
  }
  FUNC_3 (&VAR_7, VAR_3, VAR_4);
  VAR_5 = FUNC_2 (VAR_6, &VAR_7)? 1: 0;

 FUNC_0 (VAR_6);
 return VAR_5;
}
