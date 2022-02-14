
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* gen_syndrome ) (int,size_t,void**) ;} ;


 int FUNC_0 (size_t,int *,int *,int *,int const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 int ** VAR_4 ;
 int FUNC_3 (int,size_t,void**) ;

__attribute__((used)) static void FUNC_4(int VAR_5, size_t VAR_6, int VAR_7,
  void **VAR_8)
{
 u8 *VAR_9, *VAR_10, *VAR_11;
 const u8 *VAR_12;

 VAR_9 = (u8 *)VAR_8[VAR_5 - 2];
 VAR_10 = (u8 *)VAR_8[VAR_5 - 1];





 VAR_11 = (u8 *)VAR_8[VAR_7];
 VAR_8[VAR_7] = (void *)VAR_1;
 VAR_8[VAR_5 - 1] = VAR_11;

 VAR_0.gen_syndrome(VAR_5, VAR_6, VAR_8);


 VAR_8[VAR_7] = VAR_11;
 VAR_8[VAR_5 - 1] = VAR_10;


 VAR_12 = VAR_4[VAR_3[VAR_2[VAR_7]]];

 FUNC_1();
 FUNC_0(VAR_6, VAR_9, VAR_10, VAR_11, VAR_12);
 FUNC_2();
}
