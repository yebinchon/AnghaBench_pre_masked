
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
typedef size_t ut32 ;
typedef size_t ut16 ;
struct TYPE_10__ {int method_size; size_t prototypes_size; size_t types_size; } ;
struct TYPE_12__ {size_t size; TYPE_4__* types; TYPE_3__ header; int b; TYPE_2__* protos; TYPE_1__* methods; } ;
struct TYPE_11__ {int descriptor_id; } ;
struct TYPE_9__ {size_t parameters_off; } ;
struct TYPE_8__ {size_t proto_id; } ;
typedef int RList ;
typedef TYPE_5__ RBinDexObj ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 size_t FUNC_4 (int ,scalar_t__) ;
 size_t FUNC_5 (int ,size_t) ;

__attribute__((used)) static RList *FUNC_6(RBinDexObj *VAR_1, int VAR_2) {
 ut32 VAR_3, VAR_4, VAR_5;
 ut16 VAR_6;
 int VAR_7;

 RList *VAR_8 = FUNC_3 (VAR_0);
 if (!VAR_8) {
  return ((void*)0);
 }
 if (VAR_2 < 0 || VAR_2 >= VAR_1->header.method_size) {
  goto out_error;
 }
 VAR_3 = VAR_1->methods[VAR_2].proto_id;
 if (VAR_3 >= VAR_1->header.prototypes_size) {
  goto out_error;
 }
 VAR_4 = VAR_1->protos[VAR_3].parameters_off;
 if (VAR_4 >= VAR_1->size) {
  goto out_error;
 }
 if (!VAR_4) {
  return VAR_8;
 }
 VAR_5 = FUNC_5 (VAR_1->b, VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  ut64 VAR_9 = VAR_4 + 4 + (VAR_7 * 2);
  if (VAR_9 >= VAR_1->size || VAR_9 < VAR_4) {
   break;
  }
  VAR_6 = FUNC_4 (VAR_1->b, VAR_9);
  if (VAR_6 >= VAR_1->header.types_size || VAR_6 > VAR_1->size) {
   break;
  }
  char *VAR_10 = FUNC_0 (VAR_1, VAR_1->types[VAR_6].descriptor_id);
  if (!VAR_10) {
   break;
  }
  FUNC_1 (VAR_8, VAR_10);
 }
 return VAR_8;
out_error:
 FUNC_2 (VAR_8);
 return ((void*)0);
}
