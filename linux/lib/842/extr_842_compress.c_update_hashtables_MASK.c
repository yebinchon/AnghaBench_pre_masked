
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sw842_param {int in; int instart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sw842_param*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct sw842_param *VAR_3)
{
 u64 VAR_4 = VAR_3->in - VAR_3->instart;
 u64 VAR_5 = (VAR_4 >> 3) % (1 << VAR_2);
 u64 VAR_6 = (VAR_4 >> 2) % (1 << VAR_1);
 u64 VAR_7 = (VAR_4 >> 1) % (1 << VAR_0);

 FUNC_0(VAR_3, 8, VAR_5, 0);
 FUNC_0(VAR_3, 4, VAR_6, 0);
 FUNC_0(VAR_3, 4, VAR_6, 1);
 FUNC_0(VAR_3, 2, VAR_7, 0);
 FUNC_0(VAR_3, 2, VAR_7, 1);
 FUNC_0(VAR_3, 2, VAR_7, 2);
 FUNC_0(VAR_3, 2, VAR_7, 3);
}
