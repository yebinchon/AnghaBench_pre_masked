
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* p; } ;
typedef TYPE_1__ fz_vertex ;
struct TYPE_12__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_mesh_processor ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 float FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__,float,float) ;
 int FUNC_2 (int *,int *,TYPE_1__*,float*) ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_1, fz_matrix VAR_2,
  fz_point VAR_3, float VAR_4, float VAR_5,
  fz_point VAR_6, float VAR_7, float VAR_8,
  int VAR_9,
  fz_mesh_processor *VAR_10)
{
 fz_vertex VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 float VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23;

 VAR_19 = FUNC_0(VAR_6 - VAR_3, VAR_6 - VAR_3);
 VAR_20 = VAR_0 / VAR_9;

 VAR_21 = 0;
 for (VAR_23 = 1; VAR_23 <= VAR_9; VAR_23++)
 {
  VAR_22 = VAR_23 * VAR_20;

  VAR_11 = FUNC_3(FUNC_1(VAR_3, VAR_4, VAR_19 + VAR_21), VAR_2);
  VAR_12 = FUNC_3(FUNC_1(VAR_3, VAR_4, VAR_19 + VAR_22), VAR_2);
  VAR_13 = FUNC_3(FUNC_1(VAR_6, VAR_7, VAR_19 + VAR_21), VAR_2);
  VAR_14 = FUNC_3(FUNC_1(VAR_6, VAR_7, VAR_19 + VAR_22), VAR_2);
  VAR_15 = FUNC_3(FUNC_1(VAR_3, VAR_4, VAR_19 - VAR_21), VAR_2);
  VAR_16 = FUNC_3(FUNC_1(VAR_3, VAR_4, VAR_19 - VAR_22), VAR_2);
  VAR_17 = FUNC_3(FUNC_1(VAR_6, VAR_7, VAR_19 - VAR_21), VAR_2);
  VAR_18 = FUNC_3(FUNC_1(VAR_6, VAR_7, VAR_19 - VAR_22), VAR_2);

  FUNC_2(VAR_1, VAR_10, &VAR_11, &VAR_5);
  FUNC_2(VAR_1, VAR_10, &VAR_12, &VAR_5);
  FUNC_2(VAR_1, VAR_10, &VAR_13, &VAR_8);
  FUNC_2(VAR_1, VAR_10, &VAR_14, &VAR_8);
  FUNC_2(VAR_1, VAR_10, &VAR_15, &VAR_5);
  FUNC_2(VAR_1, VAR_10, &VAR_16, &VAR_5);
  FUNC_2(VAR_1, VAR_10, &VAR_17, &VAR_8);
  FUNC_2(VAR_1, VAR_10, &VAR_18, &VAR_8);

  FUNC_4(VAR_1, VAR_10, &VAR_11, &VAR_13, &VAR_14, &VAR_12);
  FUNC_4(VAR_1, VAR_10, &VAR_15, &VAR_17, &VAR_18, &VAR_16);

  VAR_21 = VAR_22;
 }
}
