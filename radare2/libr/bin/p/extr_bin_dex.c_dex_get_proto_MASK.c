
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
typedef size_t ut32 ;
typedef size_t ut16 ;
typedef int typeidx_buf ;
typedef int params_buf ;
struct TYPE_8__ {int prototypes_size; size_t types_size; } ;
struct TYPE_10__ {size_t size; TYPE_3__* types; TYPE_2__ header; int b; TYPE_1__* protos; } ;
struct TYPE_9__ {int descriptor_id; } ;
struct TYPE_7__ {size_t parameters_off; size_t return_type_id; } ;
typedef TYPE_4__ RBinDexObj ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,int,int *,int) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 char* FUNC_6 (char*,char*,...) ;
 char* FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static char *FUNC_10(RBinDexObj *VAR_0, int VAR_1) {
 ut32 VAR_2, VAR_3, VAR_4;
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 ut16 VAR_9;
 int VAR_10 = 0, VAR_11, VAR_12 = 1;

 if (VAR_1 >= VAR_0->header.prototypes_size) {
  return ((void*)0);
 }
 VAR_2 = VAR_0->protos[VAR_1].parameters_off;
 if (VAR_2 >= VAR_0->size) {
  return ((void*)0);
 }
 VAR_3 = VAR_0->protos[VAR_1].return_type_id;
 if (VAR_3 >= VAR_0->header.types_size ) {
  return ((void*)0);
 }
 VAR_6 = FUNC_2 (VAR_0, VAR_0->types[VAR_3].descriptor_id);
 if (!VAR_6) {
  return ((void*)0);
 }
 if (!VAR_2) {
  return FUNC_6 ("()%s", VAR_6);;
 }
 ut8 VAR_13[sizeof (ut32)];
 if (!FUNC_3 (VAR_0->b, VAR_2, VAR_13, sizeof (VAR_13))) {
  return ((void*)0);
 }

 VAR_4 = FUNC_5 (VAR_13);
 if (VAR_4 * sizeof (ut16) >= VAR_0->size) {
  return ((void*)0);
 }

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  int VAR_14 = 0;
  int VAR_15 = VAR_2 + 4 + (VAR_11 * 2);
  if (VAR_15 >= VAR_0->size) {
   break;
  }
  ut8 VAR_16[sizeof (ut16)];
  if (!FUNC_3 (VAR_0->b, VAR_15, VAR_16, sizeof (VAR_16))) {
   break;
  }
  VAR_9 = FUNC_4 (VAR_16);
  if (VAR_9 >= VAR_0->header.types_size || VAR_9 >= VAR_0->size) {
   break;
  }
  VAR_8 = FUNC_2 (VAR_0, VAR_0->types[VAR_9].descriptor_id);
  if (!VAR_8) {
   break;
  }
  VAR_14 = FUNC_9 (VAR_8);
  VAR_12 += VAR_14 + 1;
  char *VAR_17 = FUNC_7 (VAR_7, VAR_12);
  if (!VAR_17) {
   FUNC_0 ("Cannot realloc to %d\n", VAR_12);
   break;
  }
  VAR_7 = VAR_17;
  FUNC_8 (VAR_7 + VAR_10, VAR_8);
  VAR_10 += VAR_14;
  VAR_7[VAR_10] = '\0';
 }
 if (VAR_7) {
  VAR_5 = FUNC_6 ("(%s)%s", VAR_7, VAR_6);
  FUNC_1 (VAR_7);
 }
 return VAR_5;
}
