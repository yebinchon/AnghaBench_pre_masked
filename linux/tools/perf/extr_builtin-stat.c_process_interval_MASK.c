
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_2__ {int interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (struct timespec*,struct timespec*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct timespec*,int ,int *) ;
 int FUNC_6 (struct timespec*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (int *,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{
 struct timespec VAR_7, VAR_8;

 FUNC_1(VAR_0, &VAR_7);
 FUNC_2(&VAR_8, &VAR_7, &VAR_4);

 FUNC_6(&VAR_8);

 if (VAR_3) {
  if (FUNC_0(VAR_8.tv_sec * VAR_2 + VAR_8.tv_nsec, VAR_1))
   FUNC_4("failed to write stat round event\n");
 }

 FUNC_3(&VAR_6);
 FUNC_7(&VAR_6, VAR_5.interval * 1000000);
 FUNC_5(&VAR_8, 0, ((void*)0));
}
