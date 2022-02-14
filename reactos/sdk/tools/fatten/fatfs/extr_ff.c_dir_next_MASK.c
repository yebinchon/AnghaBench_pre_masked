
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_9__ {int n_rootdir; int csize; int n_fatent; int wflag; scalar_t__ win; void* winsect; } ;
struct TYPE_8__ {int index; int clust; TYPE_2__* fs; scalar_t__ dir; void* sect; } ;
typedef int FRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 void* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static
FRESULT FUNC_6 (
 DIR* VAR_6,
 int VAR_7
)
{
 DWORD VAR_8;
 UINT VAR_9;

 UINT VAR_10;



 VAR_9 = VAR_6->index + 1;
 if (!(VAR_9 & 0xFFFF) || !VAR_6->sect)
  return VAR_3;

 if (!(VAR_9 % (FUNC_0(VAR_6->fs) / VAR_5))) {
  VAR_6->sect++;

  if (!VAR_6->clust) {
   if (VAR_9 >= VAR_6->fs->n_rootdir)
    return VAR_3;
  }
  else {
   if (((VAR_9 / (FUNC_0(VAR_6->fs) / VAR_5)) & (VAR_6->fs->csize - 1)) == 0) {
    VAR_8 = FUNC_3(VAR_6->fs, VAR_6->clust);
    if (VAR_8 <= 1) return VAR_2;
    if (VAR_8 == 0xFFFFFFFF) return VAR_1;
    if (VAR_8 >= VAR_6->fs->n_fatent) {

     if (!VAR_7) return VAR_3;
     VAR_8 = FUNC_2(VAR_6->fs, VAR_6->clust);
     if (VAR_8 == 0) return VAR_0;
     if (VAR_8 == 1) return VAR_2;
     if (VAR_8 == 0xFFFFFFFF) return VAR_1;

     if (FUNC_5(VAR_6->fs)) return VAR_1;
     FUNC_4(VAR_6->fs->win, 0, FUNC_0(VAR_6->fs));
     VAR_6->fs->winsect = FUNC_1(VAR_6->fs, VAR_8);
     for (VAR_10 = 0; VAR_10 < VAR_6->fs->csize; VAR_10++) {
      VAR_6->fs->wflag = 1;
      if (FUNC_5(VAR_6->fs)) return VAR_1;
      VAR_6->fs->winsect++;
     }
     VAR_6->fs->winsect -= VAR_10;




    }
    VAR_6->clust = VAR_8;
    VAR_6->sect = FUNC_1(VAR_6->fs, VAR_8);
   }
  }
 }

 VAR_6->index = (WORD)VAR_9;
 VAR_6->dir = VAR_6->fs->win + (VAR_9 % (FUNC_0(VAR_6->fs) / VAR_5)) * VAR_5;

 return VAR_4;
}
