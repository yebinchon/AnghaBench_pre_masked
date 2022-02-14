
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode3buf; int mode2buf; int prev; } ;
typedef TYPE_1__ mono_pcl_band_writer ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_band_writer *VAR_1)
{
 mono_pcl_band_writer *VAR_2 = (mono_pcl_band_writer *)VAR_1;

 FUNC_0(VAR_0, VAR_2->prev);
 FUNC_0(VAR_0, VAR_2->mode2buf);
 FUNC_0(VAR_0, VAR_2->mode3buf);
}
