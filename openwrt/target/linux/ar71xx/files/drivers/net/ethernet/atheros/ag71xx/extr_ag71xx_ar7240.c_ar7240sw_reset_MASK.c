
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ar7240sw*,int) ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (struct mii_bus*,int,int ,int) ;
 int FUNC_3 (struct mii_bus*,int ,int ,int ,int) ;
 int FUNC_4 (struct mii_bus*,int ,int ) ;
 int FUNC_5 (struct ar7240sw*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ar7240sw *VAR_11)
{
 struct mii_bus *VAR_12 = VAR_11->mii_bus;
 int VAR_13;
 int VAR_14;


 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++)
  FUNC_0(VAR_11, VAR_14);


 FUNC_6(2000, 3000);


 FUNC_4(VAR_12, VAR_6,
      VAR_3);

 VAR_13 = FUNC_3(VAR_12, VAR_6,
    VAR_3, 0, 1000);


 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  FUNC_2(VAR_12, VAR_14, VAR_9,
       VAR_0 | VAR_2 |
       VAR_1);
  FUNC_2(VAR_12, VAR_14, VAR_10,
       VAR_8 | VAR_7);
 }
 VAR_13 = FUNC_1(VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_5(VAR_11);
 return VAR_13;
}
