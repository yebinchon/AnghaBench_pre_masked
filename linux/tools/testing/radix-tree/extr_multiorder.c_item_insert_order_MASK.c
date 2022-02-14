
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xarray {int dummy; } ;
struct item {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct xarray*,unsigned long,unsigned int) ;
 int FUNC_1 (struct item*) ;
 struct item* FUNC_2 (unsigned long,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct item*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct xarray *VAR_2, unsigned long VAR_3,
   unsigned VAR_4)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 struct item *VAR_5 = FUNC_2(VAR_3, VAR_4);

 do {
  FUNC_4(&VAR_1);
  FUNC_6(&VAR_1, VAR_5);
  FUNC_7(&VAR_1);
 } while (FUNC_5(&VAR_1, VAR_0));

 if (!FUNC_3(&VAR_1))
  return 0;

 FUNC_1(VAR_5);
 return FUNC_3(&VAR_1);
}
