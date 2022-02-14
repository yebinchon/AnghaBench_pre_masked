
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_document ;
struct TYPE_5__ {int x1; int y1; int* c1; int vprow; int bpflag; int bpcoord; int bpcomp; void** c0; void* y0; void* x0; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_7__ {int type; TYPE_2__ u; } ;
typedef TYPE_3__ fz_shade ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *,int ) ;
 void* FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_6, pdf_document *VAR_7, fz_shade *VAR_8, pdf_obj *VAR_9)
{
 pdf_obj *VAR_10;
 int VAR_11, VAR_12;

 VAR_8->u.m.x0 = VAR_8->u.m.y0 = 0;
 VAR_8->u.m.x1 = VAR_8->u.m.y1 = 1;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
 {
  VAR_8->u.m.c0[VAR_11] = 0;
  VAR_8->u.m.c1[VAR_11] = 1;
 }

 VAR_8->u.m.vprow = FUNC_6(VAR_6, VAR_9, FUNC_0(VAR_5));
 VAR_8->u.m.bpflag = FUNC_6(VAR_6, VAR_9, FUNC_0(VAR_2));
 VAR_8->u.m.bpcoord = FUNC_6(VAR_6, VAR_9, FUNC_0(VAR_1));
 VAR_8->u.m.bpcomp = FUNC_6(VAR_6, VAR_9, FUNC_0(VAR_0));

 VAR_10 = FUNC_5(VAR_6, VAR_9, FUNC_0(VAR_3));
 if (FUNC_4(VAR_6, VAR_10) >= 6)
 {
  VAR_12 = FUNC_1(VAR_4, (FUNC_4(VAR_6, VAR_10) - 4) / 2);
  VAR_8->u.m.x0 = FUNC_3(VAR_6, VAR_10, 0);
  VAR_8->u.m.x1 = FUNC_3(VAR_6, VAR_10, 1);
  VAR_8->u.m.y0 = FUNC_3(VAR_6, VAR_10, 2);
  VAR_8->u.m.y1 = FUNC_3(VAR_6, VAR_10, 3);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  {
   VAR_8->u.m.c0[VAR_11] = FUNC_3(VAR_6, VAR_10, 4 + VAR_11 * 2);
   VAR_8->u.m.c1[VAR_11] = FUNC_3(VAR_6, VAR_10, 5 + VAR_11 * 2);
  }
 }

 if (VAR_8->u.m.vprow < 2 && VAR_8->type == 5)
 {
  FUNC_2(VAR_6, "Too few vertices per row (%d)", VAR_8->u.m.vprow);
  VAR_8->u.m.vprow = 2;
 }

 if (VAR_8->u.m.bpflag != 2 && VAR_8->u.m.bpflag != 4 && VAR_8->u.m.bpflag != 8 &&
  VAR_8->type != 5)
 {
  FUNC_2(VAR_6, "Invalid number of bits per flag (%d)", VAR_8->u.m.bpflag);
  VAR_8->u.m.bpflag = 8;
 }

 if (VAR_8->u.m.bpcoord != 1 && VAR_8->u.m.bpcoord != 2 && VAR_8->u.m.bpcoord != 4 &&
  VAR_8->u.m.bpcoord != 8 && VAR_8->u.m.bpcoord != 12 && VAR_8->u.m.bpcoord != 16 &&
  VAR_8->u.m.bpcoord != 24 && VAR_8->u.m.bpcoord != 32)
 {
  FUNC_2(VAR_6, "Invalid number of bits per coordinate (%d)", VAR_8->u.m.bpcoord);
  VAR_8->u.m.bpcoord = 8;
 }

 if (VAR_8->u.m.bpcomp != 1 && VAR_8->u.m.bpcomp != 2 && VAR_8->u.m.bpcomp != 4 &&
  VAR_8->u.m.bpcomp != 8 && VAR_8->u.m.bpcomp != 12 && VAR_8->u.m.bpcomp != 16)
 {
  FUNC_2(VAR_6, "Invalid number of bits per component (%d)", VAR_8->u.m.bpcomp);
  VAR_8->u.m.bpcomp = 8;
 }
}
