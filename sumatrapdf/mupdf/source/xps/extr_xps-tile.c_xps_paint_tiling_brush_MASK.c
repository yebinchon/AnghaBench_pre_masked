
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xps_document ;
struct closure {int dummy; } ;
struct TYPE_4__ {int x1; int y1; } ;
typedef TYPE_1__ fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,int *,int ,TYPE_1__,struct closure*) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_3, xps_document *VAR_4, fz_matrix VAR_5, fz_rect VAR_6, int VAR_7, struct closure *VAR_8)
{
 fz_matrix VAR_9;

 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);

 if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
 {
  VAR_9 = FUNC_0(FUNC_1(VAR_5, VAR_6.x1 * 2, 0), -1, 1);
  FUNC_2(VAR_3, VAR_4, VAR_9, VAR_6, VAR_8);
 }

 if (VAR_7 == VAR_2 || VAR_7 == VAR_1)
 {
  VAR_9 = FUNC_0(FUNC_1(VAR_5, 0, VAR_6.y1 * 2), 1, -1);
  FUNC_2(VAR_3, VAR_4, VAR_9, VAR_6, VAR_8);
 }

 if (VAR_7 == VAR_1)
 {
  VAR_9 = FUNC_0(FUNC_1(VAR_5, VAR_6.x1 * 2, VAR_6.y1 * 2), -1, -1);
  FUNC_2(VAR_3, VAR_4, VAR_9, VAR_6, VAR_8);
 }
}
