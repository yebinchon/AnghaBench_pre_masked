
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int relowner; } ;
struct TYPE_5__ {scalar_t__ constr_queryno; } ;
typedef int * SPIPlanPtr ;
typedef int Relation ;
typedef TYPE_1__ RI_QueryKey ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int *,int*) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int,int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int ,char const*) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static SPIPlanPtr
FUNC_8(const char *VAR_5, int VAR_6, Oid *VAR_7,
    RI_QueryKey *VAR_8, Relation VAR_9, Relation VAR_10)
{
 SPIPlanPtr VAR_11;
 Relation VAR_12;
 Oid VAR_13;
 int VAR_14;





 if (VAR_8->constr_queryno <= VAR_1)
  VAR_12 = VAR_10;
 else
  VAR_12 = VAR_9;


 FUNC_0(&VAR_13, &VAR_14);
 FUNC_5(FUNC_1(VAR_12)->relowner,
         VAR_14 | VAR_2 |
         VAR_3);


 VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7);

 if (VAR_11 == ((void*)0))
  FUNC_6(VAR_0, "SPI_prepare returned %s for %s", FUNC_4(VAR_4), VAR_5);


 FUNC_5(VAR_13, VAR_14);


 FUNC_2(VAR_11);
 FUNC_7(VAR_8, VAR_11);

 return VAR_11;
}
