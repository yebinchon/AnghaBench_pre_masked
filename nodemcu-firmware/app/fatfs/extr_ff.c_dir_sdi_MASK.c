
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sclust; scalar_t__ stat; TYPE_1__* fs; } ;
struct TYPE_8__ {int dptr; scalar_t__ sect; int clust; scalar_t__ dir; TYPE_3__ obj; } ;
struct TYPE_7__ {scalar_t__ fs_type; int dirbase; int n_rootdir; int n_fatent; scalar_t__ win; scalar_t__ csize; } ;
typedef int FRESULT ;
typedef TYPE_1__ FATFS ;
typedef int DWORD ;
typedef TYPE_2__ DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static FRESULT FUNC_3 (
 DIR* VAR_9,
 DWORD VAR_10
)
{
 DWORD VAR_11, VAR_12;
 FATFS *VAR_13 = VAR_9->obj.fs;


 if (VAR_10 >= (DWORD)((VAR_0 && VAR_13->fs_type == VAR_4) ? VAR_7 : VAR_6) || VAR_10 % VAR_8) {
  return VAR_2;
 }
 VAR_9->dptr = VAR_10;
 VAR_12 = VAR_9->obj.sclust;
 if (VAR_12 == 0 && VAR_13->fs_type >= VAR_5) {
  VAR_12 = VAR_13->dirbase;
  if (VAR_0) VAR_9->obj.stat = 0;
 }

 if (VAR_12 == 0) {
  if (VAR_10 / VAR_8 >= VAR_13->n_rootdir) return VAR_2;
  VAR_9->sect = VAR_13->dirbase;

 } else {
  VAR_11 = (DWORD)VAR_13->csize * FUNC_0(VAR_13);
  while (VAR_10 >= VAR_11) {
   VAR_12 = FUNC_2(&VAR_9->obj, VAR_12);
   if (VAR_12 == 0xFFFFFFFF) return VAR_1;
   if (VAR_12 < 2 || VAR_12 >= VAR_13->n_fatent) return VAR_2;
   VAR_10 -= VAR_11;
  }
  VAR_9->sect = FUNC_1(VAR_13, VAR_12);
 }
 VAR_9->clust = VAR_12;
 if (VAR_9->sect == 0) return VAR_2;
 VAR_9->sect += VAR_10 / FUNC_0(VAR_13);
 VAR_9->dir = VAR_13->win + (VAR_10 % FUNC_0(VAR_13));

 return VAR_3;
}
