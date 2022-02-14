
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int macro_t ;
struct TYPE_4__ {int pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;



 int FUNC_0 (int ) ;
 int VAR_0 ;
 int const VAR_1 ;

 int VAR_2 ;
 int const* FUNC_1 (int ,int ,int ,...) ;
 int const* VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ) ;

const macro_t *FUNC_4(keyrecord_t *VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{

      switch(VAR_7) {
        case 128:
            return (VAR_6->event.pressed ?
                    FUNC_1( FUNC_0(VAR_2), FUNC_2(VAR_1), FUNC_3(VAR_4), FUNC_2(VAR_5), VAR_0) :
                    VAR_3 );
        case 129:
            return (VAR_6->event.pressed ?
                    FUNC_1( FUNC_2(128), FUNC_2(VAR_5), VAR_0 ) :
                    VAR_3 );
      }
    return VAR_3;
}
