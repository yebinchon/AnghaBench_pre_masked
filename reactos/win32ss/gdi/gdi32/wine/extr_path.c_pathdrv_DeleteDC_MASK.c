
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_physdev {int dummy; } ;
typedef int PHYSDEV ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct path_physdev*) ;
 int VAR_0 ;
 struct path_physdev* FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4( PHYSDEV VAR_1 )
{
    struct path_physdev *VAR_2 = FUNC_3( VAR_1 );
    FUNC_0("pathdrv_DeleteDC dev %p\n",VAR_1);
    FUNC_2( FUNC_1(), 0, VAR_2 );
    return VAR_0;
}
