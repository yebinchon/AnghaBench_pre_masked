
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct cvec {int dummy; } ;
typedef scalar_t__ chr ;


 int FUNC_0 (struct cvec*,scalar_t__) ;
 struct cvec* FUNC_1 (struct vars*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct cvec *
FUNC_4(struct vars *VAR_0,
   chr VAR_1)
{
 struct cvec *VAR_2;
 chr VAR_3,
    VAR_4;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_3(VAR_1);

 VAR_2 = FUNC_1(VAR_0, 2, 0);
 FUNC_0(VAR_2, VAR_3);
 if (VAR_3 != VAR_4)
  FUNC_0(VAR_2, VAR_4);
 return VAR_2;
}
