
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_5__ {int (* get_byte ) () ;} ;
typedef TYPE_1__ UZLIB_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(UZLIB_DATA *VAR_6) {


  if (VAR_6->get_byte() != 0x1f || VAR_6->get_byte() != 0x8b)
    return VAR_0;

  if (VAR_6->get_byte() != 8)
    return VAR_0;

  uchar VAR_7 = VAR_6->get_byte();

  if (VAR_7 & 0xe0)
    return VAR_0;

  FUNC_1(VAR_6, 6);

  if (VAR_7 & VAR_2)
     FUNC_1(VAR_6, FUNC_0(VAR_6));

  if (VAR_7 & VAR_4)
    FUNC_1(VAR_6,0);

  if (VAR_7 & VAR_1)
    FUNC_1(VAR_6,0);

  if (VAR_7 & VAR_3)
    FUNC_1(VAR_6,2);

  return VAR_5;
}
