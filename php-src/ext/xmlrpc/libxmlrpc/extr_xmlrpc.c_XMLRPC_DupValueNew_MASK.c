
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int q_iter ;
typedef TYPE_4__* XMLRPC_VALUE ;
struct TYPE_18__ {int len; int str; } ;
struct TYPE_17__ {int len; int str; } ;
struct TYPE_20__ {int type; TYPE_3__* v; int d; int i; TYPE_2__ str; TYPE_1__ id; } ;
struct TYPE_19__ {int type; int q; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*) ;
 TYPE_4__* FUNC_4 () ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;
XMLRPC_VALUE FUNC_11 (XMLRPC_VALUE VAR_0) {
 XMLRPC_VALUE VAR_1 = ((void*)0);
 if (VAR_0) {
  VAR_1 = FUNC_4 ();
  if (VAR_0->id.len) {
   FUNC_8 (VAR_1, VAR_0->id.str, VAR_0->id.len);
  }

  switch (VAR_0->type) {
  case 130:
  case 133:
   FUNC_9 (VAR_1, VAR_0->i);
   break;
  case 129:
  case 134:
   FUNC_10 (VAR_1, VAR_0->str.str, VAR_0->str.len);
   break;
  case 132:
   FUNC_6 (VAR_1, VAR_0->i);
   break;
  case 131:
   FUNC_7 (VAR_1, VAR_0->d);
   break;
  case 128:
   {
    q_iter VAR_2 = FUNC_1 (VAR_0->v->q);
    FUNC_5 (VAR_1, VAR_0->v->type);

    while (VAR_2) {
     XMLRPC_VALUE VAR_3 = FUNC_0 (VAR_2);
     FUNC_3 (VAR_1, FUNC_11 (VAR_3));
     VAR_2 = FUNC_2 (VAR_2);
    }
   }
   break;
  default:
   break;
  }
 }
 return VAR_1;
}
