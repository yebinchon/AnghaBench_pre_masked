
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* image; } ;
typedef TYPE_1__ img_page ;
typedef int fz_page ;
typedef int fz_matrix ;
struct TYPE_6__ {int w; int h; } ;
typedef TYPE_2__ fz_image ;
typedef int fz_device ;
typedef int fz_cookie ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_2__*,int ,int,int ) ;
 int FUNC_1 (TYPE_2__*,int*,int*) ;
 int FUNC_2 (int ,float,float) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_2, fz_page *VAR_3, fz_device *VAR_4, fz_matrix VAR_5, fz_cookie *VAR_6)
{
 img_page *VAR_7 = (img_page*)VAR_3;
 fz_image *VAR_8 = VAR_7->image;
 int VAR_9, VAR_10;
 float VAR_11, VAR_12;

 FUNC_1(VAR_8, &VAR_9, &VAR_10);
 VAR_11 = VAR_8->w * VAR_0 / VAR_9;
 VAR_12 = VAR_8->h * VAR_0 / VAR_10;
 VAR_5 = FUNC_2(VAR_5, VAR_11, VAR_12);
 FUNC_0(VAR_2, VAR_4, VAR_8, VAR_5, 1, VAR_1);
}
