
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_vol ;
struct TYPE_3__ {int * fns; int fs_type; } ;
struct myvfs_vol {struct myvfs_vol* ldrname; TYPE_1__ vfs_vol; int fs; } ;
struct TYPE_4__ {int pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (struct myvfs_vol*) ;
 int VAR_4 ;
 struct myvfs_vol* FUNC_2 (int) ;
 int VAR_5 ;
 struct myvfs_vol* FUNC_3 (char const*) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,size_t) ;
 char const** VAR_6 ;

__attribute__((used)) static vfs_vol *FUNC_6( const char *VAR_7, int VAR_8 )
{
  struct myvfs_vol *VAR_9;
  const size_t VAR_10 = FUNC_4( VAR_7 );


  if (VAR_8 >= 0) {
    for (int VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
      if (0 == FUNC_5( VAR_7, VAR_6[VAR_11], FUNC_4( VAR_6[VAR_11] ) )) {
        VAR_3[VAR_11].pd = VAR_8;
      }
    }
  }

  if ((VAR_9 = FUNC_2( sizeof( struct myvfs_vol ) ))) {
    if ((VAR_9->ldrname = FUNC_3( VAR_7 ))) {
      if (VAR_0 == (VAR_4 = FUNC_0( &(VAR_9->fs), VAR_7, 1 ))) {
 VAR_9->vfs_vol.fs_type = VAR_2;
 VAR_9->vfs_vol.fns = &VAR_5;
 return (vfs_vol *)VAR_9;
      }
    }
  }

  if (VAR_9) {
    if (VAR_9->ldrname) FUNC_1( VAR_9->ldrname );
    FUNC_1( VAR_9 );
  }
  return ((void*)0);
}
