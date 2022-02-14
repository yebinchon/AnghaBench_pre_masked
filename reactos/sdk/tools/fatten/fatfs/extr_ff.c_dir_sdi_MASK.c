
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int UINT ;
struct TYPE_7__ {int n_fatent; scalar_t__ fs_type; int dirbase; int n_rootdir; int csize; scalar_t__ win; } ;
struct TYPE_6__ {int sclust; int clust; int sect; TYPE_2__* fs; scalar_t__ dir; scalar_t__ index; } ;
typedef int FRESULT ;
typedef int DWORD ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static
FRESULT FUNC_3 (
 DIR* VAR_5,
 UINT VAR_6
)
{
 DWORD VAR_7, VAR_8;
 UINT VAR_9;


 VAR_5->index = (WORD)VAR_6;
 VAR_7 = VAR_5->sclust;
 if (VAR_7 == 1 || VAR_7 >= VAR_5->fs->n_fatent)
  return VAR_1;
 if (!VAR_7 && VAR_5->fs->fs_type == VAR_3)
  VAR_7 = VAR_5->fs->dirbase;

 if (VAR_7 == 0) {
  if (VAR_6 >= VAR_5->fs->n_rootdir)
   return VAR_1;
  VAR_8 = VAR_5->fs->dirbase;
 }
 else {
  VAR_9 = FUNC_0(VAR_5->fs) / VAR_4 * VAR_5->fs->csize;
  while (VAR_6 >= VAR_9) {
   VAR_7 = FUNC_2(VAR_5->fs, VAR_7);
   if (VAR_7 == 0xFFFFFFFF) return VAR_0;
   if (VAR_7 < 2 || VAR_7 >= VAR_5->fs->n_fatent)
    return VAR_1;
   VAR_6 -= VAR_9;
  }
  VAR_8 = FUNC_1(VAR_5->fs, VAR_7);
 }
 VAR_5->clust = VAR_7;
 if (!VAR_8) return VAR_1;
 VAR_5->sect = VAR_8 + VAR_6 / (FUNC_0(VAR_5->fs) / VAR_4);
 VAR_5->dir = VAR_5->fs->win + (VAR_6 % (FUNC_0(VAR_5->fs) / VAR_4)) * VAR_4;

 return VAR_2;
}
