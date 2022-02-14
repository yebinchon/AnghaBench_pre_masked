
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


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int ,int *,void*,int **) ;
 int FUNC_4 (int *,char*,int ,int ,void*,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,float*,float*) ;
 int FUNC_7 (int *,float,TYPE_4__*,TYPE_3__*,int ,void*,int **) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,char*,int,...) ;
 int FUNC_11 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_12 (int) ;
 int VAR_6 ;
 int FUNC_13 (TYPE_4__*,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_14(MuOfficeLib *VAR_8)
{
 MuOfficeDoc *VAR_9;
 MuError VAR_10;
 int VAR_11;
 MuOfficePage *VAR_12;
 float VAR_13, VAR_14;
 MuOfficeBitmap VAR_15;
 MuOfficeRenderArea VAR_16;
 MuOfficeRender *VAR_17;

 VAR_10 = FUNC_4(VAR_8,
     "../MyTests/pdf_reference17.pdf",
     VAR_4,
     VAR_3,
     (void *)1234,
     &VAR_9);


 FUNC_9(VAR_5, VAR_2);


 VAR_10 = FUNC_2(VAR_9, &VAR_11);
 if (VAR_10)
 {
  FUNC_10(VAR_7, "Failed to count pages: error=%d\n", VAR_10);
  return VAR_0;
 }
 FUNC_10(VAR_7, "%d Pages in document\n", VAR_11);


 VAR_10 = FUNC_3(VAR_9, 0, ((void*)0), (void *)4321, &VAR_12);
 if (VAR_10)
 {
  FUNC_10(VAR_7, "Failed to get page: error=%d\n", VAR_10);
  return VAR_0;
 }


 VAR_10 = FUNC_6(VAR_12, &VAR_13, &VAR_14);
 if (VAR_10)
 {
  FUNC_10(VAR_7, "Failed to get page size: error=%d\n", VAR_10);
  return VAR_0;
 }
 FUNC_10(VAR_7, "Page size = %d x %g\n", VAR_13, VAR_14);


 VAR_15.width = (int)(VAR_13 * 1.5f + 0.5f);
 VAR_15.height = (int)(VAR_14 * 1.5f + 0.5f);
 VAR_15.lineSkip = VAR_15.width * 4;
 VAR_15.memptr = FUNC_12(VAR_15.lineSkip * VAR_15.height);


 VAR_16.origin.x = 0;
 VAR_16.origin.y = 0;
 VAR_16.renderArea.x = 0;
 VAR_16.renderArea.y = 0;
 VAR_16.renderArea.width = VAR_15.width;
 VAR_16.renderArea.height = VAR_15.height;


 VAR_10 = FUNC_7(VAR_12, 1.5f, &VAR_15, &VAR_16, VAR_6, (void *)5678, &VAR_17);
 if (VAR_10)
 {
  FUNC_10(VAR_7, "Page render failed: error=%d\n", VAR_10);
  return VAR_0;
 }


 FUNC_9(VAR_5, VAR_2);


 FUNC_8(VAR_17);


 FUNC_13(&VAR_15, "out.png");
 FUNC_11(VAR_15.memptr);

 FUNC_5(VAR_12);

 FUNC_1(VAR_9);

 FUNC_0(VAR_5);
 VAR_5 = ((void*)0);

 return VAR_1;
}
