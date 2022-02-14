
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfs_stat {char* name; int size; } ;
struct TYPE_3__ {int size; int name; } ;
typedef TYPE_1__ spiffs_stat ;
typedef int sint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct vfs_stat*,int ,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static sint32_t FUNC_3( const char *VAR_4, struct vfs_stat *VAR_5 ) {
  spiffs_stat VAR_6;

  if (0 <= FUNC_0( &VAR_3, VAR_4, &VAR_6 )) {
    FUNC_1( VAR_5, 0, sizeof( struct vfs_stat ) );


    FUNC_2( VAR_5->name, VAR_6.name, VAR_0+1 );
    VAR_5->name[VAR_0] = '\0';
    VAR_5->size = VAR_6.size;

    return VAR_2;
  } else {
    return VAR_1;
  }
}
