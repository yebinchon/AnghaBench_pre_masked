
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bitmap_cache_persist_enable; } ;
typedef int STREAM ;
typedef TYPE_1__ RDPCLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(RDPCLIENT * VAR_7, STREAM VAR_8)
{
 FUNC_1(VAR_8, VAR_6);
 FUNC_1(VAR_8, VAR_5);

 FUNC_1(VAR_8, VAR_7->bitmap_cache_persist_enable ? 2 : 0);

 FUNC_0(VAR_8, 3);


 FUNC_2(VAR_8, VAR_0);
 FUNC_2(VAR_8, VAR_1);
 if (FUNC_4(VAR_7, 2))
 {
  FUNC_2(VAR_8, VAR_4 | VAR_3);
 }
 else
 {
  FUNC_2(VAR_8, VAR_2);
 }
 FUNC_3(VAR_8, 20);
}
