
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int,int *,int const*,int *,int *,int *,int *,int *,int *,int ) ;
 int FUNC_1 (int *,int const*,int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_device *VAR_2, const fz_path *VAR_3, int VAR_4, fz_matrix VAR_5, fz_rect VAR_6)
{
 fz_rect VAR_7 = FUNC_1(VAR_1, VAR_3, ((void*)0), VAR_5);
 VAR_7 = FUNC_2(VAR_7, VAR_6);
 FUNC_0(
  VAR_1,
  VAR_2,
  VAR_0,
  VAR_4,
  &VAR_7,
  VAR_3,
  ((void*)0),
  ((void*)0),
  ((void*)0),
  &VAR_5,
  ((void*)0),
  ((void*)0),
  0);
}
