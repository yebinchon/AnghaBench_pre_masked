
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int c; int columns; int stage; int dst; } ;
typedef TYPE_1__ fz_faxd ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_8, fz_faxd *VAR_9)
{
 int VAR_10;

 if (VAR_9->a == -1)
  VAR_9->a = 0;

 if (VAR_9->c)
  VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_4, VAR_6);
 else
  VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_5, VAR_7);

 if (VAR_10 == VAR_3)
  FUNC_0(VAR_8, VAR_0, "uncompressed data in faxd");

 if (VAR_10 < 0)
  FUNC_0(VAR_8, VAR_0, "negative code in 1d faxd");

 if (VAR_9->a + VAR_10 > VAR_9->columns)
  FUNC_0(VAR_8, VAR_0, "overflow in 1d faxd");

 if (VAR_9->c)
  FUNC_2(VAR_9->dst, VAR_9->a, VAR_9->a + VAR_10);

 VAR_9->a += VAR_10;

 if (VAR_10 < 64)
 {
  VAR_9->c = !VAR_9->c;
  VAR_9->stage = VAR_2;
 }
 else
  VAR_9->stage = VAR_1;
}
