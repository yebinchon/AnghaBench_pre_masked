
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfs_file {int dummy; } ;
typedef scalar_t__ sint32_t ;


 int FUNC_0 (struct vfs_file const*) ;
 scalar_t__ FUNC_1 (int *,int ,void*,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static sint32_t FUNC_2( const struct vfs_file *VAR_3, void *VAR_4, size_t VAR_5 ) {
  FUNC_0(VAR_3);

  sint32_t VAR_6 = FUNC_1( &VAR_2, VAR_1, VAR_4, VAR_5 );

  return VAR_6 >= 0 ? VAR_6 : VAR_0;
}
