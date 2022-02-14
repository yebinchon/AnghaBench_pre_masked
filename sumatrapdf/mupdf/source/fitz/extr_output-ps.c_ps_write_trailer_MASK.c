
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_7__ {scalar_t__ avail_out; int * next_out; scalar_t__ avail_in; int * next_in; } ;
struct TYPE_5__ {int * out; } ;
struct TYPE_6__ {int stream_ended; TYPE_3__ stream; scalar_t__ output_size; scalar_t__ output; TYPE_1__ super; } ;
typedef TYPE_2__ ps_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int *,int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_4, fz_band_writer *VAR_5)
{
 ps_band_writer *VAR_6 = (ps_band_writer *)VAR_5;
 fz_output *VAR_7 = VAR_6->super.out;
 int VAR_8;

 VAR_6->stream.next_in = ((void*)0);
 VAR_6->stream.avail_in = 0;
 VAR_6->stream.next_out = (Bytef*)VAR_6->output;
 VAR_6->stream.avail_out = (uInt)VAR_6->output_size;

 VAR_8 = FUNC_0(&VAR_6->stream, VAR_1);
 if (VAR_8 != VAR_3)
  FUNC_2(VAR_4, VAR_0, "compression error %d", VAR_8);
 VAR_6->stream_ended = 1;
 VAR_8 = FUNC_1(&VAR_6->stream);
 if (VAR_8 != VAR_2)
  FUNC_2(VAR_4, VAR_0, "compression error %d", VAR_8);

 FUNC_3(VAR_4, VAR_7, VAR_6->output, VAR_6->output_size - VAR_6->stream.avail_out);
 FUNC_4(VAR_4, VAR_7, "\nshowpage\n%%%%PageTrailer\n%%%%EndPageTrailer\n\n");
}
