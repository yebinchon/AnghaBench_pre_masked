
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct mg_connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mg_connection*,int *,int) ;
 int FUNC_2 (struct mg_connection*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct mg_connection *VAR_1, uint8_t VAR_2,
                                       uint16_t VAR_3) {
  uint16_t VAR_4;
  uint8_t VAR_5 = (VAR_2 == VAR_0 ? 2 : 0);

  FUNC_2(VAR_1, VAR_2, VAR_5, 2 );

  VAR_4 = FUNC_0(VAR_3);
  FUNC_1(VAR_1, &VAR_4, 2);
}
