
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfs_vol {int dummy; } ;
typedef int int32_t ;
struct TYPE_2__ {void* ldrname; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vfs_vol const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int32_t FUNC_3( const struct vfs_vol *VAR_5 )
{
  FUNC_0(VAR_5);

  VAR_3 = FUNC_1( ((void*)0), VAR_4->ldrname, 0 );

  FUNC_2( VAR_4->ldrname );
  FUNC_2( (void *)VAR_5 );

  return VAR_3 == VAR_0 ? VAR_2 : VAR_1;
}
