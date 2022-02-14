
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * out; } ;
struct TYPE_4__ {int stream_ended; int stream; TYPE_1__ super; } ;
typedef TYPE_2__ png_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int *,char*,unsigned char*,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_2, fz_band_writer *VAR_3)
{
 png_band_writer *VAR_4 = (png_band_writer *)(void *)VAR_3;
 fz_output *VAR_5 = VAR_4->super.out;
 unsigned char VAR_6[1];
 int VAR_7;

 VAR_4->stream_ended = 1;
 VAR_7 = FUNC_0(&VAR_4->stream);
 if (VAR_7 != VAR_1)
  FUNC_1(VAR_2, VAR_0, "compression error %d", VAR_7);

 FUNC_2(VAR_2, VAR_5, "IEND", VAR_6, 0);
}
