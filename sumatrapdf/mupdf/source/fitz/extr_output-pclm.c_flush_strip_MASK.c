
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ compress; } ;
struct TYPE_6__ {int w; int n; int * out; } ;
struct TYPE_8__ {unsigned char* stripbuf; size_t complen; unsigned char* compbuf; TYPE_2__ options; TYPE_1__ super; } ;
typedef TYPE_3__ pclm_band_writer ;
typedef int fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,size_t*,unsigned char*,size_t,int ) ;
 int FUNC_1 (int *,int *,unsigned char*,size_t) ;
 int FUNC_2 (int *,int *,char*,size_t,...) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, pclm_band_writer *VAR_2, int VAR_3)
{
 unsigned char *VAR_4 = VAR_2->stripbuf;
 fz_output *VAR_5 = VAR_2->super.out;
 int VAR_6 = VAR_2->super.w;
 int VAR_7 = VAR_2->super.n;
 size_t VAR_8 = VAR_6*VAR_7*VAR_3;


 if (VAR_2->options.compress)
 {
  size_t VAR_9 = VAR_2->complen;
  FUNC_0(VAR_1, VAR_2->compbuf, &VAR_9, VAR_4, VAR_8, VAR_0);
  VAR_8 = VAR_9;
  VAR_4 = VAR_2->compbuf;
 }
 FUNC_2(VAR_1, VAR_5, "%d 0 obj\n<<\n/Width %d\n/ColorSpace /Device%s\n/Height %d\n%s/Subtype /Image\n",
  FUNC_4(VAR_1, VAR_2), VAR_6, VAR_7 == 1 ? "Gray" : "RGB", VAR_3, VAR_2->options.compress ? "/Filter /FlateDecode\n" : "");
 FUNC_2(VAR_1, VAR_5, "/Length %zd\n/Type /XObject\n/BitsPerComponent 8\n>>\nstream\n", VAR_8);
 FUNC_1(VAR_1, VAR_5, VAR_4, VAR_8);
 FUNC_3(VAR_1, VAR_5, "\nendstream\nendobj\n");
}
