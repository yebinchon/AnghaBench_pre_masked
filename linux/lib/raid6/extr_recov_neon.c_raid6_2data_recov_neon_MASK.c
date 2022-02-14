
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* gen_syndrome ) (int,size_t,void**) ;} ;


 int FUNC_0 (size_t,int *,int *,int *,int *,int const*,int const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 size_t* VAR_4 ;
 int ** VAR_5 ;
 int FUNC_3 (int,size_t,void**) ;

__attribute__((used)) static void FUNC_4(int VAR_6, size_t VAR_7, int VAR_8,
  int VAR_9, void **VAR_10)
{
 u8 *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 const u8 *VAR_15;
 const u8 *VAR_16;

 VAR_11 = (u8 *)VAR_10[VAR_6 - 2];
 VAR_12 = (u8 *)VAR_10[VAR_6 - 1];






 VAR_13 = (u8 *)VAR_10[VAR_8];
 VAR_10[VAR_8] = (void *)VAR_1;
 VAR_10[VAR_6 - 2] = VAR_13;
 VAR_14 = (u8 *)VAR_10[VAR_9];
 VAR_10[VAR_9] = (void *)VAR_1;
 VAR_10[VAR_6 - 1] = VAR_14;

 VAR_0.gen_syndrome(VAR_6, VAR_7, VAR_10);


 VAR_10[VAR_8] = VAR_13;
 VAR_10[VAR_9] = VAR_14;
 VAR_10[VAR_6 - 2] = VAR_11;
 VAR_10[VAR_6 - 1] = VAR_12;


 VAR_15 = VAR_5[VAR_2[VAR_9-VAR_8]];
 VAR_16 = VAR_5[VAR_4[VAR_3[VAR_8] ^
      VAR_3[VAR_9]]];

 FUNC_1();
 FUNC_0(VAR_7, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
 FUNC_2();
}
