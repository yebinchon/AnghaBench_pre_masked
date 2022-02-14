
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {scalar_t__ p; } ;
typedef TYPE_1__* STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (void*,char*,char*,int) ;
 void* FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,char*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_9(STREAM VAR_3)
{
 void * VAR_4;
 uint32 VAR_5;
 int VAR_6;

 FUNC_2(VAR_3, 2);
 FUNC_0(VAR_3, VAR_5);
 if (!FUNC_7(VAR_3, VAR_5))
  return;

 VAR_4 = FUNC_4();
 FUNC_6(VAR_4, (char *)VAR_2, 16);
 FUNC_3(VAR_4, (char *)VAR_3->p, (char *)VAR_3->p, VAR_5);
 FUNC_5(VAR_4);


 FUNC_2(VAR_3, 4);



 VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
 {
  FUNC_2(VAR_3, VAR_5);
  FUNC_1(VAR_3, VAR_5);
  if (!FUNC_7(VAR_3, VAR_5))
   return;
 }

 VAR_1 = VAR_0;
 FUNC_8(VAR_3->p, VAR_5);
}
