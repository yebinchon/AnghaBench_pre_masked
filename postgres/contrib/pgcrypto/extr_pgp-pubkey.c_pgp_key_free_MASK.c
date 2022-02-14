
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {int x; } ;
struct TYPE_16__ {int u; int q; int p; int d; } ;
struct TYPE_14__ {int x; } ;
struct TYPE_20__ {TYPE_7__ dsa; TYPE_4__ rsa; TYPE_2__ elg; } ;
struct TYPE_17__ {int y; int g; int q; int p; } ;
struct TYPE_15__ {int e; int n; } ;
struct TYPE_13__ {int y; int g; int p; } ;
struct TYPE_18__ {TYPE_5__ dsa; TYPE_3__ rsa; TYPE_1__ elg; } ;
struct TYPE_21__ {int algo; TYPE_8__ sec; TYPE_6__ pub; } ;
typedef TYPE_9__ PGP_PubKey ;







 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*,int ,int) ;

void
FUNC_3(PGP_PubKey *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 switch (VAR_0->algo)
 {
  case 131:
   FUNC_0(VAR_0->pub.elg.p);
   FUNC_0(VAR_0->pub.elg.g);
   FUNC_0(VAR_0->pub.elg.y);
   FUNC_0(VAR_0->sec.elg.x);
   break;
  case 128:
  case 130:
  case 129:
   FUNC_0(VAR_0->pub.rsa.n);
   FUNC_0(VAR_0->pub.rsa.e);
   FUNC_0(VAR_0->sec.rsa.d);
   FUNC_0(VAR_0->sec.rsa.p);
   FUNC_0(VAR_0->sec.rsa.q);
   FUNC_0(VAR_0->sec.rsa.u);
   break;
  case 132:
   FUNC_0(VAR_0->pub.dsa.p);
   FUNC_0(VAR_0->pub.dsa.q);
   FUNC_0(VAR_0->pub.dsa.g);
   FUNC_0(VAR_0->pub.dsa.y);
   FUNC_0(VAR_0->sec.dsa.x);
   break;
 }
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));
 FUNC_1(VAR_0);
}
