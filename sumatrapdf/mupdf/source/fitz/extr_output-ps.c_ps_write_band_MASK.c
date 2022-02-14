
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_7__ {int avail_in; scalar_t__ avail_out; int * next_out; int * next_in; } ;
struct TYPE_5__ {int w; int h; int n; int * out; } ;
struct TYPE_6__ {unsigned char* input; int input_size; unsigned char* output; int output_size; TYPE_3__ stream; TYPE_1__ super; } ;
typedef TYPE_2__ ps_band_writer ;
typedef int fz_output ;
typedef int fz_context ;
typedef int fz_band_writer ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *,unsigned char*) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (int *,int *,unsigned char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_3, fz_band_writer *VAR_4, int VAR_5, int VAR_6, int VAR_7, const unsigned char *VAR_8)
{
 ps_band_writer *VAR_9 = (ps_band_writer *)VAR_4;
 fz_output *VAR_10 = VAR_9->super.out;
 int VAR_11 = VAR_9->super.w;
 int VAR_12 = VAR_9->super.h;
 int VAR_13 = VAR_9->super.n;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 int VAR_19;
 unsigned char *VAR_20;

 if (!VAR_10)
  return;

 if (VAR_6+VAR_7 >= VAR_12)
  VAR_7 = VAR_12 - VAR_6;

 VAR_18 = VAR_11*VAR_13*VAR_7;
 VAR_19 = (int)FUNC_1(&VAR_9->stream, VAR_18);

 if (VAR_9->input == ((void*)0) || VAR_9->input_size < VAR_18)
 {
  FUNC_2(VAR_3, VAR_9->input);
  VAR_9->input = ((void*)0);
  VAR_9->input = FUNC_3(VAR_3, VAR_18);
  VAR_9->input_size = VAR_18;
 }

 if (VAR_9->output == ((void*)0) || VAR_9->output_size < VAR_19)
 {
  FUNC_2(VAR_3, VAR_9->output);
  VAR_9->output = ((void*)0);
  VAR_9->output = FUNC_3(VAR_3, VAR_19);
  VAR_9->output_size = VAR_19;
 }

 VAR_20 = VAR_9->input;
 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
 {
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  {
   for (VAR_16 = VAR_13; VAR_16 > 0; VAR_16--)
    *VAR_20++ = *VAR_8++;
  }
  VAR_8 += VAR_5 - VAR_11*VAR_13;
 }

 VAR_9->stream.next_in = (Bytef*)VAR_9->input;
 VAR_9->stream.avail_in = VAR_18;
 VAR_9->stream.next_out = (Bytef*)VAR_9->output;
 VAR_9->stream.avail_out = (uInt)VAR_9->output_size;

 VAR_17 = FUNC_0(&VAR_9->stream, VAR_1);
 if (VAR_17 != VAR_2)
  FUNC_4(VAR_3, VAR_0, "compression error %d", VAR_17);

 FUNC_5(VAR_3, VAR_10, VAR_9->output, VAR_9->output_size - VAR_9->stream.avail_out);
}
