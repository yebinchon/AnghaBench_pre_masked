
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p; } ;
struct TYPE_9__ {TYPE_2__ elg; } ;
struct TYPE_10__ {TYPE_3__ pub; } ;
struct TYPE_7__ {scalar_t__ bytes; } ;
typedef int PushFilter ;
typedef TYPE_4__ PGP_PubKey ;
typedef int PGP_MPI ;
typedef int PGP_Context ;


 int FUNC_0 (int *,int **,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int *,int **,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(PGP_Context *VAR_0, PGP_PubKey *VAR_1, PushFilter *VAR_2)
{
 int VAR_3;
 PGP_MPI *VAR_4 = ((void*)0),
      *VAR_5 = ((void*)0),
      *VAR_6 = ((void*)0);


 VAR_3 = FUNC_0(VAR_0, &VAR_4, VAR_1->pub.elg.p->bytes - 1);
 if (VAR_3 < 0)
  goto err;


 VAR_3 = FUNC_1(VAR_1, VAR_4, &VAR_5, &VAR_6);
 if (VAR_3 < 0)
  goto err;


 VAR_3 = FUNC_3(VAR_2, VAR_5);
 if (VAR_3 < 0)
  goto err;
 VAR_3 = FUNC_3(VAR_2, VAR_6);

err:
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 return VAR_3;
}
