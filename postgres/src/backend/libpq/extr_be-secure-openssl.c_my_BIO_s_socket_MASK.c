
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int bwrite; int bread; } ;
typedef TYPE_1__ BIO_METHOD ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int,char*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_17 () ;
 TYPE_1__* FUNC_18 (int) ;
 int FUNC_19 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BIO_METHOD *
FUNC_20(void)
{
 if (!VAR_0)
 {
  BIO_METHOD *VAR_3 = (BIO_METHOD *) FUNC_17();
  VAR_0 = FUNC_18(sizeof(BIO_METHOD));
  if (!VAR_0)
   return ((void*)0);
  FUNC_19(VAR_0, VAR_3, sizeof(BIO_METHOD));
  VAR_0->bread = VAR_1;
  VAR_0->bwrite = VAR_2;

 }
 return VAR_0;
}
