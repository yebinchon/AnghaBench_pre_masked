
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output; int input; int stream; int stream_ended; } ;
typedef TYPE_1__ ps_band_writer ;
typedef int fz_context ;
typedef int fz_band_writer ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_band_writer *VAR_2)
{
 ps_band_writer *VAR_3 = (ps_band_writer *)VAR_2;

 if (!VAR_3->stream_ended)
 {
  int VAR_4 = FUNC_0(&VAR_3->stream);
  if (VAR_4 != VAR_0)
   FUNC_2(VAR_1, "ignoring compression error %d", VAR_4);
 }

 FUNC_1(VAR_1, VAR_3->input);
 FUNC_1(VAR_1, VAR_3->output);
}
