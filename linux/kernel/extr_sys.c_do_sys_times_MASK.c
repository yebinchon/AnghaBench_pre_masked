
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct tms {void* tms_cstime; void* tms_cutime; void* tms_stime; void* tms_utime; } ;
struct TYPE_5__ {TYPE_1__* signal; } ;
struct TYPE_4__ {int cstime; int cutime; } ;


 TYPE_2__* VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct tms *VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4, VAR_5;

 FUNC_1(VAR_0, &VAR_2, &VAR_3);
 VAR_4 = VAR_0->signal->cutime;
 VAR_5 = VAR_0->signal->cstime;
 VAR_1->tms_utime = FUNC_0(VAR_2);
 VAR_1->tms_stime = FUNC_0(VAR_3);
 VAR_1->tms_cutime = FUNC_0(VAR_4);
 VAR_1->tms_cstime = FUNC_0(VAR_5);
}
