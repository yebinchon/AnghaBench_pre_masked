
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_physdev {int dev; } ;
typedef int PHYSDEV ;
typedef int LPCWSTR ;
typedef int DEVMODEW ;
typedef int BOOL ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct path_physdev* FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static BOOL FUNC_4( PHYSDEV *VAR_3, LPCWSTR VAR_4, LPCWSTR VAR_5,
                              LPCWSTR VAR_6, const DEVMODEW *VAR_7 )
{
    struct path_physdev *VAR_8 = FUNC_2( FUNC_1(), 0, sizeof(*VAR_8) );
    FUNC_0("pathdrv_CreateDC dev %p\n",VAR_3);
    if (!VAR_8) return VAR_0;
    FUNC_3( VAR_3, &VAR_8->dev, &VAR_2 );
    return VAR_1;
}
