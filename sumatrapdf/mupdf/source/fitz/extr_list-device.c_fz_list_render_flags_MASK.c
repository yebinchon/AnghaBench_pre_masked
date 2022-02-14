
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int,int *,int *,int *,int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_2, fz_device *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;


 if (VAR_4 == VAR_1 && VAR_5 == 0)
  VAR_6 = 1;
 else if (VAR_4 == 0 && VAR_5 == VAR_1)
  VAR_6 = 0;
 else
 {
  FUNC_0("Unsupported flags combination" == ((void*)0));
  return;
 }
 FUNC_1(
  VAR_2,
  VAR_3,
  VAR_0,
  VAR_6,
  ((void*)0),
  ((void*)0),
  ((void*)0),
  ((void*)0),
  ((void*)0),
  ((void*)0),
  ((void*)0),
  ((void*)0),
  0);
}
