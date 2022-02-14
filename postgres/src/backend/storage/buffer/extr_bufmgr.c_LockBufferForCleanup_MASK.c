
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {scalar_t__ wait_backend_pid; } ;
typedef TYPE_1__ BufferDesc ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int ,char*,...) ;

void
FUNC_13(Buffer VAR_9)
{
 BufferDesc *VAR_10;

 FUNC_0(FUNC_3(VAR_9));
 FUNC_0(VAR_8 == ((void*)0));

 if (FUNC_2(VAR_9))
 {

  if (VAR_5[-VAR_9 - 1] != 1)
   FUNC_12(VAR_3, "incorrect local pin count: %d",
     VAR_5[-VAR_9 - 1]);

  return;
 }


 if (FUNC_5(VAR_9) != 1)
  FUNC_12(VAR_3, "incorrect local pin count: %d",
    FUNC_5(VAR_9));

 VAR_10 = FUNC_4(VAR_9 - 1);

 for (;;)
 {
  uint32 VAR_11;


  FUNC_7(VAR_9, VAR_1);
  VAR_11 = FUNC_6(VAR_10);

  FUNC_0(FUNC_1(VAR_11) > 0);
  if (FUNC_1(VAR_11) == 1)
  {

   FUNC_11(VAR_10, VAR_11);
   return;
  }

  if (VAR_11 & VAR_0)
  {
   FUNC_11(VAR_10, VAR_11);
   FUNC_7(VAR_9, VAR_2);
   FUNC_12(VAR_3, "multiple backends attempting to wait for pincount 1");
  }
  VAR_10->wait_backend_pid = VAR_6;
  VAR_8 = VAR_10;
  VAR_11 |= VAR_0;
  FUNC_11(VAR_10, VAR_11);
  FUNC_7(VAR_9, VAR_2);


  if (VAR_4)
  {

   FUNC_10(VAR_9 - 1);

   FUNC_9();

   FUNC_10(-1);
  }
  else
   FUNC_8(VAR_7);
  VAR_11 = FUNC_6(VAR_10);
  if ((VAR_11 & VAR_0) != 0 &&
   VAR_10->wait_backend_pid == VAR_6)
   VAR_11 &= ~VAR_0;
  FUNC_11(VAR_10, VAR_11);

  VAR_8 = ((void*)0);

 }
}
