
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_10__ {int events; } ;
typedef TYPE_2__ WaitEvent ;
struct TYPE_11__ {int noblock; TYPE_1__* gss; scalar_t__ ssl_in_use; } ;
struct TYPE_9__ {scalar_t__ enc; } ;
typedef TYPE_3__ Port ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,int,TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,void*,size_t) ;
 scalar_t__ FUNC_6 (TYPE_3__*,void*,size_t,int*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_10 (TYPE_3__*,void*,size_t) ;

ssize_t
FUNC_11(Port *VAR_11, void *VAR_12, size_t VAR_13)
{
 ssize_t VAR_14;
 int VAR_15;


 FUNC_2(0);

retry:
 VAR_15 = 0;
 {
  VAR_14 = FUNC_10(VAR_11, VAR_12, VAR_13);
  VAR_15 = VAR_9;
 }

 if (VAR_14 < 0 && !VAR_11->noblock && (VAR_10 == VAR_2 || VAR_10 == VAR_0))
 {
  WaitEvent VAR_16;

  FUNC_0(VAR_15);

  FUNC_1(VAR_4, 0, VAR_15, ((void*)0));

  FUNC_4(VAR_4, -1 , &VAR_16, 1,
       VAR_6);


  if (VAR_16.events & VAR_8)
   FUNC_7(VAR_3,
     (FUNC_8(VAR_1),
      FUNC_9("terminating connection due to unexpected postmaster exit")));


  if (VAR_16.events & VAR_7)
  {
   FUNC_3(VAR_5);
   FUNC_2(1);






  }
  goto retry;
 }





 FUNC_2(0);

 return VAR_14;
}
