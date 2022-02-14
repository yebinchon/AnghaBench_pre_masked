
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * prev; struct TYPE_11__* next; int owner; int * ctx; int const* algo; } ;
struct TYPE_9__ {void* ptr; } ;
struct TYPE_10__ {TYPE_1__ p; int free; int finish; int update; int reset; int block_size; int result_size; } ;
typedef TYPE_2__ PX_MD ;
typedef TYPE_3__ OSSLDigest ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*,int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (char const*) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_2__* FUNC_7 (int) ;
 int VAR_12 ;

int
FUNC_8(const char *VAR_13, PX_MD **VAR_14)
{
 const EVP_MD *VAR_15;
 EVP_MD_CTX *VAR_16;
 PX_MD *VAR_17;
 OSSLDigest *VAR_18;

 if (!VAR_12)
 {
  VAR_12 = 1;
  FUNC_4();
 }

 if (!VAR_8)
 {
  FUNC_5(VAR_6, ((void*)0));
  VAR_8 = 1;
 }

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15 == ((void*)0))
  return VAR_1;






 VAR_18 = FUNC_3(VAR_2, sizeof(*VAR_18));

 VAR_16 = FUNC_1();
 if (!VAR_16)
 {
  FUNC_6(VAR_18);
  return -1;
 }
 if (FUNC_0(VAR_16, VAR_15, ((void*)0)) == 0)
 {
  FUNC_6(VAR_18);
  return -1;
 }

 VAR_18->algo = VAR_15;
 VAR_18->ctx = VAR_16;
 VAR_18->owner = VAR_0;
 VAR_18->next = VAR_11;
 VAR_18->prev = ((void*)0);
 VAR_11 = VAR_18;


 VAR_17 = FUNC_7(sizeof(*VAR_17));
 VAR_17->result_size = VAR_9;
 VAR_17->block_size = VAR_3;
 VAR_17->reset = VAR_7;
 VAR_17->update = VAR_10;
 VAR_17->finish = VAR_4;
 VAR_17->free = VAR_5;
 VAR_17->p.ptr = (void *) VAR_18;

 *VAR_14 = VAR_17;
 return 0;
}
