
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_13__ {int wait_backend_pid; int state; } ;
struct TYPE_12__ {scalar_t__ refcount; } ;
typedef TYPE_1__ PrivateRefCountEntry ;
typedef TYPE_2__ BufferDesc ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (int *,int*,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(BufferDesc *VAR_4, bool VAR_5)
{
 PrivateRefCountEntry *VAR_6;
 Buffer VAR_7 = FUNC_2(VAR_4);


 VAR_6 = FUNC_6(VAR_7, 0);
 FUNC_0(VAR_6 != ((void*)0));

 if (VAR_5)
  FUNC_10(VAR_3, VAR_7);

 FUNC_0(VAR_6->refcount > 0);
 VAR_6->refcount--;
 if (VAR_6->refcount == 0)
 {
  uint32 VAR_8;
  uint32 VAR_9;


  FUNC_0(!FUNC_7(FUNC_3(VAR_4)));
  FUNC_0(!FUNC_7(FUNC_4(VAR_4)));







  VAR_9 = FUNC_14(&VAR_4->state);
  for (;;)
  {
   if (VAR_9 & VAR_0)
    VAR_9 = FUNC_12(VAR_4);

   VAR_8 = VAR_9;

   VAR_8 -= VAR_2;

   if (FUNC_13(&VAR_4->state, &VAR_9,
              VAR_8))
    break;
  }


  if (VAR_8 & VAR_1)
  {







   VAR_8 = FUNC_8(VAR_4);

   if ((VAR_8 & VAR_1) &&
    FUNC_1(VAR_8) == 1)
   {

    int VAR_10 = VAR_4->wait_backend_pid;

    VAR_8 &= ~VAR_1;
    FUNC_11(VAR_4, VAR_8);
    FUNC_9(VAR_10);
   }
   else
    FUNC_11(VAR_4, VAR_8);
  }
  FUNC_5(VAR_6);
 }
}
