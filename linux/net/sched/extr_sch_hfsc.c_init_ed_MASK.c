
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {scalar_t__ dy; scalar_t__ dx; } ;
struct TYPE_5__ {scalar_t__ sm1; scalar_t__ sm2; } ;
struct hfsc_class {scalar_t__ cl_cumul; TYPE_1__ cl_deadline; void* cl_d; TYPE_1__ cl_eligible; void* cl_e; TYPE_3__ cl_rsc; } ;


 int FUNC_0 (struct hfsc_class*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int ,scalar_t__) ;
 void* FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct hfsc_class *VAR_0, unsigned int VAR_1)
{
 u64 VAR_2 = FUNC_1();


 FUNC_2(&VAR_0->cl_deadline, &VAR_0->cl_rsc, VAR_2, VAR_0->cl_cumul);






 VAR_0->cl_eligible = VAR_0->cl_deadline;
 if (VAR_0->cl_rsc.sm1 <= VAR_0->cl_rsc.sm2) {
  VAR_0->cl_eligible.dx = 0;
  VAR_0->cl_eligible.dy = 0;
 }


 VAR_0->cl_e = FUNC_3(&VAR_0->cl_eligible, VAR_0->cl_cumul);
 VAR_0->cl_d = FUNC_3(&VAR_0->cl_deadline, VAR_0->cl_cumul + VAR_1);

 FUNC_0(VAR_0);
}
