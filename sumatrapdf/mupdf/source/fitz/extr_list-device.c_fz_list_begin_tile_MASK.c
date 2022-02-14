
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tile ;
typedef int fz_rect ;
typedef int fz_matrix ;
struct TYPE_3__ {float xstep; float ystep; int id; int view; } ;
typedef TYPE_1__ fz_list_tile_data ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ,int *,int *,int *,int *,int *,int *,int *,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_1, fz_device *VAR_2, fz_rect VAR_3, fz_rect VAR_4, float VAR_5, float VAR_6, fz_matrix VAR_7, int VAR_8)
{
 fz_list_tile_data VAR_9;

 VAR_9.xstep = VAR_5;
 VAR_9.ystep = VAR_6;
 VAR_9.view = VAR_4;
 VAR_9.id = VAR_8;
 FUNC_0(
  VAR_1,
  VAR_2,
  VAR_0,
  0,
  &VAR_3,
  ((void*)0),
  ((void*)0),
  ((void*)0),
  ((void*)0),
  &VAR_7,
  ((void*)0),
  &VAR_9,
  sizeof(VAR_9));

 return 0;
}
