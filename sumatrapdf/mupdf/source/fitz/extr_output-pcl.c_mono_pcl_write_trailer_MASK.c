
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int features; } ;
struct TYPE_4__ {int * out; } ;
struct TYPE_6__ {TYPE_2__ options; TYPE_1__ super; } ;
typedef TYPE_3__ mono_pcl_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_1, fz_band_writer *VAR_2)
{
 mono_pcl_band_writer *VAR_3 = (mono_pcl_band_writer *)VAR_2;
 fz_output *VAR_4 = VAR_3->super.out;


 FUNC_0(VAR_1, VAR_4, "\033*rB\f");

 if (VAR_3->options.features & VAR_0)
 {

  FUNC_0(VAR_1, VAR_4, "\033%1BPUSP0PG;\033E");
 }
}
