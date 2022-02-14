
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int tag; int state; } ;
typedef int LWLock ;
typedef int BufferTag ;
typedef TYPE_1__ BufferDesc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void
FUNC_17(BufferDesc *VAR_6)
{
 BufferTag VAR_7;
 uint32 VAR_8;
 LWLock *VAR_9;
 uint32 VAR_10;
 uint32 VAR_11;


 VAR_7 = VAR_6->tag;

 VAR_11 = FUNC_16(&VAR_6->state);
 FUNC_0(VAR_11 & VAR_0);
 FUNC_13(VAR_6, VAR_11);






 VAR_8 = FUNC_5(&VAR_7);
 VAR_9 = FUNC_3(VAR_8);

retry:





 FUNC_9(VAR_9, VAR_5);


 VAR_11 = FUNC_11(VAR_6);


 if (!FUNC_1(VAR_6->tag, VAR_7))
 {
  FUNC_13(VAR_6, VAR_11);
  FUNC_10(VAR_9);
  return;
 }
 if (FUNC_2(VAR_11) != 0)
 {
  FUNC_13(VAR_6, VAR_11);
  FUNC_10(VAR_9);

  if (FUNC_8(FUNC_6(VAR_6)) > 0)
   FUNC_15(VAR_4, "buffer is pinned in InvalidateBuffer");
  FUNC_14(VAR_6);
  goto retry;
 }





 VAR_10 = VAR_11 & VAR_2;
 FUNC_7(VAR_6->tag);
 VAR_11 &= ~(VAR_2 | VAR_3);
 FUNC_13(VAR_6, VAR_11);




 if (VAR_10 & VAR_1)
  FUNC_4(&VAR_7, VAR_8);




 FUNC_10(VAR_9);




 FUNC_12(VAR_6);
}
