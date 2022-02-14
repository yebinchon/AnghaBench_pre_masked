
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_stat {char* name; int size; } ;
struct vfs_dir {int dummy; } ;
struct spiffs_dirent {int size; int name; } ;
typedef int sint32_t ;


 int VAR_0 ;
 int FUNC_0 (struct vfs_dir const*) ;
 scalar_t__ FUNC_1 (int ,struct spiffs_dirent*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vfs_stat*,int ,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static sint32_t FUNC_4( const struct vfs_dir *VAR_4, struct vfs_stat *VAR_5 ) {
  FUNC_0(VAR_4);
  struct spiffs_dirent VAR_6;

  if (FUNC_1( VAR_3, &VAR_6 )) {
    FUNC_2( VAR_5, 0, sizeof( struct vfs_stat ) );



    FUNC_3( VAR_5->name, VAR_6.name, VAR_0+1 );
    VAR_5->name[VAR_0] = '\0';
    VAR_5->size = VAR_6.size;
    return VAR_2;
  }

  return VAR_1;
}
