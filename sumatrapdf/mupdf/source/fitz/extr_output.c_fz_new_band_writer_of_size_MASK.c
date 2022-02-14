
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_output ;
typedef int fz_context ;
struct TYPE_4__ {int * out; } ;
typedef TYPE_1__ fz_band_writer ;


 TYPE_1__* FUNC_0 (int *,size_t,int) ;

fz_band_writer *FUNC_1(fz_context *VAR_0, size_t VAR_1, fz_output *VAR_2)
{
 fz_band_writer *VAR_3 = FUNC_0(VAR_0, VAR_1, 1);
 VAR_3->out = VAR_2;
 return VAR_3;
}
