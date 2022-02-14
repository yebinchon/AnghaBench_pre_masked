
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct zip_source {int dummy; } ;
struct zip {int dummy; } ;
struct TYPE_3__ {int entry; scalar_t__ name; int b; int rw; int mode; int perm; int archivename; } ;
typedef TYPE_1__ RIOZipFileObj ;


 int * FUNC_0 (int ,int *) ;
 struct zip* FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct zip*,scalar_t__,struct zip_source*) ;
 int FUNC_3 (struct zip*) ;
 int FUNC_4 (struct zip*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct zip*,int,struct zip_source*) ;
 struct zip_source* FUNC_6 (struct zip*,int const*,int ,int ) ;
 int FUNC_7 (struct zip_source*) ;

int FUNC_8(RIOZipFileObj *VAR_0) {
 int VAR_1 = 0;
 struct zip * VAR_2;

 if (!VAR_0) {
  return VAR_1;
 }

 VAR_2 = FUNC_1 (
  VAR_0->archivename, VAR_0->perm, VAR_0->mode, VAR_0->rw);
 if (!VAR_2) {
  return VAR_1;
 }

 ut64 VAR_3;
 const ut8 *VAR_4 = FUNC_0 (VAR_0->b, &VAR_3);
 struct zip_source *VAR_5 = FUNC_6 (VAR_2, VAR_4, VAR_3, 0);
 if (VAR_5 && VAR_0->entry != -1) {
  if (FUNC_5(VAR_2, VAR_0->entry, VAR_5) == 0) {
   VAR_1 = 1;
  }
 } else if (VAR_5 && VAR_0->name) {
  if (FUNC_2 (VAR_2, VAR_0->name, VAR_5) == 0) {
   VAR_0->entry = FUNC_4 (VAR_2, VAR_0->name, 0);
   VAR_1 = 1;
  }
 }

 FUNC_3 (VAR_2);
 if (VAR_5) {
  FUNC_7 (VAR_5);
 }
 return VAR_1;
}
