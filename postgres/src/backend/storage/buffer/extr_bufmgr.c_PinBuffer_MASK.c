
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_9__ {int state; } ;
struct TYPE_8__ {scalar_t__ refcount; } ;
typedef TYPE_1__ PrivateRefCountEntry ;
typedef TYPE_2__ BufferDesc ;
typedef int * BufferAccessStrategy ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_3 (int ,int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int *,int*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool
FUNC_10(BufferDesc *VAR_6, BufferAccessStrategy VAR_7)
{
 Buffer VAR_8 = FUNC_2(VAR_6);
 bool VAR_9;
 PrivateRefCountEntry *VAR_10;

 VAR_10 = FUNC_3(VAR_8, 1);

 if (VAR_10 == ((void*)0))
 {
  uint32 VAR_11;
  uint32 VAR_12;

  FUNC_5();
  VAR_10 = FUNC_4(VAR_8);

  VAR_12 = FUNC_9(&VAR_6->state);
  for (;;)
  {
   if (VAR_12 & VAR_0)
    VAR_12 = FUNC_7(VAR_6);

   VAR_11 = VAR_12;


   VAR_11 += VAR_3;

   if (VAR_7 == ((void*)0))
   {

    if (FUNC_1(VAR_11) < VAR_1)
     VAR_11 += VAR_4;
   }
   else
   {




    if (FUNC_1(VAR_11) == 0)
     VAR_11 += VAR_4;
   }

   if (FUNC_8(&VAR_6->state, &VAR_12,
              VAR_11))
   {
    VAR_9 = (VAR_11 & VAR_2) != 0;
    break;
   }
  }
 }
 else
 {

  VAR_9 = 1;
 }

 VAR_10->refcount++;
 FUNC_0(VAR_10->refcount > 0);
 FUNC_6(VAR_5, VAR_8);
 return VAR_9;
}
