
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int fontAscent; int fontDescent; int maxbounds; int ink_maxbounds; int minbounds; int ink_minbounds; int maxOverlap; scalar_t__ drawDirection; scalar_t__ inkMetrics; scalar_t__ inkInside; scalar_t__ constantWidth; scalar_t__ terminalFont; scalar_t__ constantMetrics; scalar_t__ noOverlap; } ;
struct TYPE_6__ {int count; int tables; } ;
struct TYPE_7__ {TYPE_1__ toc; TYPE_3__ accel; } ;
typedef TYPE_2__* PCF_Face ;
typedef TYPE_3__* PCF_Accel ;
typedef scalar_t__ FT_ULong ;
typedef int FT_Stream ;
typedef scalar_t__ FT_Error ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static FT_Error
  FUNC_10( FT_Stream VAR_7,
                 PCF_Face VAR_8,
                 FT_ULong VAR_9 )
  {
    FT_ULong VAR_10, VAR_11;
    FT_Error VAR_12;
    PCF_Accel VAR_13 = &VAR_8->accel;


    VAR_12 = FUNC_9( VAR_7,
                                    VAR_8->toc.tables,
                                    VAR_8->toc.count,
                                    VAR_9,
                                    &VAR_10,
                                    &VAR_11 );
    if ( VAR_12 )
      goto Bail;

    if ( FUNC_1( VAR_10 ) )
      goto Bail;

    FUNC_4(( "pcf_get_accel%s:\n"
                "  format: 0x%lX (%s, %s)\n",
                VAR_9 == VAR_2 ? " (getting BDF accelerators)"
                                             : "",
                VAR_10,
                FUNC_6( VAR_10 ) == VAR_0 ? "MSB" : "LSB",
                FUNC_7( VAR_10, VAR_1 ) ?
                  "accelerated" : "not accelerated" ));

    if ( !FUNC_7( VAR_10, VAR_3 ) &&
         !FUNC_7( VAR_10, VAR_1 ) )
      goto Bail;

    if ( FUNC_6( VAR_10 ) == VAR_0 )
    {
      if ( FUNC_2( VAR_6, VAR_13 ) )
        goto Bail;
    }
    else
    {
      if ( FUNC_2( VAR_5, VAR_13 ) )
        goto Bail;
    }

    FUNC_5(( "  noOverlap=%s, constantMetrics=%s,"
                " terminalFont=%s, constantWidth=%s\n"
                "  inkInside=%s, inkMetrics=%s, drawDirection=%s\n"
                "  fontAscent=%ld, fontDescent=%ld, maxOverlap=%ld\n",
                VAR_13->noOverlap ? "yes" : "no",
                VAR_13->constantMetrics ? "yes" : "no",
                VAR_13->terminalFont ? "yes" : "no",
                VAR_13->constantWidth ? "yes" : "no",
                VAR_13->inkInside ? "yes" : "no",
                VAR_13->inkMetrics ? "yes" : "no",
                VAR_13->drawDirection ? "RTL" : "LTR",
                VAR_13->fontAscent,
                VAR_13->fontDescent,
                VAR_13->maxOverlap ));


    if ( FUNC_0( VAR_13->fontAscent ) > 0x7FFF )
    {
      VAR_13->fontAscent = VAR_13->fontAscent < 0 ? -0x7FFF : 0x7FFF;
      FUNC_3(( "pfc_get_accel: clamping font ascent to value %d\n",
                  VAR_13->fontAscent ));
    }
    if ( FUNC_0( VAR_13->fontDescent ) > 0x7FFF )
    {
      VAR_13->fontDescent = VAR_13->fontDescent < 0 ? -0x7FFF : 0x7FFF;
      FUNC_3(( "pfc_get_accel: clamping font descent to value %d\n",
                  VAR_13->fontDescent ));
    }

    FUNC_5(( "  minbounds:" ));
    VAR_12 = FUNC_8( VAR_7,
                            VAR_10 & ( ~VAR_4 ),
                            &(VAR_13->minbounds) );
    if ( VAR_12 )
      goto Bail;

    FUNC_5(( "  maxbounds:" ));
    VAR_12 = FUNC_8( VAR_7,
                            VAR_10 & ( ~VAR_4 ),
                            &(VAR_13->maxbounds) );
    if ( VAR_12 )
      goto Bail;

    if ( FUNC_7( VAR_10, VAR_1 ) )
    {
      FUNC_5(( "  ink minbounds:" ));
      VAR_12 = FUNC_8( VAR_7,
                              VAR_10 & ( ~VAR_4 ),
                              &(VAR_13->ink_minbounds) );
      if ( VAR_12 )
        goto Bail;

      FUNC_5(( "  ink maxbounds:" ));
      VAR_12 = FUNC_8( VAR_7,
                              VAR_10 & ( ~VAR_4 ),
                              &(VAR_13->ink_maxbounds) );
      if ( VAR_12 )
        goto Bail;
    }
    else
    {
      VAR_13->ink_minbounds = VAR_13->minbounds;
      VAR_13->ink_maxbounds = VAR_13->maxbounds;
    }

  Bail:
    return VAR_12;
  }
