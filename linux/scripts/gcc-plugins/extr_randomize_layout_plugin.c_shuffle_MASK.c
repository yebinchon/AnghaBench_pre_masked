
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int tree ;
typedef int ranctx ;
typedef scalar_t__ const_tree ;


 unsigned char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*,scalar_t__) ;
 int FUNC_4 (int *,unsigned long,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int *,unsigned long,int *) ;
 int FUNC_8 (int *,int *) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(const_tree VAR_4, tree *VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 u64 VAR_8[4];
 ranctx VAR_9;
 const unsigned char *VAR_10;

 if (VAR_6 == 0)
  return;

 FUNC_5(FUNC_1(VAR_4) == VAR_0);

 VAR_10 = FUNC_0(VAR_4);
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_8[VAR_7] = VAR_2[VAR_7];
  VAR_8[VAR_7] ^= FUNC_6(VAR_10);
 }

 FUNC_8(&VAR_9, (u64 *)&VAR_8);

 if (VAR_1)
  FUNC_7(VAR_5, VAR_6, &VAR_9);
 else
  FUNC_4(VAR_5, VAR_6, &VAR_9);
}
