
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bits; } ;
typedef TYPE_1__ Bitbuf ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1 (Bitbuf *VAR_0, int VAR_1, int VAR_2) {
 int VAR_3, VAR_4 = 0;
 if (VAR_1<VAR_0->bits)
  for (VAR_3=0; VAR_3<VAR_2; VAR_3++)
   if (FUNC_0 (VAR_0, VAR_1+VAR_3)>0)
    VAR_4 |= (1<<(VAR_2-VAR_3-1));
 return VAR_4;
}
