
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int no_long_family_names; } ;
typedef TYPE_1__* PCF_Driver ;
typedef char const* FT_Module ;
typedef int FT_Error ;
typedef int FT_Bool ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static FT_Error
  FUNC_4( FT_Module VAR_2,
                    const char* VAR_3,
                    const void* VAR_4 )
  {
    FUNC_2( VAR_2 );
    FUNC_2( VAR_4 );

    FUNC_2( VAR_3 );




    FUNC_1(( "pcf_property_get: missing property `%s'\n",
                VAR_3 ));
    return FUNC_0( VAR_1 );
  }
