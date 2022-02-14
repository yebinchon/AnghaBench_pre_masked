
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {int rate; scalar_t__ mclk; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = -VAR_0;
 u_int VAR_6, VAR_7 = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4].rate == VAR_3) {
   VAR_6 = VAR_1[VAR_4].mclk;
   if (FUNC_1(VAR_2 - VAR_6) < FUNC_1(VAR_2 - VAR_7)) {
    VAR_7 = VAR_6;
    VAR_5 = VAR_4;
   }
  }
 }
 return VAR_5;
}
