
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {char* name; int build; int minor; int major; } ;
typedef TYPE_2__ xbe_lib ;
struct TYPE_14__ {scalar_t__ kernel_lib_addr; scalar_t__ base; scalar_t__ xapi_lib_addr; int lib_versions; int lib_versions_addr; } ;
typedef TYPE_3__ xbe_header ;
typedef int ut8 ;
typedef int ut32 ;
struct TYPE_15__ {TYPE_3__ header; } ;
typedef TYPE_4__ r_bin_xbe_obj_t ;
struct TYPE_17__ {int size; int buf; TYPE_1__* o; } ;
struct TYPE_16__ {int free; } ;
struct TYPE_12__ {TYPE_4__* bin_obj; } ;
typedef TYPE_5__ RList ;
typedef TYPE_6__ RBinFile ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int) ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 () ;
 char* FUNC_4 (char*,char*,int ,int ,int ) ;

__attribute__((used)) static RList *FUNC_5(RBinFile *VAR_1) {
 r_bin_xbe_obj_t *VAR_2;
 xbe_header *VAR_3 = ((void*)0);
 int VAR_4, VAR_5, VAR_6, VAR_7;
 xbe_lib VAR_8;
 RList *VAR_9;
 char *VAR_10;
 ut32 VAR_11;

 if (!VAR_1 || !VAR_1->o || !VAR_1->o->bin_obj) {
  return ((void*)0);
 }
 VAR_2 = VAR_1->o->bin_obj;
 VAR_3 = &VAR_2->header;
 VAR_9 = FUNC_3 ();
 if (!VAR_9) {
  return ((void*)0);
 }
 VAR_9->free = VAR_0;
 if (VAR_3->kernel_lib_addr < VAR_3->base) {
  VAR_5 = 0;
 } else {
  VAR_5 = VAR_3->kernel_lib_addr - VAR_3->base;
 }
 if (VAR_5 > VAR_1->size || VAR_5 + sizeof(xbe_lib) > VAR_1->size) {
  goto out_error;
 }
 VAR_7 = FUNC_0 (VAR_1->buf, VAR_5, (ut8 *) &VAR_8, sizeof(xbe_lib));
 if (VAR_7 < 1) {
  goto out_error;
 }
 VAR_8.name[7] = 0;
 VAR_10 = FUNC_4 ("%s %i.%i.%i", VAR_8.name, VAR_8.major, VAR_8.minor, VAR_8.build);
 if (VAR_10) {
  FUNC_1 (VAR_9, VAR_10);
 }
 if (VAR_3->xapi_lib_addr < VAR_3->base) {
  VAR_5 = 0;
 } else {
  VAR_5 = VAR_3->xapi_lib_addr - VAR_3->base;
 }
 if (VAR_5 > VAR_1->size || VAR_5 + sizeof(xbe_lib) > VAR_1->size) {
  goto out_error;
 }
 VAR_7 = FUNC_0 (VAR_1->buf, VAR_5, (ut8 *) &VAR_8, sizeof(xbe_lib));
 if (VAR_7 < 1) {
  goto out_error;
 }

 VAR_8.name[7] = 0;
 VAR_10 = FUNC_4 ("%s %i.%i.%i", VAR_8.name, VAR_8.major, VAR_8.minor, VAR_8.build);
 if (VAR_10) {
  FUNC_1 (VAR_9, VAR_10);
 }
 VAR_6 = VAR_3->lib_versions;
 if (VAR_6 < 1) {
  goto out_error;
 }
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_11 = VAR_3->lib_versions_addr - VAR_3->base + (VAR_4 * sizeof (xbe_lib));
  if (VAR_11 > VAR_1->size || VAR_11 + sizeof (xbe_lib) > VAR_1->size) {
   goto out_error;
  }
  VAR_7 = FUNC_0 (VAR_1->buf, VAR_11, (ut8 *) &VAR_8, sizeof (xbe_lib));
  if (VAR_7 < 1) {
   goto out_error;
  }

  VAR_8.name[7] = '\0';
  VAR_10 = FUNC_4 ("%s %i.%i.%i", VAR_8.name, VAR_8.major, VAR_8.minor, VAR_8.build);
  if (VAR_10) {
   FUNC_1 (VAR_9, VAR_10);
  }
 }

 return VAR_9;
out_error:
 FUNC_2 (VAR_9);
 return ((void*)0);
}
