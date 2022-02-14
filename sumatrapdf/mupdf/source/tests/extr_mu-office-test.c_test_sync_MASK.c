
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int width; int height; int lineSkip; int memptr; } ;
struct TYPE_9__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_10__ {TYPE_2__ renderArea; TYPE_1__ origin; } ;
typedef TYPE_3__ MuOfficeRenderArea ;
typedef int MuOfficeRender ;
typedef int MuOfficePage ;
typedef int MuOfficeLib ;
typedef int MuOfficeDoc ;
typedef TYPE_4__ MuOfficeBitmap ;
typedef int MuError ;


 int FUNC_0 (int *,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int,int *,void*,int **) ;
 int FUNC_4 (int *,char*,int *,int *,int *,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,float*,float*) ;
 int FUNC_7 (int *,float,TYPE_4__*,TYPE_3__*,int *,int *,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int,...) ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_4__*,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_14(MuOfficeLib *VAR_4)
{
 MuOfficeDoc *VAR_5;
 MuError VAR_6;
 int VAR_7;
 MuOfficePage *VAR_8;
 float VAR_9, VAR_10;
 MuOfficeBitmap VAR_11;
 MuOfficeRenderArea VAR_12;
 MuOfficeRender *VAR_13;

 VAR_2 = FUNC_0(((void*)0), 0, 1, ((void*)0));

 VAR_6 = FUNC_4(VAR_4,
     "../MyTests/pdf_reference17.pdf",
     ((void*)0),
     ((void*)0),
     ((void*)0),
     &VAR_5);


 VAR_6 = FUNC_2(VAR_5, &VAR_7);
 if (VAR_6)
 {
  FUNC_10(VAR_3, "Failed to count pages: error=%d\n", VAR_6);
  return VAR_0;
 }
 FUNC_10(VAR_3, "%d Pages in document\n", VAR_7);


 VAR_6 = FUNC_3(VAR_5, 1, ((void*)0), (void *)4321, &VAR_8);
 if (VAR_6)
 {
  FUNC_10(VAR_3, "Failed to get page: error=%d\n", VAR_6);
  return VAR_0;
 }


 VAR_6 = FUNC_6(VAR_8, &VAR_9, &VAR_10);
 if (VAR_6)
 {
  FUNC_10(VAR_3, "Failed to get page size: error=%d\n", VAR_6);
  return VAR_0;
 }
 FUNC_10(VAR_3, "Page size = %d x %g\n", VAR_9, VAR_10);


 VAR_11.width = (int)(VAR_9 * 1.5f + 0.5f);
 VAR_11.height = (int)(VAR_10 * 1.5f + 0.5f);
 VAR_11.lineSkip = VAR_11.width * 4;
 VAR_11.memptr = FUNC_12(VAR_11.lineSkip * VAR_11.height);


 VAR_12.origin.x = 0;
 VAR_12.origin.y = 0;
 VAR_12.renderArea.x = 0;
 VAR_12.renderArea.y = 0;
 VAR_12.renderArea.width = VAR_11.width;
 VAR_12.renderArea.height = VAR_11.height;


 VAR_6 = FUNC_7(VAR_8, 1.5f, &VAR_11, &VAR_12, ((void*)0), ((void*)0), &VAR_13);
 if (VAR_6)
 {
  FUNC_10(VAR_3, "Page render failed: error=%d\n", VAR_6);
  return VAR_0;
 }

 VAR_6 = FUNC_9(VAR_13);
 if (VAR_6)
 {
  FUNC_10(VAR_3, "Page render failed to complete: error=%d\n", VAR_6);
  return VAR_0;
 }


 FUNC_8(VAR_13);


 FUNC_13(&VAR_11, "out1.png");
 FUNC_11(VAR_11.memptr);

 FUNC_5(VAR_8);

 FUNC_1(VAR_5);

 return VAR_1;
}
