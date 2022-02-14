
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int state; } ;
struct TYPE_7__ {int refcount; } ;
typedef TYPE_1__ PrivateRefCountEntry ;
typedef TYPE_2__ BufferDesc ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int * FUNC_2 (int ,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(BufferDesc *VAR_3)
{
 Buffer VAR_4;
 PrivateRefCountEntry *VAR_5;
 uint32 VAR_6;





 FUNC_0(FUNC_2(FUNC_1(VAR_3), 0) == ((void*)0));





 VAR_6 = FUNC_6(&VAR_3->state);
 FUNC_0(VAR_6 & VAR_0);
 VAR_6 += VAR_1;
 FUNC_5(VAR_3, VAR_6);

 VAR_4 = FUNC_1(VAR_3);

 VAR_5 = FUNC_3(VAR_4);
 VAR_5->refcount++;

 FUNC_4(VAR_2, VAR_4);
}
