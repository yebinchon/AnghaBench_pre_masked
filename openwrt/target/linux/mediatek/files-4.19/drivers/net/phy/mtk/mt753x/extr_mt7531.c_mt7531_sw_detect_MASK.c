
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int dummy; } ;
struct chip_rev {int rev; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gsw_mt753x*,int ) ;

__attribute__((used)) static int FUNC_1(struct gsw_mt753x *VAR_8, struct chip_rev *VAR_9)
{
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_8, VAR_2);

 if (((VAR_10 & VAR_0) >> VAR_1) == VAR_5) {
  if (VAR_9) {
   VAR_11 = FUNC_0(VAR_8, VAR_7);

   VAR_9->rev = VAR_10 & VAR_3;
   VAR_9->name = VAR_11 & VAR_6 ?
         "MT7531AE" : "MT7531BE";
  }

  return 0;
 }

 return -VAR_4;
}
