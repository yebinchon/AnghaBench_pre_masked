
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int top; } ;
typedef TYPE_4__ lua_State ;
typedef int Table ;
struct TYPE_14__ {TYPE_2__* p; } ;
struct TYPE_12__ {scalar_t__ isC; } ;
struct TYPE_16__ {TYPE_3__ l; TYPE_1__ c; } ;
struct TYPE_13__ {unsigned char* packedlineinfo; int* lineinfo; int sizelineinfo; } ;
typedef TYPE_5__ Closure ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int * FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int *,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_4__*,int ,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_5, Closure *VAR_6) {
   if (VAR_6 == ((void*)0) || VAR_6->c.isC) {
     FUNC_5(VAR_5->top);
   }
   else {







     Table *VAR_7 = FUNC_1(VAR_5, 0, 0);
     int *VAR_8 = VAR_6->l.p->lineinfo;
     int VAR_9;
     for (VAR_9=0; VAR_9<VAR_6->l.p->sizelineinfo; VAR_9++)
       FUNC_3(FUNC_2(VAR_5, VAR_7, VAR_8[VAR_9]), 1);

     FUNC_4(VAR_5, VAR_5->top, VAR_7);
   }
   FUNC_0(VAR_5);
 }
