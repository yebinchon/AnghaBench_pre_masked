
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_13__ {int bytes; } ;
struct TYPE_10__ {TYPE_6__* y; TYPE_6__* g; TYPE_6__* q; TYPE_6__* p; } ;
struct TYPE_9__ {TYPE_6__* e; TYPE_6__* n; } ;
struct TYPE_8__ {TYPE_6__* y; TYPE_6__* g; TYPE_6__* p; } ;
struct TYPE_11__ {TYPE_3__ dsa; TYPE_2__ rsa; TYPE_1__ elg; } ;
struct TYPE_12__ {int algo; int ver; int* time; int key_id; TYPE_4__ pub; } ;
typedef int PX_MD ;
typedef TYPE_5__ PGP_PubKey ;


 int VAR_0 ;





 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_7(PGP_PubKey *VAR_1)
{
 int VAR_2;
 PX_MD *VAR_3;
 int VAR_4;
 uint8 VAR_5[3];
 uint8 VAR_6[20];

 VAR_2 = FUNC_1(VAR_0, &VAR_3);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_4 = 1 + 4 + 1;
 switch (VAR_1->algo)
 {
  case 131:
   VAR_4 += 2 + VAR_1->pub.elg.p->bytes;
   VAR_4 += 2 + VAR_1->pub.elg.g->bytes;
   VAR_4 += 2 + VAR_1->pub.elg.y->bytes;
   break;
  case 128:
  case 130:
  case 129:
   VAR_4 += 2 + VAR_1->pub.rsa.n->bytes;
   VAR_4 += 2 + VAR_1->pub.rsa.e->bytes;
   break;
  case 132:
   VAR_4 += 2 + VAR_1->pub.dsa.p->bytes;
   VAR_4 += 2 + VAR_1->pub.dsa.q->bytes;
   VAR_4 += 2 + VAR_1->pub.dsa.g->bytes;
   VAR_4 += 2 + VAR_1->pub.dsa.y->bytes;
   break;
 }

 VAR_5[0] = 0x99;
 VAR_5[1] = VAR_4 >> 8;
 VAR_5[2] = VAR_4 & 0xFF;
 FUNC_5(VAR_3, VAR_5, 3);

 FUNC_5(VAR_3, &VAR_1->ver, 1);
 FUNC_5(VAR_3, VAR_1->time, 4);
 FUNC_5(VAR_3, &VAR_1->algo, 1);

 switch (VAR_1->algo)
 {
  case 131:
   FUNC_2(VAR_3, VAR_1->pub.elg.p);
   FUNC_2(VAR_3, VAR_1->pub.elg.g);
   FUNC_2(VAR_3, VAR_1->pub.elg.y);
   break;
  case 128:
  case 130:
  case 129:
   FUNC_2(VAR_3, VAR_1->pub.rsa.n);
   FUNC_2(VAR_3, VAR_1->pub.rsa.e);
   break;
  case 132:
   FUNC_2(VAR_3, VAR_1->pub.dsa.p);
   FUNC_2(VAR_3, VAR_1->pub.dsa.q);
   FUNC_2(VAR_3, VAR_1->pub.dsa.g);
   FUNC_2(VAR_3, VAR_1->pub.dsa.y);
   break;
 }

 FUNC_3(VAR_3, VAR_6);
 FUNC_4(VAR_3);

 FUNC_0(VAR_1->key_id, VAR_6 + 12, 8);
 FUNC_6(VAR_6, 0, 20);

 return 0;
}
