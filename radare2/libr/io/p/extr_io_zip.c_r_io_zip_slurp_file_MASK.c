
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct zip_stat {int size; } ;
struct zip_file {int dummy; } ;
struct zip {int dummy; } ;
struct TYPE_3__ {int entry; int opened; scalar_t__ b; int rw; int mode; int perm; int archivename; } ;
typedef TYPE_1__ RIOZipFileObj ;


 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 struct zip* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct zip*) ;
 int FUNC_6 (struct zip_file*) ;
 struct zip_file* FUNC_7 (struct zip*,int,int ) ;
 int FUNC_8 (struct zip_file*,int *,int ) ;
 int FUNC_9 (struct zip*,int,int ,struct zip_stat*) ;
 int FUNC_10 (struct zip_stat*) ;

__attribute__((used)) static int FUNC_11(RIOZipFileObj *VAR_0) {
 struct zip_file *VAR_1 = ((void*)0);
 struct zip *VAR_2;
 struct zip_stat VAR_3;
 bool VAR_4 = 0;
 if (!VAR_0) {
  return VAR_4;
 }
 VAR_2 = FUNC_4 (
  VAR_0->archivename, VAR_0->perm,
  VAR_0->mode, VAR_0->rw);

 if (VAR_2 && VAR_0 && VAR_0->entry != -1) {
  VAR_1 = FUNC_7 (VAR_2, VAR_0->entry, 0);
  if (!VAR_0->b) {
   VAR_0->b = FUNC_2 ();
  }
  FUNC_10 (&VAR_3);
  if (VAR_1 && VAR_0->b && !FUNC_9 (VAR_2, VAR_0->entry, 0, &VAR_3)) {
   ut8 *VAR_5 = FUNC_0 (1, VAR_3.size);
   if (VAR_5) {
    FUNC_8 (VAR_1, VAR_5, VAR_3.size);
    FUNC_3 (VAR_0->b, VAR_5, VAR_3.size);
    VAR_4 = 1;
    VAR_0->opened = 1;
    FUNC_1 (VAR_5);
   }
  }
  FUNC_6 (VAR_1);
 }
 FUNC_5 (VAR_2);
 return VAR_4;
}
