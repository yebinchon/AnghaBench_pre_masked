
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nSettings; scalar_t__ exclusive; int existence; } ;
struct TYPE_4__ {size_t featureType; int featureSetting; } ;
typedef TYPE_1__* GXV_mort_feature ;
typedef int GXV_Validator ;
typedef int FT_Byte ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
  FUNC_2( GXV_mort_feature VAR_3,
                             GXV_Validator VAR_4 )
  {
    if ( VAR_3->featureType >= VAR_2 )
    {
      FUNC_1(( "featureType %d is out of registered range, "
                  "setting %d is unchecked\n",
                  VAR_3->featureType, VAR_3->featureSetting ));
      FUNC_0( VAR_0 );
    }
    else if ( !VAR_1[VAR_3->featureType].existence )
    {
      FUNC_1(( "featureType %d is within registered area "
                  "but undefined, setting %d is unchecked\n",
                  VAR_3->featureType, VAR_3->featureSetting ));
      FUNC_0( VAR_0 );
    }
    else
    {
      FT_Byte VAR_5;



      VAR_5 = VAR_1[VAR_3->featureType].nSettings;
      if ( VAR_1[VAR_3->featureType].exclusive )
        VAR_5 = (FT_Byte)( 2 * VAR_5 );

      FUNC_1(( "featureType %d is registered", VAR_3->featureType ));
      FUNC_1(( "setting %d", VAR_3->featureSetting ));

      if ( VAR_3->featureSetting > VAR_5 )
      {
        FUNC_1(( "out of defined range %d", VAR_5 ));
        FUNC_0( VAR_0 );
      }
      FUNC_1(( "\n" ));
    }


  }
