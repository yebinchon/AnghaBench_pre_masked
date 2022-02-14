
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_page ;
typedef int fz_matrix ;
struct TYPE_5__ {int w; int h; } ;
typedef TYPE_1__ fz_image ;
typedef int fz_device ;
typedef int fz_cookie ;
typedef int fz_context ;
struct TYPE_6__ {TYPE_1__* image; } ;
typedef TYPE_2__ cbz_page ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int*,int*) ;
 int FUNC_2 (int ,float,float) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_2, fz_page *VAR_3, fz_device *VAR_4, fz_matrix VAR_5, fz_cookie *VAR_6)
{
 cbz_page *VAR_7 = (cbz_page*)VAR_3;
 fz_matrix VAR_8;
 fz_image *VAR_9 = VAR_7->image;
 int VAR_10, VAR_11;
 float VAR_12, VAR_13;

 FUNC_1(VAR_9, &VAR_10, &VAR_11);
 VAR_12 = VAR_9->w * VAR_0 / VAR_10;
 VAR_13 = VAR_9->h * VAR_0 / VAR_11;
 VAR_8 = FUNC_2(VAR_5, VAR_12, VAR_13);
 FUNC_0(VAR_2, VAR_4, VAR_9, VAR_8, 1, VAR_1);
}
