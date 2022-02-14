
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfs_time {int year; int mon; int day; int hour; int min; int sec; } ;
struct vfs_stat {char* name; int is_dir; int is_rdonly; int is_hidden; int is_sys; int is_arch; int tm_valid; struct vfs_time tm; int size; } ;
struct TYPE_3__ {int fattrib; int fdate; int ftime; int fsize; int fname; } ;
typedef TYPE_1__ FILINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vfs_stat*,int ,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2( const FILINFO *VAR_6, struct vfs_stat *VAR_7 )
{
  FUNC_0( VAR_7, 0, sizeof( struct vfs_stat ) );


  FUNC_1( VAR_7->name, VAR_6->fname, VAR_5+1 );
  VAR_7->name[VAR_5] = '\0';
  VAR_7->size = VAR_6->fsize;
  VAR_7->is_dir = VAR_6->fattrib & VAR_1 ? 1 : 0;
  VAR_7->is_rdonly = VAR_6->fattrib & VAR_3 ? 1 : 0;
  VAR_7->is_hidden = VAR_6->fattrib & VAR_2 ? 1 : 0;
  VAR_7->is_sys = VAR_6->fattrib & VAR_4 ? 1 : 0;
  VAR_7->is_arch = VAR_6->fattrib & VAR_0 ? 1 : 0;

  struct vfs_time *VAR_8 = &(VAR_7->tm);
  VAR_8->year = (VAR_6->fdate >> 9) + 1980;
  VAR_8->mon = (VAR_6->fdate >> 5) & 0x0f;
  VAR_8->day = VAR_6->fdate & 0x1f;
  VAR_8->hour = (VAR_6->ftime >> 11);
  VAR_8->min = (VAR_6->ftime >> 5) & 0x3f;
  VAR_8->sec = VAR_6->ftime & 0x3f;
  VAR_7->tm_valid = 1;
}
