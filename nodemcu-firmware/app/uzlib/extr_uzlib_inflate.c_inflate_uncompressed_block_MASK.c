
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct TYPE_4__ {scalar_t__ curLen; int (* get_byte ) () ;int (* put_byte ) (int ) ;scalar_t__ bitcount; } ;
typedef TYPE_1__ UZLIB_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3 (UZLIB_DATA *VAR_3) {
  if (VAR_3->curLen == 0) {
    uint VAR_4 = FUNC_0(VAR_3);
    uint VAR_5 = FUNC_0(VAR_3);


    if (VAR_4 != (~VAR_5 & 0x0000ffff))
      return VAR_0;



    VAR_3->curLen = VAR_4 + 1;


    VAR_3->bitcount = 0;
  }

  if (--VAR_3->curLen == 0) {
    return VAR_1;
  }

  VAR_3->put_byte(VAR_3->get_byte());
  return VAR_2;
}
