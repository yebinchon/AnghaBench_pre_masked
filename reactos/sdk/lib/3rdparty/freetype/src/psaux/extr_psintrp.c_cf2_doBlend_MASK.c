
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lenBV; int * BV; } ;
typedef TYPE_1__* CFF_Blend ;
typedef scalar_t__ CF2_UInt ;
typedef int CF2_Stack ;
typedef int CF2_Fixed ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static void
  FUNC_6( const CFF_Blend VAR_0,
               CF2_Stack VAR_1,
               CF2_UInt VAR_2 )
  {
    CF2_UInt VAR_3;
    CF2_UInt VAR_4;
    CF2_UInt VAR_5, VAR_6;
    CF2_UInt VAR_7 = (CF2_UInt)( VAR_2 * VAR_0->lenBV );


    VAR_4 = FUNC_2( VAR_1 ) - VAR_7;
    VAR_3 = VAR_4 + VAR_2;

    for ( VAR_5 = 0; VAR_5 < VAR_2; VAR_5++ )
    {
      const CF2_Fixed* VAR_8 = &VAR_0->BV[1];


      CF2_Fixed VAR_9 = FUNC_3( VAR_1, VAR_5 + VAR_4 );


      for ( VAR_6 = 1; VAR_6 < VAR_0->lenBV; VAR_6++ )
        VAR_9 = FUNC_0( VAR_9,
                         FUNC_1( *VAR_8++,
                                    FUNC_3( VAR_1,
                                                       VAR_3++ ) ) );


      FUNC_5( VAR_1, VAR_5 + VAR_4, VAR_9 );
    }


    FUNC_4( VAR_1, VAR_7 - VAR_2 );
  }
