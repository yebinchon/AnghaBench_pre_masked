
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; TYPE_2__* val; int key; TYPE_1__* type; } ;
typedef TYPE_3__ fz_item ;
typedef int fz_context ;
struct TYPE_5__ {int refs; } ;
struct TYPE_4__ {int (* format_key ) (int *,char*,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, void *VAR_2, void *VAR_3, int VAR_4, void *VAR_5)
{
 unsigned char *VAR_6 = VAR_3;
 fz_item *VAR_7 = VAR_5;
 int VAR_8;
 char VAR_9[256];
 FUNC_1(VAR_1, VAR_0);
 VAR_7->type->format_key(VAR_1, VAR_9, sizeof VAR_9, VAR_7->key);
 FUNC_0(VAR_1, VAR_0);
 FUNC_2("hash[");
 for (VAR_8=0; VAR_8 < VAR_4; ++VAR_8)
  FUNC_2("%02x", VAR_6[VAR_8]);
 FUNC_2("][refs=%d][size=%d] key=%s val=%p\n", VAR_7->val->refs, (int)VAR_7->size, VAR_9, (void *)VAR_7->val);
}
