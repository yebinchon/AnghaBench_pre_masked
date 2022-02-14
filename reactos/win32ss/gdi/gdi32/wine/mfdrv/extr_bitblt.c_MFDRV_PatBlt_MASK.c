
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitblt_coords {int log_height; int log_width; int log_y; int log_x; } ;
typedef int PHYSDEV ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

BOOL FUNC_3( PHYSDEV VAR_2, struct bitblt_coords *VAR_3, DWORD VAR_4 )
{
    FUNC_2( VAR_2, VAR_0, VAR_3->log_x, VAR_3->log_y, VAR_3->log_width, VAR_3->log_height,
                      FUNC_0(VAR_4), FUNC_1(VAR_4) );
    return VAR_1;
}
