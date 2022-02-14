
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ uint16 ;
struct TYPE_12__ {int key; } ;
struct TYPE_14__ {void* licence_issued; TYPE_1__ licence; } ;
struct TYPE_13__ {int p; } ;
typedef TYPE_2__* STREAM ;
typedef TYPE_3__ RDPCLIENT ;
typedef int RC4_KEY ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int *,int,int ) ;
 void* VAR_0 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_1, STREAM VAR_2)
{
 RC4_KEY VAR_3;
 uint32 VAR_4;
 uint16 VAR_5;
 int VAR_6;

 FUNC_5(VAR_2, 2);
 FUNC_3(VAR_2, VAR_4);
 if (!FUNC_6(VAR_2, VAR_4))
  return;

 FUNC_1(&VAR_3, 16, VAR_1->licence.key);
 FUNC_0(&VAR_3, VAR_4, VAR_2->p, VAR_2->p);

 FUNC_2(VAR_2, VAR_5);
 if (VAR_5 != 0)
  return;

 VAR_1->licence_issued = VAR_0;

 FUNC_5(VAR_2, 2);


 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
 {
  FUNC_5(VAR_2, VAR_4);
  FUNC_4(VAR_2, VAR_4);
  if (!FUNC_6(VAR_2, VAR_4))
   return;
 }

 VAR_1->licence_issued = VAR_0;
 FUNC_7(VAR_1, VAR_2->p, VAR_4);
}
