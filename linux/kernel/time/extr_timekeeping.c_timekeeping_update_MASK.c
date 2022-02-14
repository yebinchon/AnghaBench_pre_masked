
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ base; scalar_t__ base_real; } ;
struct timekeeper {int clock_was_set_seq; TYPE_1__ tkr_raw; TYPE_1__ tkr_mono; scalar_t__ offs_real; scalar_t__ ntp_error; } ;
struct TYPE_4__ {int timekeeper; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct timekeeper*) ;
 int FUNC_3 (struct timekeeper*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct timekeeper*,unsigned int) ;
 int FUNC_6 (struct timekeeper*) ;

__attribute__((used)) static void FUNC_7(struct timekeeper *VAR_7, unsigned int VAR_8)
{
 if (VAR_8 & VAR_0) {
  VAR_7->ntp_error = 0;
  FUNC_1();
 }

 FUNC_3(VAR_7);
 FUNC_2(VAR_7);

 FUNC_6(VAR_7);
 FUNC_5(VAR_7, VAR_8 & VAR_1);

 VAR_7->tkr_mono.base_real = VAR_7->tkr_mono.base + VAR_7->offs_real;
 FUNC_4(&VAR_7->tkr_mono, &VAR_5);
 FUNC_4(&VAR_7->tkr_raw, &VAR_6);

 if (VAR_8 & VAR_1)
  VAR_7->clock_was_set_seq++;





 if (VAR_8 & VAR_2)
  FUNC_0(&VAR_3, &VAR_4.timekeeper,
         sizeof(VAR_4.timekeeper));
}
