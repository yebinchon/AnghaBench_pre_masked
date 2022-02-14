
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int device; TYPE_1__* fs; scalar_t__ size; } ;
struct TYPE_9__ {TYPE_3__* file; } ;
struct TYPE_8__ {int (* dir ) (int ,char*,int ,int ) ;int (* close ) (TYPE_3__*) ;int (* read ) (TYPE_3__*,char*,scalar_t__) ;int (* open ) (TYPE_3__*,char*) ;} ;
typedef TYPE_2__ GrubFS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int,char*,scalar_t__) ;

int FUNC_8() {
 char VAR_2[1024];
 GrubFS *VAR_3 = FUNC_1 (&VAR_1, ((void*)0));
 VAR_3->file->fs->open (VAR_3->file, "/test");
 VAR_3->file->fs->read (VAR_3->file, VAR_2, VAR_3->file->size);
FUNC_2 ("fs = %d\n", (int)VAR_3->file->size);
 FUNC_7 (1, VAR_2, VAR_3->file->size);
 VAR_3->file->fs->close (VAR_3->file);
 VAR_3->file->fs->dir (VAR_3->file->device, "/", VAR_0, 0);
 FUNC_0 (VAR_3);
 return 0;
}
