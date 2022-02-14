
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int * now; } ;
typedef int chr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static const chr *
FUNC_4(struct vars *VAR_5)
{
 const chr *VAR_6;

 FUNC_3(FUNC_2(VAR_1) || FUNC_2(VAR_2) || FUNC_2(VAR_0));
 FUNC_1();

 VAR_6 = VAR_5->now;
 while (FUNC_2(VAR_4))
 {
  VAR_6 = VAR_5->now;
  FUNC_1();
 }

 FUNC_3(FUNC_2(VAR_3) || FUNC_0());
 FUNC_1();

 return VAR_6;
}
