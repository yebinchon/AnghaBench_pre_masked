
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppoatm_vcc {int inflight; int atmvcc; int blocked; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct pppoatm_vcc *VAR_1, int VAR_2)
{







 if (FUNC_0(VAR_1->atmvcc, VAR_2) &&
     FUNC_1(&VAR_1->inflight))
  return 1;
 FUNC_2(VAR_0, &VAR_1->blocked);
 if (FUNC_0(VAR_1->atmvcc, VAR_2) &&
     FUNC_1(&VAR_1->inflight))
  return 1;

 return 0;
}
