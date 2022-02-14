
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_physdev {int dummy; } ;
typedef int PHYSDEV ;
typedef int DC ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct path_physdev*) ;
 int VAR_0 ;
 struct path_physdev* FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_6( PHYSDEV VAR_2 )
{
    struct path_physdev *VAR_3 = FUNC_3( VAR_2 );
    DC *VAR_4 = FUNC_4( VAR_2 );

    FUNC_0("pathdrv_EndPath dev %p\n",VAR_2);

    FUNC_5( VAR_4, &VAR_1 );
    FUNC_2( FUNC_1(), 0, VAR_3 );

    return VAR_0;
}
