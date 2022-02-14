
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x1; int x0; int y1; int y0; } ;
struct TYPE_5__ {int colorspace; scalar_t__ format; scalar_t__ num_workers; int band_height_multiple; int n; int bander; scalar_t__ bands_rendered; TYPE_1__ ibounds; } ;
typedef TYPE_2__ render_details ;
typedef int fz_context ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_10, render_details *VAR_11, int VAR_12)
{
 size_t VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_11->colorspace = VAR_8;
 VAR_11->format = VAR_9;
 switch (VAR_11->colorspace)
 {
 case 129:
  VAR_14 = 1;
  break;
 case 128:
  VAR_14 = 2;
  break;
 default:
 case 130:
  VAR_14 = 3;
  break;
 }

 VAR_16 = VAR_11->ibounds.x1 - VAR_11->ibounds.x0;
 VAR_13 = VAR_14 * VAR_16 * VAR_6;
 VAR_17 = (int)(VAR_5 / VAR_13);
 if (VAR_17 < 1)
  VAR_17 = 1;


 if (VAR_11->num_workers > 0)
 {
  int VAR_18, VAR_19;
  VAR_15 = VAR_11->ibounds.y1 - VAR_11->ibounds.y0;
  VAR_19 = (VAR_15 + VAR_6 - 1) / VAR_6;

  VAR_18 = (VAR_19 + VAR_17-1) / VAR_17;

  VAR_18 = ((VAR_18 + VAR_11->num_workers - 1) / VAR_11->num_workers) * VAR_11->num_workers;

  VAR_17 = (VAR_19 + VAR_18 - 1) / VAR_18;
 }

 VAR_11->band_height_multiple = VAR_17;
 VAR_11->bands_rendered = 0;

 if (VAR_9 == VAR_2 || VAR_9 == VAR_4)
 {
  VAR_11->bander = FUNC_3(VAR_10, VAR_7);
  VAR_11->n = VAR_9 == VAR_2 ? 1 : 3;
 }
 else if (VAR_9 == VAR_0)
 {
  VAR_11->bander = FUNC_0(VAR_10, VAR_7);
  VAR_11->n = 4;
 }
 else if (VAR_9 == VAR_1)
 {
  VAR_11->bander = FUNC_1(VAR_10, VAR_7);
  VAR_11->n = 1;
 }
 else if (VAR_9 == VAR_3)
 {
  VAR_11->bander = FUNC_2(VAR_10, VAR_7);
  VAR_11->n = 4;
 }
}
