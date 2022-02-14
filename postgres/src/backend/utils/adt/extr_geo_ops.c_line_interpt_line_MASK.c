
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_4__ {double B; double A; double C; } ;
typedef int Point ;
typedef TYPE_1__ LINE ;


 scalar_t__ FUNC_0 (double,int ) ;
 int FUNC_1 (double) ;
 double FUNC_2 (double,double) ;
 double FUNC_3 (int ,int ) ;
 int FUNC_4 (double,double) ;
 double FUNC_5 (int ,double) ;
 int FUNC_6 (int *,double,double) ;

__attribute__((used)) static bool
FUNC_7(Point *VAR_0, LINE *VAR_1, LINE *VAR_2)
{
 float8 VAR_3,
    VAR_4;

 if (!FUNC_1(VAR_1->B))
 {
  if (FUNC_0(VAR_2->A, FUNC_4(VAR_1->A, FUNC_2(VAR_2->B, VAR_1->B))))
   return 0;

  VAR_3 = FUNC_2(FUNC_3(FUNC_4(VAR_1->B, VAR_2->C),
         FUNC_4(VAR_2->B, VAR_1->C)),
        FUNC_3(FUNC_4(VAR_1->A, VAR_2->B),
         FUNC_4(VAR_2->A, VAR_1->B)));
  VAR_4 = FUNC_2(-FUNC_5(FUNC_4(VAR_1->A, VAR_3), VAR_1->C), VAR_1->B);
 }
 else if (!FUNC_1(VAR_2->B))
 {
  if (FUNC_0(VAR_1->A, FUNC_4(VAR_2->A, FUNC_2(VAR_1->B, VAR_2->B))))
   return 0;

  VAR_3 = FUNC_2(FUNC_3(FUNC_4(VAR_2->B, VAR_1->C),
         FUNC_4(VAR_1->B, VAR_2->C)),
        FUNC_3(FUNC_4(VAR_2->A, VAR_1->B),
         FUNC_4(VAR_1->A, VAR_2->B)));
  VAR_4 = FUNC_2(-FUNC_5(FUNC_4(VAR_2->A, VAR_3), VAR_2->C), VAR_2->B);
 }
 else
  return 0;


 if (VAR_3 == 0.0)
  VAR_3 = 0.0;
 if (VAR_4 == 0.0)
  VAR_4 = 0.0;

 if (VAR_0 != ((void*)0))
  FUNC_6(VAR_0, VAR_3, VAR_4);

 return 1;
}
