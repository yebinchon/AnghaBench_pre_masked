
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * out; } ;
struct TYPE_4__ {int xref_max; int pages; int obj_num; void** xref; void** page_obj; void** compbuf; void** stripbuf; TYPE_1__ super; } ;
typedef TYPE_2__ pclm_band_writer ;
typedef void* int64_t ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int FUNC_0 (int *,void**) ;
 void* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,char*,...) ;
 int FUNC_3 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_band_writer *VAR_1)
{
 pclm_band_writer *VAR_2 = (pclm_band_writer *)VAR_1;
 fz_output *VAR_3 = VAR_2->super.out;
 int VAR_4;


 if (VAR_2->xref_max > 2)
 {
  int64_t VAR_5;


  VAR_2->xref[1] = FUNC_1(VAR_0, VAR_3);
  FUNC_2(VAR_0, VAR_3, "1 0 obj\n<<\n/Type /Catalog\n/Pages 2 0 R\n>>\nendobj\n");


  VAR_2->xref[2] = FUNC_1(VAR_0, VAR_3);
  FUNC_2(VAR_0, VAR_3, "2 0 obj\n<<\n/Count %d\n/Kids [ ", VAR_2->pages);

  for (VAR_4 = 0; VAR_4 < VAR_2->pages; VAR_4++)
   FUNC_2(VAR_0, VAR_3, "%d 0 R ", VAR_2->page_obj[VAR_4]);
  FUNC_3(VAR_0, VAR_3, "]\n/Type /Pages\n>>\nendobj\n");


  VAR_5 = FUNC_1(VAR_0, VAR_3);
  FUNC_2(VAR_0, VAR_3, "xref\n0 %d\n0000000000 65535 f \n", VAR_2->obj_num);
  for (VAR_4 = 1; VAR_4 < VAR_2->obj_num; VAR_4++)
   FUNC_2(VAR_0, VAR_3, "%010zd 00000 n \n", VAR_2->xref[VAR_4]);
  FUNC_2(VAR_0, VAR_3, "trailer\n<<\n/Size %d\n/Root 1 0 R\n>>\nstartxref\n%ld\n%%%%EOF\n", VAR_2->obj_num, VAR_5);
 }

 FUNC_0(VAR_0, VAR_2->stripbuf);
 FUNC_0(VAR_0, VAR_2->compbuf);
 FUNC_0(VAR_0, VAR_2->page_obj);
 FUNC_0(VAR_0, VAR_2->xref);
}
