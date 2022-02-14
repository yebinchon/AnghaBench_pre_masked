
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RelMapFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int const*,int ) ;
 int VAR_9 ;
 int FUNC_5 (int,int *,int,int,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(bool VAR_10, const RelMapFile *VAR_11)
{
 RelMapFile VAR_12;
 FUNC_0(VAR_6, VAR_3);


 FUNC_2(VAR_10);


 if (VAR_10)
  FUNC_3(&VAR_12, &VAR_9, sizeof(RelMapFile));
 else
  FUNC_3(&VAR_12, &VAR_8, sizeof(RelMapFile));





 FUNC_4(&VAR_12, VAR_11, VAR_7);


 FUNC_5(VAR_10, &VAR_12, 1, 1, 1,
       (VAR_10 ? VAR_2 : VAR_4),
       (VAR_10 ? VAR_1 : VAR_5),
       VAR_0);


 FUNC_1(VAR_6);
}
